void sub_0803A8EC(void *);
void sub_08033AF4(s32);
void sub_0807CF2C(void *);
void sub_0807D2E4(void *);
void sub_0807D3E4(void *);

void sub_0807D760(void *arg0) {
    Entity *e = arg0;
    e->unk41 = *(u8 *)((u8 *)(u32)e->unk6C + 0x41);
    if ((u16)(*(u16 *)0x03001864 - 0x10) > 1U) {
        sub_0803A8EC(arg0);
    }
}

void sub_0807DADC(void) {
    sub_08033AF4(3);
    *(u8 *)0x03002B68 |= 8;
    *(u16 *)(0x0202DBD0 + 6) = 0x1768;
    *(u16 *)(0x0202DBD0 + 0xA) = 0x474C;
    *(u16 *)0x03002488 = (0x8000 & *(u16 *)0x03002488) | *(u16 *)0x03002484;
    *(u16 *)(0x0202DBD0 + 0x284) = 0x83;
    *(u16 *)0x03002484 = 0x83;
}

void sub_0807D3A8(void *arg0) {
    Entity *e = arg0;
    Entity *r2 = (Entity *)(u32)e->unk78;
    if (r2->unk4D == 0) {
        sub_0807CF2C(arg0);
    } else {
        e->unk41 = r2->unk41;
        *(u8 *)((u8 *)e + 0x2C) = *(u8 *)((u8 *)r2 + 0x2C) + 1;
        sub_0807D2E4(arg0);
    }
}

void sub_0807D2AC(void *arg0) {
    u8 temp = *(u8 *)((u8 *)arg0 + 0x54) - 1;
    *(u8 *)((u8 *)arg0 + 0x54) = temp;
    if (temp == 0) {
        sub_0807CF2C(arg0);
    } else {
        if (*(u8 *)((u8 *)arg0 + 0x3C) == 0x32) {
            sub_0807D2E4(arg0);
        } else {
            sub_0807D3E4(arg0);
        }
    }
}

void sub_08033AF4(s32);
void sub_0807CF2C(void *);
void sub_0807D2E4(void *);
void sub_0807D3E4(void *);

extern u8 D_03002AB0[];
extern u16 D_0202DBD0[];
extern u16 D_030023E0[];

void sub_0807DADC(void) {
    u16 *p;
    u16 v;
    sub_08033AF4(3);
    D_03002AB0[0xB8] |= 8;
    D_0202DBD0[3] = 0x1768;
    D_0202DBD0[5] = 0x474C;
    D_030023E0[0x54] = (0x8000 & D_030023E0[0x54]) | D_030023E0[0x52];
    p = (u16 *)((u32 *)D_0202DBD0 + 0xA1);
    v = 0x83;
    *p = v;
    D_030023E0[0x52] = v;
}

void sub_0807D3A8(void *arg0) {
    Entity *parent = (Entity *)(u32)((Entity *)arg0)->unk78;
    Entity *e = arg0;
    if (parent->unk4D == 0) {
        sub_0807CF2C(e);
    } else {
        e->unk41 = parent->unk41;
        *(u8 *)((u8 *)e + 0x2C) = *(u8 *)((u8 *)parent + 0x2C) + 1;
        sub_0807D2E4(e);
    }
}

void sub_0807D2AC(void *arg0) {
    u8 *p54 = (u8 *)arg0 + 0x54;
    u8 t = *p54 - 1;
    *p54 = t;
    if (t == 0) {
        sub_0807CF2C(arg0);
    } else {
        u8 *p3c = (u8 *)arg0 + 0x3C;
        if (*p3c == 0x32) {
            sub_0807D2E4(arg0);
        } else {
            sub_0807D3E4(arg0);
        }
    }
}

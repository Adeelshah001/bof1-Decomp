extern u16 D_03001864;
extern u16 D_020210C2[];
extern u16 D_020212C2[];

void sub_0803A8EC(void *);
void sub_0803800C(void *, s32, s32);

void sub_0807B388(void *arg0) {
    if (((u8 *)arg0)[0xF1] & 0x80) {
        ((u8 *)arg0)[0x2C] = 0;
    } else {
        ((Entity *)arg0)->unk2C = ((Entity *)arg0)->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}

void sub_0807B3C4(u16 arg0) {
    u16 offset = arg0 << 5;
    u16 prev = *(u16 *)((u8 *)D_020210C2 + offset);
    u16 last = *(u16 *)((u8 *)D_020210C2 + offset + 0x1C);
    s32 i;
    *(u16 *)((u8 *)D_020212C2 + offset) = last;
    *(u16 *)((u8 *)D_020210C2 + offset) = last;
    i = 0xD;
    do {
        u16 next = *(u16 *)((u8 *)D_020210C2 + offset + 2);
        *(u16 *)((u8 *)D_020212C2 + offset + 2) = prev;
        *(u16 *)((u8 *)D_020210C2 + offset + 2) = prev;
        offset += 2;
        prev = next;
        i--;
    } while (i >= 0);
}

void sub_0807B2DC(u8 arg0) {
    if (!(*(vu16 *)(D_03004830 + 0x10) & 1)) {
        u16 offset = arg0 << 5;
        u16 prev = *(u16 *)((u8 *)D_020210C2 + offset);
        u16 last = *(u16 *)((u8 *)D_020210C2 + offset + 0x1C);
        s32 i;
        *(u16 *)((u8 *)D_020212C2 + offset) = last;
        *(u16 *)((u8 *)D_020210C2 + offset) = last;
        i = 0xD;
        do {
            u16 next = *(u16 *)((u8 *)D_020210C2 + offset + 2);
            *(u16 *)((u8 *)D_020212C2 + offset + 2) = prev;
            *(u16 *)((u8 *)D_020210C2 + offset + 2) = prev;
            offset += 2;
            prev = next;
            i--;
        } while (i >= 0);
    }
}

void sub_0807B4D4(void *arg0) {
    sub_0803800C(arg0, 0xC, 0);
    if (((u8 *)arg0)[0xF1] & 0x80) {
        ((u8 *)arg0)[0x2C] = 0;
    } else {
        ((Entity *)arg0)->unk2C = ((Entity *)arg0)->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}

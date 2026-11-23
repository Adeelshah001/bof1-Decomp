void sub_080317DC(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    u8 val = base[0xB8];
    val &= 0xF7;
    base[0xB8] = val;
    base[0x4D] = 0;
    *(u16 *)(base + 0x50) = 0;
}

void sub_08031830(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    u8 val = base[0x54] - 1;
    base[0x54] = val;
    if (val != 0) return;
    base[0x50] = 0;
    base[0x4D] = 0;
}

extern u8 sub_080281D4(Entity *, u16 *, u16 *, u8 *);
extern void sub_0802C840(s32, u16, u16, u8);

void sub_08031754(Entity *arg0) {
    u16 sp0, sp2;
    u8 sp4;
    u8 result;
    sp0 = 0;
    sp2 = 0;
    sp4 = 0;
    result = sub_080281D4(arg0, &sp0, &sp2, &sp4);
    if (result != 0) {
        sub_0802C840(0x11F, sp0, sp2, sp4);
        return;
    }
    arg0->unk4D = 0;
    *(u16 *)((u8 *)arg0 + 0x50) = 0;
}

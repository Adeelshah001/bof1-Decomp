void sub_080317DC(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    base[0xB8] &= 0xF7;
    base[0x4D] = 0;
    *(u16 *)(base + 0x50) = 0;
}

void sub_08031830(Entity *arg0) {
    u8 temp = arg0->unk54 - 1;
    arg0->unk54 = temp;
    if (temp == 0) {
        ((u8 *)arg0)[0x50] = 0;
        arg0->unk4D = 0;
    }
}

extern u32 D_080FA5A4[];
extern void sub_080A0774(Entity *, u32);
extern void sub_080327A4(Entity *, u16 *, u16 *);
extern void sub_08038AB4(u16, u16, u16 *);
extern void sub_0802E788(s32, u16);

void sub_08031860(Entity *arg0) {
    u16 x, y, out;
    sub_080A0774(arg0, D_080FA5A4[arg0->unk51 >> 1]);
    sub_080327A4(arg0, &x, &y);
    sub_08038AB4(x, y, &out);
    sub_0802E788((s32)arg0, out);
}

extern u8 sub_080281D4(Entity *, u16 *, u16 *, u8 *);
extern void sub_0802C840(s32, u16, u16, u8);

void sub_08031754(Entity *arg0) {
    u16 sp0, sp2;
    u8 sp4 = 0;
    u8 result = sub_080281D4(arg0, &sp0, &sp2, &sp4);
    if (result != 0) {
        sub_0802C840(0x11F, sp0, sp2, sp4);
        return;
    }
    arg0->unk4D = 0;
    ((u8 *)arg0)[0x50] = 0;
    ((u8 *)arg0)[0x52] = 0; // halfword write at 0x50
}

void sub_080317DC(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    base[0xB8] &= 0xF7;
    base[0x4D] = 0;
    *(u16 *)(base + 0x50) = 0;
}

extern s32 sub_08038458(s32);
void sub_08032A78(Entity *, s32);

void sub_080317F8(Entity *arg0) {
    if ((sub_08038458(1) << 0x18) != 0) {
        sub_08032A78(arg0, 0x8777);
        ((u8 *)arg0)[0xBF] = 0x20;
        arg0->unk54 = 2;
        ((u8 *)arg0)[0x50] = 2;
    }
}

void sub_08031830(Entity *arg0) {
    u8 temp = arg0->unk54 - 1;
    arg0->unk54 = temp;
    if (temp == 0) {
        ((u8 *)arg0)[0x50] = 0;
        arg0->unk4D = 0;
    }
}

extern void sub_080A0774(Entity *, u32);
extern void sub_080327A4(Entity *, u16 *, u16 *);
extern void sub_08038AB4(u16, u16, u16 *);
extern void sub_0802E788(s32, u16);

void sub_08031860(Entity *arg0) {
    u16 sp0, sp2, sp4;
    sub_080A0774(arg0, *(u32 *)(0x080FA5A4 + ((arg0->unk51 >> 1) * 4)));
    sub_080327A4(arg0, &sp0, &sp2);
    sub_08038AB4(sp0, sp2, &sp4);
    sub_0802E788((s32)arg0, sp4);
}

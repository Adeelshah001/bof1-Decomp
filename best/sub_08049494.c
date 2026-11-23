extern void sub_08049C40(Entity *arg0, s32 arg1, s32 arg2);
extern void sub_08049CE4(Entity *arg0, s32 arg1);
extern s32 sub_080448A4(Entity *arg0, s32 arg1);
extern void (*sub_08049C88)(void);
extern void (*sub_08049CA4)(void);
extern void (*sub_08049CC0)(void);
extern u16 D_030023E0[];

void sub_080494B4(Entity *arg0) {
    arg0->unk64 = (u32)sub_08049C88;
    sub_08049C40(arg0, 0xA0, 0x3E);
}

void sub_08049494(Entity *arg0) {
    if (arg0->unk3B == 1) {
        arg0->unk2C = (u16)(arg0->unk2C - 1);
    }
    sub_08049CE4(arg0, 0x2C);
}

void sub_08049514(Entity *arg0) {
    arg0->unk2C = (s16)(arg0->unk6 - 0x90);
    arg0->unk64 = (u32)sub_08049CA4;
    if (D_030023E0[0xA4 / 2] == 0xD6) {
        sub_08049C40(arg0, 0xA0, 0x2E);
        arg0->unk6 = (u16)(arg0->unk6 + 1);
        return;
    }
    sub_08049C40(arg0, 0xA0, 0x3E);
}

void sub_0804944C(Entity *arg0) {
    arg0->unk64 = (u32)sub_08049CC0;
    sub_08049C40(arg0, 0xA0, 0x3E);
    if (((sub_080448A4(arg0, 0xD) << 0x18) != 0) && (arg0->unk60 == 0)) {
        arg0->unk3A = (u8)(0x10 | arg0->unk3A);
        arg0->unk64 = (u32)sub_08049C88;
    }
}

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x4D - 0x3D];
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 unk55;
    u8 pad56[0xB8 - 0x56];
    u8 unkB8;
} Struct_08031;

void sub_08032A78(Struct_08031 *, s32);
u8 sub_08038458(s32);

void sub_0803128C(Struct_08031 *arg0) {
    u8 val = --arg0->unk54;

    if (val == 0) {
        sub_08032A78(arg0, 0x8786);
        arg0->unk4D = val;
        arg0->unk50 = val;
    }
}

void sub_08031314(Struct_08031 *arg0) {
    u8 val = --arg0->unk54;

    if (val == 0) {
        sub_08032A78(arg0, 0x8784);
        arg0->unk50 = val;
        arg0->unk4D = val;
    }
}

void sub_080311FC(Struct_08031 *arg0) {
    if (arg0->unk3C == 4) {
        sub_08032A78(arg0, 0x8452);
    }
    D_03004830[0x36] = 0;
    arg0->unkB8 &= 0xFB;
    arg0->unk4D = 0;
    arg0->unk50 = 0;
}

void sub_08031348(Struct_08031 *arg0) {
    if (sub_08038458(1) != 0) {
        sub_08032A78(arg0, 0x8782);
        arg0->unk50 = 2;
        sub_08056C18(0xA);
        arg0->unk50 = 2;
        arg0->unk55 = 3;
        arg0->unk54 = 0;
    }
}

extern const u8 D_08152036[];
extern u16 D_03004F30[];
extern u8 D_03004FD0[];

void sub_080846E0(s32);
void sub_08084F90(s32);

struct UnkStruct84E {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x63 - 0x3C];
    u8 unk63;
    u8 pad64[0x7D - 0x64];
    u8 unk7D;
    u8 pad7E[0xE0 - 0x7E];
    u8 unkE0;
    u8 unkE1;
    u8 unkE2;
    u8 padE3[0xFC - 0xE3];
    u8 unkFC;
};

void sub_08084E7C(struct UnkStruct84E *arg0, s32 arg1) {
    if (*(u8 *)(arg0->unkFC + (u32)D_08152036) & 0xF0) {
        sub_080846E0(arg1);
    }
}

void sub_08084EA0(struct UnkStruct84E *arg0) {
    switch (arg0->unk63) {
    case 0:
        break;
    case 3:
        sub_08084F90(8);
    case 2:
        sub_08084F90(4);
    case 1:
        sub_08084F90(0);
        break;
    }
}

s32 sub_08084E44(s32 arg0, s32 arg1) {
    s32 r2 = arg0 & 0xFF;
    s32 r4 = 0;
    s32 r3 = 0x10;
    if (arg1 != 0) {
        r3 = 1;
    }
    while (1) {
        if (r3 & D_03004F30[7]) {
            if (--r2 < 0) {
                break;
            }
        }
        r4++;
        r3 <<= 1;
    }
    return r4;
}

void sub_08084E14(struct UnkStruct84E *arg0) {
    u8 *p = (u8 *)(arg0->unk3B * 4 + (u32)D_03004FD0);
    arg0->unkE0 = p[0];
    arg0->unkE1 = p[1];
    arg0->unkE2 = p[2];
    arg0->unk7D = p[3];
}

typedef struct {
    u8 pad00[0x18];
    u32 unk18;
    u8 pad1C[0x2A - 0x1C];
    u16 unk2A;
    u8 pad2C[0x50 - 0x2C];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x90 - 0x56];
    u32 unk90;
    u32 unk94;
} Struct_08032;

extern u8 D_03004550[];
extern u8 D_0300169C;
extern const u8 D_0821DDC8[];

u8 sub_08001770(s32);
void sub_080017EC(s32);
void sub_0800312C(s32, s32);

s32 sub_08032DC8(Struct_08032 *arg0) {
    if (--arg0->unk54 == 0) {
        arg0->unk54 = 4;
        ((Entity *)D_03003420)->unk68 += 2;
        arg0->unk55 = 8;
        arg0->unk50 = 8;
    }
    return 0;
}

s32 sub_08032DFC(Struct_08032 *arg0) {
    if (--arg0->unk54 == 0) {
        if (sub_08001770(1) != 0) {
            arg0->unk94 = 0x8755;
        } else {
            sub_080017EC(1);
            arg0->unk94 = 0x8754;
        }
        arg0->unk90 = arg0->unk94;
        arg0->unk50 = 0x10;
    }
    return 0;
}

s32 sub_08032E70(Struct_08032 *arg0) {
    if (D_03004550[0x23] & 0x80) {
        arg0->unk54 = 0x1E;
        arg0->unk50 = 0x18;
    } else {
        sub_0800312C(0x10, 0);
        arg0->unk50 = 0x14;
    }
    return 0;
}

void sub_080332C0(Struct_08032 *arg0) {
    const u8 *table[1] = { D_0821DDC8 };
    u32 idx = arg0->unk2A >> 1;
    const u8 *p = table[D_0300169C] + idx * 6;

    arg0->unk18 = p[0] | (p[1] << 8) | (p[2] << 16);
}

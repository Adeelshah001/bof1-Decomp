void sub_080A0664(s32, s32, u16);
void sub_080A06D4(s32, s32, u16);

void sub_08004104(s32 arg0, u16 arg1, u16 arg2) {
    u32 addr = 0x0E000000 + arg1;
    sub_080A0664(arg0, addr, arg2);
    sub_080A06D4(arg0, addr, arg2);
}

typedef struct {
    u8 pad00[0x2A9];
    u8 unk2A9;
} Struct_0202DBD0;

extern u8 D_0202DBD0[];
extern u8 D_03001860;
extern u8 D_030033FC;
void sub_0809EDC8(u8);

void sub_08003FA0(u8 arg0) {
    D_03001860 = D_030033FC;
    D_030033FC = arg0;
    if (arg0 == 0x28) {
        sub_0809EDC8(0x28);
    } else if (((Struct_0202DBD0 *)D_0202DBD0)->unk2A9 != 0) {
        sub_0809EDC8(arg0);
    }
}

typedef struct {
    u8 pad00[4];
    u8 unk4;
} Struct_030016E0;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} Struct_03000808;

extern Struct_030016E0 D_030016E0;
extern Struct_03000808 D_03000808;
void sub_08004034(u16);

s32 sub_08003F50(void) {
    if (D_030016E0.unk4 == 0) {
        D_03000808.unk2--;
        sub_08004034(D_03000808.unk2);
        if (D_03000808.unk2 == 0) {
            if (D_03000808.unk6 == 0) {
                D_03000808.unk0 = 6;
                D_03000808.unk2 = 0x78;
            } else {
                return 1;
            }
        }
    } else {
        D_03000808.unk6 = 1;
    }
    return 0;
}

typedef struct {
    u8 pad00[0x36];
    u8 unk36;
} Struct_03004830;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct_030023E0;

extern u8 D_030023E0[];
void sub_08039054(void);
void sub_0800359C(void);
void sub_0802FEE0(void);
void sub_08002CCC(u16);

s32 sub_080031D4(u8 arg0) {
    if (!(arg0 & 1)) {
        ((Struct_03004830 *)D_03004830)->unk36 = 0x82;
    } else {
        ((Struct_03004830 *)D_03004830)->unk36 = 0x81;
    }
    sub_08039054();
    sub_0800359C();
    sub_0802FEE0();
    sub_08002CCC(((Struct_030023E0 *)D_030023E0)->unkA4);
    return 0;
}

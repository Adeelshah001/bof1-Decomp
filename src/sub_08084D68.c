struct Unk4F50 {
    u8 pad00[0x48];
    u8 unk48;
    u8 pad49[0x5C - 0x49];
    u8 unk5C;
    u8 pad5D[0x74 - 0x5D];
    u16 unk74;
};
extern struct Unk4F50 D_03004F50;

struct UnkStruct84C {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u8 pad2C[0x3A - 0x2C];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
    u8 pad42[0x50 - 0x42];
    u8 unk50;
    u8 pad51[0x61 - 0x51];
    u8 unk61;
    u8 pad62[0x78 - 0x62];
    struct UnkStruct84C *unk78;
    u8 pad7C[0xFA - 0x7C];
    u16 unkFA;
};

extern const u8 D_082D2E08[][1];

u8 sub_08003104(void);
s32 sub_08037974(u8, u8);

void sub_08084C14(struct UnkStruct84C *arg0) {
    if (!(D_03004F50.unk5C & 0x80)) {
        struct UnkStruct84C *p = arg0->unk78;
        u8 kind = p->unk3C;
        s32 v;
        if (kind == 0x45 || (kind == 0x2D && (v = p->unk61, v <= 1) && !(sub_08003104() & 3))) {
            D_03004F50.unk5C = 1;
        }
    }
}

s32 sub_08084D68(struct UnkStruct84C *arg0, struct UnkStruct84C *arg1, u8 arg2, u16 arg3) {
    u16 idx = sub_08037974(arg0->unk50, arg2);
    u16 val;
    s32 res;
    idx += D_082D2E08[arg3][0] | (D_082D2E08[arg3 + 1][0] << 8);
    val = (D_082D2E08[idx + 0x0A][0] | (D_082D2E08[idx + 0x0B][0] << 8)) - 1;
    res = 0;
    if (val >= arg1->unkFA) {
        res = 1;
    }
    return res;
}

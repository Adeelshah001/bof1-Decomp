extern u8 D_0300169C;
extern u8 D_080FFB74[];
extern u8 D_03002B98[];

struct Unk4550 {
    u8 pad00[0x0C];
    const void *unk0C;
    u8 pad10[0x1D - 0x10];
    u8 unk1D;
    u8 pad1E[0x21 - 0x1E];
    u8 unk21;
};
extern struct Unk4550 D_03004550;

struct Unk2AB0Entry {
    u16 unk0;
    u8 unk2;
    u8 unk3;
    u8 unk4;
    u8 pad5[0xB0 - 5];
    u8 unkB0[0x124 - 0xB0];
};

struct Unk2AB0 {
    u8 pad0[0x38];
    struct Unk2AB0Entry arr[8];
};
extern struct Unk2AB0 D_03002AB0;

void sub_08059F64(void) {
    s32 i;
    u8 target;

    if (D_0300169C != 0) {
        D_03004550.unk0C = D_080FFB74;
    } else {
        target = D_03002AB0.arr[0].unk4;
        for (i = 0; i <= 7; i++) {
            if (D_03002AB0.arr[i].unk2 != 0 && D_03002AB0.arr[i].unk4 == target) {
                D_03004550.unk0C = D_03002AB0.arr[i].unkB0;
                goto done;
            }
        }
        D_03004550.unk0C = D_03002B98;
    }
done:
    D_03004550.unk21 = 4;
    D_03004550.unk1D |= 2;
}

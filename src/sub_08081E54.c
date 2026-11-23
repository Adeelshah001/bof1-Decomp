extern const u8 D_082D2708[];
s32 sub_080987FC(u8, u16 *, void *);

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0xF2 - 0x3D];
    u8 unkF2;
} Struct08081E54;

s32 sub_08081E54(Struct08081E54 *arg0) {
    u16 sp0;
    s32 cond;
    s32 res;
    s32 i;

    cond = (arg0->unk3C != 1 && arg0->unk3C != 3);
    res = 0;
    i = 0;
    while (sub_080987FC(i, &sp0, arg0) == 0) {
        if (!cond || arg0->unkF2 >= D_082D2708[sp0 + 0xE]) {
            res = i + 1;
        }
        i++;
    }
    return res;
}

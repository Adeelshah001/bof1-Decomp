extern u8 D_03002AB0[];
extern u8 D_030023E0[];
extern const u8 D_08151318[];
extern const u8 D_0815132A[];
u8 sub_08075428(u8);
u16 sub_08074ECC(s32);
u8 sub_08075278(void *, u8);

u8 sub_0807514C(void)
{
    u8 *state = D_03002AB0;
    u8 count = ++state[0xBC];
    u8 index;
    if (count > 0x41)
        state[0xBC] = count = 0x42;
    index = (u8)(count - 1);
    return sub_08075428(D_08151318[(index >> 3) & 7]);
}

void sub_080751DC(void)
{
    if (*(u16 *)(D_030023E0 + 0xA0) != 3 ||
        (D_0815132A[*(u16 *)(D_03004830 + 0x16)] & 7) != 3) {
        D_03002AB0[0xBC] = 0;
    }
}

u16 sub_08075214(s32 arg0)
{
    u8 *state = D_03002AB0;
    u8 count = state[0xC0];

    switch (count) {
    case 1:
        return 0;
    default:
        state[0xC0] = count - 1;
        return 0;
    case 0:
        return sub_08074ECC(arg0);
    }
}

s32 sub_08075248(void *object, s16 *out)
{
    u8 kind = sub_08075278(object, ((u8 *)object)[0x61] * 2);
    s32 result;

    *out = kind;
    if (kind != 5) {
        result = 0;
    } else {
        s16 value = 0x400;
        *out = value;
        result = 1;
    }
    return result;
}

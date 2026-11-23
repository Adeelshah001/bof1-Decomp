extern const u8 D_082D2618[];
extern const u8 D_082D2708[];

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
} Obj98;

u16 sub_08098840(u8);
s32 sub_08098730(s32, s32);
s32 sub_0809887C(s32);
s32 sub_080988A4(s32);

u16 sub_080987E4(u8 arg0)
{
    return D_082D2618[arg0 * 2] - 0x80;
}

s32 sub_080987FC(u8 arg0, u16 *arg1, Obj98 *arg2)
{
    *arg1 = D_082D2618[arg2->unk3C * 2] - 0x80;
    if (arg0 < D_082D2618[*arg1 - 1]) {
        *arg1 += arg0;
        *arg1 = sub_08098840(D_082D2618[*arg1]);
        return 0;
    }
    return 1;
}

s32 sub_080987A0(s32 arg0, u16 arg1, s32 arg2)
{
    switch (D_082D2708[arg1 + 0xF]) {
    case 0:
    case 1:
    case 2:
    case 3:
        return sub_0809887C(arg2);
    case 4:
        return sub_08098730(arg0, arg2);
    case 7:
        return sub_080988A4(arg2);
    default:
        return 0;
    }
}

u8 sub_0809885C(Obj98 *arg0)
{
    return D_082D2618[(u16)(D_082D2618[arg0->unk3C * 2] - 0x80) - 1];
}

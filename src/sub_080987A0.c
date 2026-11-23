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
    return *(const u8 *)(arg0 * 2 + (u32)D_082D2618) - 0x80;
}

s32 sub_080987FC(u8 arg0, u16 *arg1, Obj98 *arg2)
{
    u16 val;
    const u8 *table;
    s32 ret;

    table = D_082D2618;
    *arg1 = *(const u8 *)(arg2->unk3C * 2 + (u32)table) - 0x80;
    val = *arg1;
    if (arg0 < *(const u8 *)((val - 1) + (u32)table)) {
        *arg1 = val + arg0;
        *arg1 = sub_08098840(*(const u8 *)(*arg1 + (u32)table));
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}

s32 sub_080987A0(s32 arg0, u16 arg1, s32 arg2)
{
    u8 val = D_082D2708[arg1 + 0xF];
    if (val <= 3) {
        return sub_0809887C(arg2);
    } else if (val == 4) {
        return sub_08098730(arg0, arg2);
    } else if (val == 7) {
        return sub_080988A4(arg2);
    } else {
        return 0;
    }
}

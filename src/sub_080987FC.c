extern const u8 D_082D2618[];

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
} Obj98;

u16 sub_08098840(u8);

s32 sub_080987FC(u8 arg0, u16 *arg1, Obj98 *arg2)
{
    u16 val;
    s32 ret;

    *arg1 = *(const u8 *)(arg2->unk3C * 2 + (u32)D_082D2618) - 0x80;
    val = *arg1;
    if (arg0 < D_082D2618[val - 1]) {
        *arg1 = val + arg0;
        *arg1 = sub_08098840(D_082D2618[*arg1]);
        ret = 0;
    } else {
        ret = 1;
    }
    return ret;
}

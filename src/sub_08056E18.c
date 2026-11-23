u8 sub_08055BA8(void *, u8 *, u16, u16);
s32 sub_0805600C(s32);
void sub_08056A64(void *, u16);

void sub_08056E30(u8 *actor)
{
    u16 current = *(u16 *)(actor + 0xF8);
    *(u16 *)(actor + 0xFA) = current;
}

u8 sub_08056E18(void *unused, void *actor, u8 *result, u16 index)
{
    return sub_08055BA8(actor, result, index, 50);
}

s32 sub_08056E50(s32 arg0, u8 *actor)
{
    s32 diff;
    u32 changed = 0;

    if (actor[0x3A] != 0) {
        changed = *(u16 *)(actor + 0xF6) ^ *(u16 *)(actor + 0xF4);
        diff = changed;
        changed = ((u32)(-diff | diff)) >> 31;
    }
    if (changed) {
        if (actor[0xF1] & 0x80)
            return 0x80000044;
        sub_08056A64(actor, 50);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}

u8 sub_08056E00(void *unused, void *actor, u8 *result, u16 index)
{
    return sub_08055BA8(actor, result, index, 100);
}

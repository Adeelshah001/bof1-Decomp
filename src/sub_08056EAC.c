s32 sub_0805600C(s32);
s32 sub_08056B9C(void *);

s32 sub_08056EAC(s32 arg0, void *arg1)
{
    u32 changed = 0;
    s32 diff;
    u16 val;

    if (((u8 *)arg1)[0x3A] != 0) {
        changed = *(u16 *)((u8 *)arg1 + 0xF6) ^ *(u16 *)((u8 *)arg1 + 0xF4);
        diff = changed;
        changed = ((u32)(-diff | diff)) >> 31;
    }
    if (changed != 0) {
        if (((u8 *)arg1)[0xF1] & 0x80)
            return 0x80000044;
        val = *(u16 *)((u8 *)arg1 + 0xF4);
        *(u16 *)((u8 *)arg1 + 0xF6) = val;
        sub_08056B9C(arg1);
        return sub_0805600C(arg0);
    }
    return 0x8000000D;
}

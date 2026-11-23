extern void sub_08030BB0(s32 arg0, u16 arg1);

void sub_080197C8(u16 arg0) {
    sub_08030BB0(0x03002AB0, arg0);
}

extern u8 D_03004114[];
void sub_080197E0(u8 *arg0, u8 *arg1, u16 arg2);

void sub_0801980C(u8 *arg0, u8 *arg1) {
    u16 *p = (u16 *)(arg0 + 0x5C);
    u32 t = *p - 1;
    u8 *q;

    *p = t;
    if ((t << 16) != 0) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    q = arg0 + 0x76;
    (*q)++;
    q -= 0x22;
    (*q)++;
    sub_080197E0(arg0, arg1, *q);
}

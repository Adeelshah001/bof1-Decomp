extern u8 D_03002AB0[];
extern void sub_08056BC0(void *arg0, s16 arg1);

void sub_08056B1C(u8 *arg0, u16 arg1) {
    s32 limit = *(u16 *)(arg0 + 0xF8);
    s32 v = arg1 + *(u16 *)(arg0 + 0xFA);

    if (v > limit) {
        v = limit;
    }
    *(u16 *)(arg0 + 0xFA) = v;
}

void sub_08056C18(s32 arg0) {
    sub_08056BC0(D_03002AB0, (s16)arg0);
}

void sub_08056C30(void) {
    u8 *p = D_03002AB0;
    u8 v = p[0xF1];

    if (!(v & 0x80) && (v & 0x60) != 0x60) {
        p[0xF1] = v | 0x10;
        p[0x10C] = 1;
    }
}

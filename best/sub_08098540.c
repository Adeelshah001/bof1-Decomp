extern u8 D_03004F30[];

u32 sub_08003104(void);
s32 sub_080985E0(void);

s32 sub_080985A4(u8 *arg0) {
    u32 r = sub_08003104() & 0xF;
    if ((arg0[0x102] < D_03004F30[7]) ? (r <= 5) : (r <= 3)) {
        return 0;
    }
    return sub_080985E0();
}

void sub_08098540(u8 *arg0, u16 arg1, u8 arg2) {
    u8 f = arg0[0xF1];
    if (!(f & 0x40)) {
        u8 flags = arg0[0xDC];
        if (!(flags & arg2)) {
            arg0[0xDC] = flags | arg2;
            *(u16 *)(arg0 + 0x106) += arg1;
        }
    }
}

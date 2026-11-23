extern u8 D_03002AB0[];
u8 *sub_0803ED98(void);
void sub_0802A478(void *);

s32 sub_080352D0(const char *fmt, ...) {
    return 0;
}

void sub_08035290(u8 *arg0, u32 arg1) {
    u8 *state = D_03002AB0;
    *(u32 *)(state + 0x94) = arg1;
    *(u32 *)(state + 0x90) = arg1;
    D_030023D0[0] = 2;
    *(u32 *)(arg0 + 0x88) += 2;
}

void sub_0803525C(u8 *arg0, u8 arg1) {
    u8 *ent = sub_0803ED98();
    if (ent != NULL) {
        ent[0x3B] = arg1;
        ent[0x3C] = 0xC;
        ent[0x3A] = 1;
        *(u16 *)(ent + 2) = *(u16 *)(arg0 + 2);
        *(u16 *)(ent + 6) = *(u16 *)(arg0 + 6);
    }
}

void sub_080351E4(u8 *arg0) {
    u32 zero = 0;
    arg0[0xC5] = 2;
    arg0[0xC6] = zero;
    sub_0802A478(arg0);
    *(u32 *)(arg0 + 0x88) += 2;
}

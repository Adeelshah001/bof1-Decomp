extern u8 D_03004408;
extern u8 D_030033F0;
extern u8 D_03002AB0[];
void sub_0800312C(s32 arg0, s32 arg1);
void sub_0800518C(s32 arg0, s32 arg1, s32 arg2);
void *sub_08040A74(u8 arg0);

void sub_080262F8(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u32 mask = script[2];
    D_03004408 |= mask;
    *(u8 **)(arg0 + 0x68) = script + 3;
}

void sub_080262BC(u8 *arg0) {
    u8 *state;
    sub_0800312C(0x10, 0x0A);
    sub_0800518C(0, 0xB88, 0x82C);
    state = D_03002AB0;
    state[0xB8] &= 0xFB;
    *(u32 *)(arg0 + 0x68) += 2;
}

void sub_08026268(u8 *arg0) {
    u8 *script = *(u8 **)(arg0 + 0x68);
    u32 mask = script[2];
    D_030033F0 &= ~mask;
    *(u8 **)(arg0 + 0x68) = script + 3;
}

void sub_08026214(u8 *arg0) {
    u8 *script;
    u8 *obj = sub_08040A74((*(u8 **)(arg0 + 0x68))[2]);
    if (obj != NULL) {
        script = *(u8 **)(arg0 + 0x68);
        *(u16 *)obj = script[3] | (script[4] << 8);
        script = *(u8 **)(arg0 + 0x68);
        *(u16 *)(obj + 4) = script[5] | (script[6] << 8);
        *(u32 *)(arg0 + 0x68) += 7;
    }
}

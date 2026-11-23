extern u8 D_03002AB0[];
extern u8 D_03002CF8[];

void sub_08034994(void *arg0) {
    *(u8 *)((s8 *)arg0 + 0xB8) = 8 | *(u8 *)((s8 *)arg0 + 0xB8);
    *(s32 *)((s8 *)arg0 + 0x88) += 2;
}

void sub_08034A28(u8 *arg0) {
    u8 *state = D_03002AB0;
    *(u32 *)(state + 0x88) += 1;
    *(u32 *)(arg0 + 0x88) += 2;
}

void sub_080348FC(void *arg0) {
    *(u8 *)((s8 *)arg0 + 0xF0) = 0x40 | *(u8 *)((s8 *)arg0 + 0xF0);
}

void sub_08034A40(u8 *arg0) {
    u8 *state = D_03002CF8;
    *(u32 *)(state + 0x88) += 1;
    *(u32 *)(arg0 + 0x88) += 2;
}

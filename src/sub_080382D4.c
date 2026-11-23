
void sub_08038374(s32, s32);
extern const u8 D_081DFAE8[][1];
s32 sub_080382D4(s32 offset) {
    sub_08038374(offset, D_081DFAE8[offset + 2][0] | (D_081DFAE8[offset + 3][0] << 8));
    return 0;
}
void sub_080382F8(void *arg0) {
    u8 *p = arg0;
    s32 vy;
    *(s32 *)(p + 0x10) -= (u16)(*(s32 *)(p + 0x44) >> 8) << 8;
    vy = *(s32 *)(p + 0x14) - ((u16)(*(s32 *)(p + 0x48) >> 8) << 8);
    *(s32 *)(p + 0x14) = vy;
    *(s32 *)p += *(s32 *)(p + 0x10);
    *(s32 *)(p + 4) += vy;
}

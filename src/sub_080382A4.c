
void sub_080381D4(s32, s32, u16);
void sub_08037F5C(void *);
void sub_0803832C(void *);
void sub_080382F8(void *);
void sub_08038374(s32, s32);
extern const u8 D_081DFAE8[];
void sub_0803824C(s32 a, s32 b, u16 c, u8 d) {
    sub_080381D4(a, b, c | d);
}
void sub_080382A4(Entity *p) {
    switch (p->unk51) {
        case 0: sub_08037F5C(p); break;
        case 2: sub_080382F8(p); break;
        case 4: sub_0803832C(p); break;
    }
}
s32 sub_080382D4(s32 offset) {
    const u8 *data = D_081DFAE8;
    sub_08038374(offset, data[offset + 2] | (data[offset + 3] << 8));
    return 0;
}
void sub_080382F8(void *arg0) {
    u8 *p = arg0;
    s32 vy;
    *(s32 *)(p + 0x10) -= (u16)(*(u32 *)(p + 0x44) >> 8) << 8;
    vy = *(s32 *)(p + 0x14) - ((u16)(*(u32 *)(p + 0x48) >> 8) << 8);
    *(s32 *)(p + 0x14) = vy;
    *(s32 *)p += *(s32 *)(p + 0x10);
    *(s32 *)(p + 4) += vy;
}

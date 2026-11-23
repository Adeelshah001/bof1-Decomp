extern const u8 D_0822B3B8[];
extern u32 D_030040F0;
extern u32 D_03002500;
extern u32 D_03003FB0;

void sub_080379D4(s32);
void sub_08038F90(s32);

void sub_080539C0(u8 *arg0) {
    D_03004830[0x2B]++;
    arg0[0xCC]++;
}

void sub_080539E4(u8 *arg0) {
    sub_080379D4(D_0822B3B8[arg0[0xCC] + 1]);
    arg0[0xCC] += 2;
}

void sub_08053A08(u8 *arg0) {
    D_03004830[0x2A] = D_0822B3B8[arg0[0xCC] + 1];
    D_03004830[0x2B] = D_0822B3B8[arg0[0xCC] + 2];
    arg0[0xCC] += 3;
}

void sub_08053974(u8 *arg0) {
    u8 *p = *(u8 **)(arg0 + 0xD4);
    D_030040F0++;
    D_03002500++;
    D_03003FB0++;
    sub_08038F90(((p[0x41] >> 1) & 7) + 8);
    arg0[0xCC]++;
}

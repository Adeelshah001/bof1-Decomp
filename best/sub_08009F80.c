void sub_0800B0E0(s32 arg0);
void sub_08033B88(s32 arg0, s32 arg1);

void sub_08009F3C(void *arg0) {
    u8 *g = (u8 *)0x03002AB0;
    if (g[0xB8] & 4) {
        *(u32 *)((u8 *)arg0 + 0x68) += 2;
    }
}

void sub_08009F80(void *arg0) {
    u8 *g = (u8 *)0x03004830;
    if (*(u16 *)(g + 0x2A) == 0x109) {
        *(u32 *)((u8 *)arg0 + 0x68) += 2;
    }
}

void sub_0800A264(s32 arg0) {
    u8 *g = (u8 *)0x03004830;
    if ((s8)g[0x2A] == 0x0C && (s8)g[0x2B] == 4) {
        sub_0800B0E0(arg0);
    }
}

void sub_0800A294(void *arg0) {
    u8 *g = (u8 *)0x03002AB0;
    sub_08033B88((s32)g, 3);
    *(u32 *)(g + 0x94) = 0x80EF;
    *(u8 *)0x030023D0 = 2;
    *(u32 *)((u8 *)arg0 + 0x68) += 2;
}

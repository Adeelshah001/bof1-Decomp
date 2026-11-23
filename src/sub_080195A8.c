extern u8 D_030023E0[];
extern u8 D_03001850[];
extern u16 D_03004114;
u8 sub_08005024(s32 arg0, s32 arg1);
void sub_080193D8(void);

void sub_080195A8(void) {
    u8 r;
    u8 *state = D_030023E0;
    if (*(u16 *)(state + 0xA4) != 0x117) {
        sub_080193D8();
        return;
    }
    r = sub_08005024(0x1D48, 0xD98C);
    if (r != 0) {
        sub_080193D8();
        return;
    }
    D_03001850[0]++;
    D_03004114 = r;
}

void sub_08019670(Entity *arg0) {
    u8 *p;
    u8 *state;
    p = (u8 *)arg0 + 0x41;
    *p = ((u8 *)arg0->unk68)[2];
    arg0->unk68 += 3;
    state = D_030023E0;
    if (*(u16 *)(state + 0xA4) == 0xFF || *(u16 *)(state + 0xA4) == 0x13C) {
        *p = (*p & 0xCF) | 0x20;
    }
}

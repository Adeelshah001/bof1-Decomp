extern u8 D_030023E0[];

void sub_080050B4(s32, s32, s32, s32);
void sub_08000CC4(void);

void sub_0800D854(void) {
    s8 *base = (s8 *)D_03004830;
    s32 val = --base[0x2D];
    if (val == 0) {
        sub_080050B4(1, 0, 0x1028, 0x48C);
        sub_08000CC4();
        D_030023E0[0x4C] = val;
        base[0x2B]++;
    }
}

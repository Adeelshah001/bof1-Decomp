extern s32 sub_080A44DC(void);
extern s32 sub_080A44FC(void);
extern u32 D_03001150[];

s32 sub_080A4818(void) {
    s32 sp0 = sub_080A44FC();
    s32 val = sub_080A44DC();
    if (val != 0x14) {
        D_03001150[val * 2] = -1;
    }
    return 2;
}

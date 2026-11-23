extern u8 D_03003F98[];
extern u8 D_03004E04[];
extern u16 D_03001864[];
extern u16 D_03001670[];

void sub_080017EC(s32);
void sub_08001888(s32);

s32 sub_080373AC(void) {
    if (D_03003F98[0] & 0x80) {
        sub_08001888(6);
        D_03004E04[0] = 0;
        D_03001864[0] = 0x17;
    } else {
        sub_080017EC(6);
        D_03001670[0] = 0x1800;
    }
    D_03003F98[0] = 0;
    return 0;
}

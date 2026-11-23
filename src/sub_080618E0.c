extern u8 D_03004620[];
extern u8 D_03004830[];

s32 sub_0805A9FC(void);
void sub_0805B198(void);
s32 sub_0805C9E0(void);

s32 sub_080618E0(void) {
    if (sub_0805A9FC() != 0) {
        if (D_03004830[0x3F] == 0x18) {
            D_03004620[2] = 0x20;
            D_03004620[3] = 0;
        } else if (sub_0805C9E0() != 0) {
            sub_0805B198();
            D_03004620[3] = 6;
        }
    }
    return 0;
}

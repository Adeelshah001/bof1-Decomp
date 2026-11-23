extern u32 D_03002AB0[];
extern u8 D_03004620[];

void sub_08059D68(s32);
void sub_0805B180(void);

s32 sub_08061924(void) {
    sub_08059D68(D_03002AB0[0x94 / 4]);
    sub_0805B180();
    D_03004620[3] = 2;
    return 0;
}

extern u8 D_03004830[];
extern u8 D_03001850[];
extern void sub_08023FD8(s32);

void sub_080242B4(void) {
    u8 temp_r4;

    temp_r4 = D_03001850[0] & D_03004830[0x40];
    if (temp_r4 == 0) {
        sub_08023FD8(0x84);
        D_03004830[0x3F] = temp_r4;
        D_03004830[0x40] = temp_r4;
    }
}

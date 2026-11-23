extern u16 D_08150F7A[];

s32 sub_0805B568(s32, s32, s32, s32, s32);

void sub_0806FA2C(s32 arg0) {
    s32 offset = (arg0 & 1) * 9;

    sub_0805B568(((offset + 1) * 8) | 0x4000, D_08150F7A[arg0 / 2] | 0x4000, 0xD, 1, 0x90);
    sub_0805B568(((offset + 5) * 8) | 0x4000, D_08150F7A[arg0 / 2] | 0x4000, 0xD, 1, 0x90);
    sub_0805B568((offset + 9) * 8, D_08150F7A[arg0 / 2], 0xD, 1, 0x90);
}

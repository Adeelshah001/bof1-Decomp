extern u8 D_03000800[];
extern u8 D_03004830[];

s32 sub_0800190C(void) {
    s8 i;
    u8 val;

    i = 0;
    val = 1;
    do {
        D_03000800[i] += val;
        val += 2;
        i++;
    } while (i <= 3);

    if (D_03004830[0x10] == 0) {
        u8 acc = D_03000800[3];
        s8 j = 3;
        do {
            j--;
            acc += D_03000800[j];
            D_03000800[j] = acc;
        } while (j > 0);
    }
    return 0;
}

extern u8 D_03002AB0[];

u8 sub_08032820(void);
void sub_08054820(s32, u8);
void sub_0802CCEC(void *);

void sub_08030C80(s32 arg0) {
    u8 val = sub_08032820();
    u8 *ab0;

    sub_08054820(arg0, val);
    ab0 = D_03002AB0;
    val = (val + 2) & 3;
    ab0[0x61] = val;
    sub_0802CCEC(ab0);
}

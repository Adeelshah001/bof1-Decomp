extern void sub_08060E48(void);
extern void sub_08060C7C(void);
extern void sub_0805B180(void);
extern void sub_0805B198(void);
extern void sub_0805B6A4(void);
extern void sub_0805CA64(void);
extern void sub_0805B29C(void);
extern void sub_080696B0(void);
extern u8 D_03004620[];

void sub_08061E4C(void) {
    sub_08060E48();
}

s32 sub_08061E64(void) {
    sub_08060C7C();
    sub_0805B180();
    D_03004620[3] = 4;
    return 0;
}

s32 sub_08061E80(void) {
    sub_0805B198();
    sub_0805B6A4();
    sub_08060C7C();
    D_03004620[3] = 2;
    return 0;
}

void sub_08061EA0(void) {
    sub_0805CA64();
    sub_0805B29C();
    sub_080696B0();
}

/* identical to sub_08061E4C (matched), with its names changed by decompdecomp */
extern s32 sub_08067660(void);
extern void sub_08060C7C(void);
extern void sub_0805B180(void);
extern void sub_0805B198(void);
extern void sub_0805B6A4(void);
extern void sub_0805CA64(void);
extern void sub_0805B29C(void);
extern s32 sub_080696B0(void);

typedef struct {
    u8 pad[3];
    u8 unk3;
} D03004620Struct;
extern D03004620Struct D_03004620;

s32 sub_08068B00(void) {
    return sub_08067660();
}

s32 sub_08061E64(void) {
    sub_08060C7C();
    sub_0805B180();
    D_03004620.unk3 = 4;
    return 0;
}

s32 sub_08061E80(void) {
    sub_0805B198();
    sub_0805B6A4();
    sub_08060C7C();
    D_03004620.unk3 = 2;
    return 0;
}

s32 sub_08061EA0(void) {
    sub_0805CA64();
    sub_0805B29C();
    return sub_080696B0();
}

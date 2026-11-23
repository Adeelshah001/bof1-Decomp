extern u8 D_030023DC;
extern u16 D_03004120;
extern u8 D_03002AB0[];

void sub_080073D8(s32);
void sub_08003334(void);
void sub_0800421C(s32, s32, s32);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_080587C8(void);

typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State2AB0;

void sub_08014F80(void) {
    sub_080073D8(0x66);
    D_03004830[0x2B]++;
}

void sub_08014F3C(void) {
    sub_08003334();
    D_03004120 = 2;
    sub_0800421C(0x15C, 0x778, -0x5C74);
    ((State2AB0 *)D_03002AB0)->unkB8 &= 0xFB;
    D_03004830[0x2B]++;
}

void sub_08014F08(void) {
    u8 *base;
    sub_0800312C(0x10, 0);
    sub_08001F80(0, 0, 0);
    sub_080587C8();
    base = D_03004830;
    base[0x2C] = 0xDC;
    base[0x2B]++;
}

void sub_08014EE0(void) {
    if (D_030023DC != 1) {
        sub_080073D8(0x64);
        D_03004830[0x2B]++;
    }
}

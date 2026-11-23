extern u16 D_030040F8;
extern u8 D_030023E0[];
extern u8 D_03004114;
extern u16 D_03001670;

void sub_08004EA0(s32);
void sub_0800D2BC(void);
void sub_0800511C(s32, u8);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_080050B4(s32, s32, s32, s32);
void sub_08000CC4(void);

typedef struct {
    u8 pad00[0xA8];
    u16 unkA8;
} State23E0_D8A0;

void sub_0800D924(void) {
    sub_08004EA0(0x819B);
    D_03004830[0x2B]++;
}

void sub_0800D900(void) {
    D_030040F8 = 0x22;
    sub_0800D2BC();
    D_03004830[0x2B]++;
}

void sub_0800D8A0(void) {
    u32 zero = 0;
    u8 *p;
    ((State23E0_D8A0 *)D_030023E0)->unkA8 = 0x18F;
    sub_0800511C(0xAB, D_03004114);
    sub_0800312C(0x10, 0);
    sub_08001F80(0, 0, 0);
    D_03001670 &= ~0x2000;
    p = D_03004830;
    p[0x2A] = 0xC;
    p[0x2B] = zero;
}

void sub_0800D854(void) {
    u8 *base = D_03004830;
    s8 val = --base[0x2D];
    if (val == 0) {
        sub_080050B4(1, 0, 0x1028, 0x48C);
        sub_08000CC4();
        D_030023E0[0x4C] = val;
        base[0x2B]++;
    }
}

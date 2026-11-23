extern u8 D_030023DC[];
extern u8 D_03003420[];
extern u8 D_03002AB0[];
extern u8 D_03004584[];
extern u8 D_03004830[];

extern void sub_080017EC(s32);
extern void sub_08003334(void);
extern void sub_080073D8(s32);
extern void sub_080075BC(s32);
extern void sub_08013ADC(void);
extern void sub_08033AF4(s32);
extern void sub_08072CC4(s32);

typedef struct {
    u8 pad00[0x2E8];
    u32 unk2E8;
} Unk03003420;

void sub_0801460C(void) {
    ((Unk03003420 *)D_03003420)->unk2E8++;
    D_03004830[0x2B]++;
}

void sub_080145E4(void) {
    if (D_030023DC != 1) {
        D_03004830[0x2C] = 0x20;
        sub_080075BC(0x83A6);
    }
}

void sub_080145A4(void) {
    sub_08072CC4(0x72D);
    if (D_03004584 == 0) {
        sub_08013ADC();
        D_03002AB0[0xB8] &= 0xFB;
        D_03004830[0x2B]++;
    }
}

void sub_08014550(void) {
    u8 *base;
    sub_08003334();
    sub_08033AF4(0x10);
    sub_080073D8(0x56);
    sub_080017EC(0x86);
    sub_080017EC(0);
    base = D_03004830;
    base[0x2C] = 0xDC;
    base[0x2B]++;
}

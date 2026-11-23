extern u8 D_03001698;
extern u8 D_03001674;
extern u8 D_0300166C;
extern u8 D_030016A4;

void sub_0800312C(s32, s32);
void sub_08003378(s32);
void sub_0803D3B8(s32);
void sub_0800518C(s16, s16, s16);
void sub_0802411C(s32, s32);
void sub_08024018(s32);

typedef struct {
    u8 pad00[0x2B];
    s8 step;
} ScriptStepFlags;

void sub_0801F444(void) {
    u8 *base = D_03004830;
    s8 tmp = --((s8 *)base)[0x2C];
    if (tmp == 0) {
        base[0x2A] = 0x14;
        base[0x2B] = tmp;
    }
}

void sub_0801F418(void) {
    u8 *base;
    sub_0800312C(0x10, 0);
    sub_08003378(0x3F);
    base = D_03004830;
    base[0x2C] = 0xB4;
    base[0x2B]++;
}

void sub_0801F4A4(void) {
    sub_0803D3B8(3);
    sub_0800518C(0, 0xAF8, 0x86C);
    D_03001698 = 8;
    D_03001674 = 8;
    D_0300166C = 32;
    D_030016A4 = 32;
    D_03004830[0x2B]++;
}

void sub_0801F3D0(void) {
    sub_0802411C(0x4000, 0x180);
    sub_0802411C(0x4EE0, 0x1A0);
    sub_0802411C(0x40A0, 0x1C0);
    sub_08024018(0x66);
    ((ScriptStepFlags *)D_03004830)->step |= ~0x7F;
}

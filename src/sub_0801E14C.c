extern u32 D_080F7F60[];
extern u32 D_080F805C[];
extern Entity *D_03004448;
extern u8 D_030023DC;

void sub_080A0770(s32);
void sub_08003378(s32);
void sub_08004EA0(s32);
void sub_0800312C(s32, s32);

void sub_0801E004(void) {
    u32 *table = D_080F7F60;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_0801E14C(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    if (*(s8 *)ptr >= 0) {
        u32 *table = D_080F805C;
        s32 idx = (s32)*(s8 *)ptr;
        sub_080A0770(table[idx]);
    }
}

void sub_0801E314(void) {
    if (D_03004448->unk3A == 0) {
        sub_08003378(0x42);
        sub_08004EA0(0x852D);
        D_03004830[0x2B]++;
    }
}

void sub_0801E364(void) {
    if (D_030023DC != 1) {
        u8 *state;
        sub_0800312C(0x10, 8);
        state = D_03004830;
        state[0x2B]++;
    }
}

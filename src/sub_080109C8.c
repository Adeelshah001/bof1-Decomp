void sub_080A0770(s32);
void sub_080017EC(s32);
void sub_08003378(s32);
void sub_0800518C(s32, s32, s32);

extern u32 D_080F662C[];
extern u8 D_03002AB0[];

struct Struct_030023E0 {
    u8 pad[0xA4];
    u16 unkA4;
};
extern struct Struct_030023E0 D_030023E0;

void sub_080109A4(void) {
    u32 *table = D_080F662C;
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2B;
    s32 idx = (s32)*(s8 *)ptr;
    sub_080A0770(table[idx]);
}

void sub_080109C8(void) {
    if (D_030023E0.unkA4 != 0xC1) {
        u8 *p;
        sub_080017EC(0x69);
        p = D_03004830;
        p[0x2A] = 0;
        p[0x2B] = 0;
    }
}

void sub_080109F4(void) {
    u8 *p;
    sub_08003378(0x11);
    sub_0800518C(0xBB, 0x248, -0x5D84);
    p = D_03004830;
    p[0x2A] = 0;
    p[0x2B] = 0;
}

void sub_08010A24(void) {
    if (!(D_03002AB0[0xB8] & 4)) {
        u8 *p = D_03004830;
        p[0x2C] = 0x20;
        D_03002AB0[0xB8] |= 4;
        p[0x2B]++;
    }
}

extern u8 D_03004830[];
extern u8 D_03002AB0[];

struct Struct_030023E0 {
    u8 pad[0xA8];
    u16 unkA8;
};
extern struct Struct_030023E0 D_030023E0;

s32 sub_08001770(s32);

void sub_0801A1D0(void) {
    if (D_030023E0.unkA8 == 0x102) {
        if ((sub_08001770(0xA1) << 24) != 0) {
            u8 *p;
            D_03002AB0[0xB8] |= 4;
            p = D_03004830;
            p[0x2A] = 0x24;
            p[0x2B] = 0;
        }
    }
}

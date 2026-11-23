extern u8 D_03002AB0[];
extern u8 D_03003418[];
extern u8 D_03003F98[];

void sub_0800518C(s32, s32, s32);
void sub_080030D4(void);
void sub_08003378(s32);
void sub_08030AD8(s32);
void sub_08030BB0(void *, s32);

void sub_0801C080(void) {
    {
        u32 v = D_03003418[0];
        v |= 0x40;
        D_03003418[0] = v;
    }
    sub_0800518C(0x182, 0x768, 0xFFFFCE0C);
    sub_080030D4();
    sub_08003378(0x20);
    D_03002AB0[0xB8] |= 0x80;
    sub_08030AD8(0x7E);
    D_03004830[0x2B]++;
}

void sub_0801BECC(void) {
    {
        u32 v = D_03003F98[0];
        v |= 0x40;
        D_03003F98[0] = v;
    }
    sub_08030BB0(D_03002AB0, 0x10);
    D_03004830[0x2C] = 0x20;
    D_03004830[0x2B]++;
}

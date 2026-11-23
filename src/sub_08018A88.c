extern u8 D_030034A0[];
extern u8 D_03003F98[];
extern void *D_03004154;
extern u16 D_03004114;
extern u8 D_03002AB0[];
extern u8 D_03004830[];

extern void sub_08019B78(s32 arg0);
extern void sub_080017EC(s32 arg0);
extern void *sub_0803ED98(void);
extern void *sub_0804A9B0;
extern u8 sub_08001770(s32 arg0);
extern u8 sub_08005090(s32 arg0, s32 arg1);
extern void sub_08018AE0(void);
extern void sub_08019A90(s32 arg0, s32 arg1);

void sub_0801872C(void) {
    u16 val = 0xAE6C;
    u8 *base = D_030034A0;
    u32 off = 0x06;

    sub_08019B78(0x12);
    D_03004830[0x2D] = 1;
    *(u16 *)(base + off) = val;
    off += 0x80;
    *(u16 *)(base + off) = val;
    off += 0x80;
    *(u16 *)(base + off) = val;
    off += 0x80;
    *(u16 *)(base + off) = val;
    off += 0x80;
    *(u16 *)(base + off) = val;
    off += 0x80;
    *(u16 *)(base + off) = val;
    off += 0x80;
    *(u16 *)(base + off) = val;
    sub_080017EC(0xB3);
}

void sub_080187F8(u8 arg0) {
    Entity *ent;

    D_03003F98[0] = arg0;
    ent = sub_0803ED98();
    D_03004154 = ent;
    if (ent != NULL) {
        ent->unk3A = 1;
        ent->unk64 = (u32)sub_0804A9B0;
    }
    D_03004830[0x2A] = 0x22;
    D_03004830[0x2B] = 0;
    D_03002AB0[0xB8] |= 0x04;
    D_03004114 = 0;
}

void sub_08018A30(void) {
    u8 result = sub_08001770(0xA0);
    s8 state = (s8)D_03004830[0x2A];

    if (result != 0 || state == 3) {
        D_03004114 = 0;
        return;
    }
    D_03004830[0x2A] = 3;
    D_03004830[0x2B] = result;
    D_03002AB0[0xB8] |= 0x04;
    D_03004114 = result;
}

void sub_08018A88(void) {
    u8 temp = sub_08005090(0x1B28, 0x8E3C);

    if (temp != 0) {
        sub_08018AE0();
        return;
    }
    D_03004830[0x2A] = 0x25;
    D_03004830[0x2B] = 0;
    D_03004830[0x2C] = 0x10;
    D_03002AB0[0xB8] |= 0x04;
    sub_08019A90(0xCA, 0x33);
}

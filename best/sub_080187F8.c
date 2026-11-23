/* sub_0801861C */
extern void sub_08019D0C(void);
extern u8 D_03002AB0[];
extern u8 D_03004830[];

void sub_0801861C(void) {
    u8 state_byte;
    s8 state;
    u8 counter;

    state_byte = D_03004830[0x2B];
    state = (s8)state_byte;
    if (state != 0) {
        sub_08019D0C();
        return;
    }
    counter = D_03004830[0x2C];
    counter--;
    D_03004830[0x2C] = counter;
    if (counter != 0) {
        return;
    }
    D_03002AB0[0xB8] &= ~0x04;
    D_03004830[0x2B] = state_byte + 1;
}

/* sub_0801872C */
extern void sub_08019B78(s32 arg0);
extern void sub_080017EC(s32 arg0);
extern u8 D_030034A0[];
extern u8 D_03004830[];

void sub_0801872C(void) {
    u16 val;
    u8 *base;

    sub_08019B78(0x12);
    D_03004830[0x2D] = 1;
    val = 0xAE6C;
    base = D_030034A0;
    *(u16 *)(base + 0x06) = val;
    *(u16 *)(base + 0x86) = val;
    *(u16 *)(base + 0x106) = val;
    *(u16 *)(base + 0x186) = val;
    *(u16 *)(base + 0x206) = val;
    *(u16 *)(base + 0x286) = val;
    *(u16 *)(base + 0x306) = val;
    sub_080017EC(0xB3);
}

/* sub_080187F8 */
extern void *sub_0803ED98(void);
extern void *sub_0804A9B0;
extern u8 D_03002AB0[];
extern u8 D_03003F98[];
extern u8 D_03004114[];
extern u8 D_03004154[];
extern u8 D_03004830[];

void sub_080187F8(s8 arg0) {
    void *ent;

    D_03003F98[0] = arg0;
    ent = sub_0803ED98();
    *(void **)D_03004154 = ent;
    if (ent != NULL) {
        ((u8 *)ent)[0x3A] = 1;
        *(u32 *)((u8 *)ent + 0x64) = (u32)sub_0804A9B0;
    }
    D_03004830[0x2A] = 0x22;
    D_03004830[0x2B] = 0;
    D_03002AB0[0xB8] |= 0x04;
    *(u16 *)D_03004114 = 0;
}

/* sub_08018A30 */
extern u8 sub_08001770(s32 arg0);
extern u8 D_03002AB0[];
extern u8 D_03004114[];
extern u8 D_03004830[];

void sub_08018A30(void) {
    u8 result;
    s8 state;

    result = sub_08001770(0xA0);
    state = (s8)D_03004830[0x2A];
    if (result != 0 || state == 3) {
        *(u16 *)D_03004114 = 0;
        return;
    }
    D_03004830[0x2A] = 3;
    D_03004830[0x2B] = result;
    D_03002AB0[0xB8] |= 0x04;
    *(u16 *)D_03004114 = result;
}

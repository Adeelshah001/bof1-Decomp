extern u8 D_03002AB0[];
extern u8 D_03004830[];
extern u8 D_030033F0[];
extern u8 D_03003420[];

void sub_08003334(void);
u16 sub_08027644(void);
u32 sub_08004EA0(u16);
s32 sub_08003104(void);

void sub_0802506C(void) {
    D_03002AB0[0xB8] &= 0xFB;
    D_03004830[0x3F] = 0;
    D_03004830[0x40] = 0;
    sub_08003334();
}

void sub_0802504C(void) {
    u16 val = sub_08027644();
    sub_08004EA0(val);
    D_03004830[0x40]++;
}

void sub_08025098(void) {
    u32 val;
    D_030033F0[0] |= 0x80;
    val = sub_08003104();
    D_03004830[0x41] = val & 1;
    D_03004830[0x40]++;
}

void sub_080250C8(void) {
    u8 *base = D_03003420;
    u32 idx = D_03004830[0x41];
    Entity *ent = (Entity *)&base[idx * 128]; // wait, let's check offset 0x68

    ent->unk68 += 2;
    D_03004830[0x40]++;
}

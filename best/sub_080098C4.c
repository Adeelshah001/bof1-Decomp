extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 D_03003420[];
extern u8 D_0300413C[];
void sub_080073D8(u16);
void sub_08054820(u8 *actor, u8 value);

void sub_080098C4(void) {
    sub_080073D8(0x2A);
    D_03004830[0x2B]++;
}

void sub_0800989C(void) {
    u8 *p = D_03004830;
    p[0x2A] = 0x0A;
    p[0x2B] = 2;
    D_03002AB0[0xB8] |= 4;
}

void sub_08009908(void) {
    u8 *p = D_03004830;
    p[0x2A] = 0x10;
    p[0x2B] = 0;
    *(u32 *)((u8 *)D_03003420 + 0x1E8) += 2;
    sub_080073D8(0x2C);
}

void sub_08009950(void) {
    u8 *actor;
    *(u16 *)D_0300413C = 3;
    actor = *(u8 **)((u8 *)D_03002AB0 + 0x94);
    actor[0x6F] = 3;
    sub_08054820(actor, D_0300413C[0]);
}

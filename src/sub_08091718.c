extern u8 D_03004F50[];
extern u8 D_03003410;

void sub_080379D4(u16);
void sub_08097054(u16);
void sub_0809177C(void *);

typedef struct Unk91718 {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x4C - 0x3D];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x78 - 0x56];
    struct Unk91718 *unk78;
} Unk91718;

void sub_08091718(Unk91718 *arg0) {
    u8 *state = D_03004F50;
    u8 *unk4A = state + 0x4A;
    u8 zero = 0;
    u8 *unk4C;
    u8 two;
    u8 *unk54;
    u8 val;

    *unk4A = 1;
    unk4C = &arg0->unk4C;
    two = 2;
    *unk4C = two;
    sub_080379D4(0xF3);
    sub_080379D4(0x32);
    unk54 = &arg0->unk54;
    *unk54 = 0x94;
    arg0->unk55 = two;
    D_03003410 = zero;
    val = arg0->unk78->unk3C;
    if (val == 0x51 || val == 0x55) {
        *unk4C = 4;
        *unk54 = zero;
        sub_08097054(0x51);
        sub_0809177C(arg0);
    }
}

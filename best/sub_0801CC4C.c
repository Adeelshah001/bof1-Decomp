void sub_0801970C(void);
extern u16 D_03004164;

void sub_0801CC4C(void) {
}

void sub_0801CBC4(void) {
    *(u8 *)0x03002B68 &= 0xFB;
    sub_0801970C();
}

void sub_0801CB8C(Entity *arg0) {
    D_03004830[0x2D] += 1;
    arg0->unk68 += 2;
    if (*(u16 *)0x03002484 == 0x1CE) {
        arg0->unk41 = (u8)((arg0->unk41 & 0x0F) | 0x20);
    }
}

void sub_0801CD5C(void) {
    u16 val = D_03004164 - 1;
    D_03004164 = val;
    if (val == 0) {
        D_03004830[0x2C] = 0;
        D_03004830[0x2D] = 0;
        D_03004830[0x2B] += 1;
    }
}

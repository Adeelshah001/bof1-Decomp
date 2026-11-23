extern u16 D_0300413C;
void sub_080123B8(void);

typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
} State243C;

void sub_0801243C(void) {
    ((State243C *)D_03004830)->unk2B &= 0x7F;
    sub_080123B8();
}

void sub_0801241C(Entity *arg0) {
    D_0300413C = arg0->unk6 + 0x200;
    arg0->unk6 = D_0300413C;
    arg0->unk2C = D_0300413C;
    arg0->unk68 += 2;
}

void sub_080123FC(Entity *arg0) {
    D_0300413C = arg0->unk6 - 0x200;
    arg0->unk6 = D_0300413C;
    arg0->unk2C = D_0300413C;
    arg0->unk68 += 2;
}

extern u16 D_0300413C;
void sub_080123B8(void);

void sub_0801243C(void) {
    D_03004830[0x2B] &= 0x7F;
    sub_080123B8();
}

void sub_0801241C(Entity *arg0) {
    u16 val = arg0->unk6 + 0x200;
    D_0300413C = val;
    arg0->unk6 = val;
    arg0->unk2C = val;
    arg0->unk68 += 2;
}

void sub_080123FC(Entity *arg0) {
    u16 val = arg0->unk6 - 0x200;
    D_0300413C = val;
    arg0->unk6 = val;
    arg0->unk2C = val;
    arg0->unk68 += 2;
}

void sub_080122E0(Entity *arg0) {
    if ((s8)D_03004830[0x2C] == 0) {
        sub_0801241C(arg0);
    }
}

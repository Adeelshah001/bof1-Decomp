extern u8 D_03004830[];
extern u8 D_03002AB0[];

void sub_08005140(void *arg0, s32 arg1);
void sub_0803EE54(void *arg0);

void sub_08025990(void) {
}

void sub_080259A0(void) {
    D_03004830[0x3F] = 0x1C;
    D_03004830[0x40] = 0;
    D_03002AB0[0xB8] |= 4;
}

void sub_08025940(void) {
}

void sub_08025B24(Entity *arg0) {
    if (D_03002AB0[0xB8] & 4) {
        sub_08005140(arg0, 0x823F);
        arg0->unk68 += 3;
    } else {
        sub_0803EE54(arg0);
        arg0->unk68 += 2;
    }
}

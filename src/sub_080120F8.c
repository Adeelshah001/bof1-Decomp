extern u8 D_0202DBD0[];

void sub_08004EA0(s32);
void sub_0801070C(Entity *, s32);

void sub_08012160(Entity *arg0) {
    u8 *pc = (u8 *)arg0->unk68;
    if (pc[2] == (s8)D_03004830[0x2A]) {
        arg0->unk68 = (u32)(pc + 3);
    }
}

void sub_08012134(Entity *arg0) {
    sub_08004EA0(0x821F);
    D_03004830[0x2D] |= 0x10;
    arg0->unk68 += 2;
}

void sub_08012198(Entity *arg0) {
    u8 val = D_0202DBD0[0x2B2];
    if (val <= 1 || val > 4) {
        sub_0801070C(arg0, 0x82AD);
    } else {
        sub_0801070C(arg0, 0x82AC);
    }
}

void sub_080120F8(Entity *arg0) {
    D_03004830[0x2D] |= 4;
    D_03004830[0x2C] = 0x3C;
    arg0->unk68 += 2;
}

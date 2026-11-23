void sub_08005140(Entity *, s32);
void sub_08004EA0(s32);

void sub_08025ABC(Entity *arg0) {
    arg0->unk6 = 0xABBC;
    arg0->unk68 += 2;
}

void sub_08025ACC(Entity *arg0) {
    sub_08005140(arg0, 0x8234);
    D_03004830[0x42] |= 4;
    arg0->unk68 += 2;
}

void sub_08025A88(Entity *arg0) {
    sub_08004EA0(0x8233);
    D_03004830[0x42] |= 2;
    arg0->unk6 = 0xABBC;
    arg0->unk68 += 2;
}

void sub_08025A6C(Entity *arg0) {
    u8 *pc = (u8 *)arg0->unk68;
    if (pc[2] & D_03004830[0x42]) {
        arg0->unk68 = (u32)(pc + 3);
    }
}

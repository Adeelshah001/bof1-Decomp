void sub_08025A6C(Entity *arg0) {
    u8 *pc = (u8 *)arg0->unk68;
    u32 mask = pc[2];
    if (mask & D_03004830[0x42]) {
        arg0->unk68 = (u32)(pc + 3);
    }
}

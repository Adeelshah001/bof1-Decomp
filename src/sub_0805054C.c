void sub_0803EE6C(Entity *arg0);

void sub_0805054C(Entity *arg0) {
    u32 *t = (u32 *)*(u32 *)((u8 *)arg0 + 0xD4);
    t[0x78 / 4] = arg0->unk68;
    t[0x68 / 4] += 2;
    return sub_0803EE6C(arg0);
}

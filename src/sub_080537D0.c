void sub_080537B0(u8 *arg0)
{
    Entity *parent = *(Entity **)(arg0 + 0xD4);
    parent->unk6 += 0x200;
    parent->unk2C = parent->unk6;
    arg0[0xCC]++;
}

void sub_080537D0(u8 *arg0)
{
    Entity *parent = *(Entity **)(arg0 + 0xD4);
    parent->unk6 -= 0x200;
    parent->unk2C = parent->unk6;
    arg0[0xCC]++;
}

extern u8 D_03004F30[];
void sub_080379D4(s32);
void sub_08037FC4(void *, s32);
void sub_08095EFC(void *);
void sub_08097054(s32);

void sub_08091F74(void *actor)
{
    u8 *bytes = actor;
    s32 mode;
    u8 zero;
    u16 halfword;
    u8 *pair;
    u8 *frame;

    sub_080379D4(0x24);
    mode = D_03004F30[9];
    mode &= 0xE0;
    if (!mode)
        sub_08097054(1);

    zero = 0;
    halfword = 0x120;
    *(u16 *)(bytes + 0x38) = halfword;
    mode = 4;
    pair = bytes + 0x54;
    *pair++ = mode;
    *pair = mode;
    halfword = 0xFC0;
    *(u16 *)(bytes + 2) = halfword;
    halfword = 0x2F00;
    *(u16 *)(bytes + 6) = halfword;
    frame = bytes + 0x61;
    *frame = 0x17;
    bytes[0x40] = zero;
    bytes[0x4C]++;
    sub_08037FC4(actor, 0);
    sub_08095EFC(actor);
}

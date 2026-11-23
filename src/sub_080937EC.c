struct Actor937EC {
    u8 pad00[0x54];
    u8 timer : 8;
};

s32 sub_080937EC(struct Actor937EC *actor, u8 **out)
{
    const s32 highBit = 0x80;

    *out = D_03003420;
    for (;;) {
        u8 *entry = *out;
        s32 flags = entry[0x3A];

        if (flags == 0) {
            entry += 0xF0;
            flags = *entry;
            flags &= 0x40;
            if (!flags)
                goto next;
        } else {
            s32 active;
            entry += 0xF1;
            flags = *entry;
            active = flags & highBit;
            if (active) {
                flags &= 8;
                if (flags)
                    goto next;
            }
        }
        if (--actor->timer & highBit)
            return 1;
next:
        *out += 0x124;
    }
}

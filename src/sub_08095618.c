extern u8 D_03004F50[];
void sub_08084750(u8 *actor);

static inline u8 IsTargetEligible(const u8 *target)
{
    u32 test;
    u32 flags = target[0xF0];
    test = 0x50;
    test &= flags;
    if (test != 0 || target[0x3A] == 0 ||
        (flags = target[0xF1], test = 0x80, (test &= flags) != 0))
        return FALSE;
    else
        return TRUE;
}

void sub_08095618(u8 *actor)
{
    u8 *target = *(u8 **)(actor + 0x78);
    u8 gate;
    u8 *state;
    u8 limit;
    u32 status;

    if (IsTargetEligible(target) != 0) {
        gate = D_03004F50[0x48];
        if (gate == 0) {
            sub_08084750(actor);
            limit = 4;
            state = target + 0x4C;
            if (limit >= *state) {
                *state++ = limit;
                *state = gate;
                status = actor[0x7C];
                status |= 0x80;
                target[0xE3] = status;
            }
        }
    }
}

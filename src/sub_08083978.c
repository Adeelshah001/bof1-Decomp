extern u16 sub_080837C8(void *, s32);
extern s32 sub_0808390C(void *, u16);
extern u16 D_03004F18[];

void sub_08083978(void *actor)
{
    u8 *flags = (u8 *)actor + 0xE2;
    s32 mode = *flags;
    u16 result = sub_080837C8(actor, mode >> 3);
    u16 *total;
    u16 *remaining;
    s32 elapsed;
    u16 newTotal;
    s32 newRemaining;

    mode = ((u8 *)actor)[0xF0];
    mode &= 0x20;
    if (mode) {
        sub_0808390C(actor, result);
        return;
    }
    mode = *flags;
    mode &= 0xF;
    *flags = mode;
    total = (u16 *)((u8 *)actor + 0xF4);
    elapsed = *total;
    remaining = (u16 *)((u8 *)actor + 0xF6);
    elapsed -= *remaining;
    newTotal = D_03004F18[1];
    *total = newTotal;
    newRemaining = newTotal - elapsed;
    if (newRemaining <= 0) {
        newRemaining = *remaining;
        if (newRemaining != 0)
            newRemaining = 1;
    }
    *remaining = newRemaining;
}

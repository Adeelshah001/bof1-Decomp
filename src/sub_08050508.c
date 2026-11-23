void sub_08050528(void *);
void sub_08050970(void *);

void sub_08050508(void *arg0)
{
    u8 *p = *(u8 **)((u8 *)arg0 + 0xD4) + 0x6D;
    *p = (*p & 0xFC) | 2;
    sub_08050528(arg0);
}

void sub_08050798(Entity *arg0)
{
    u16 *p54 = (u16 *)&arg0->unk54;
    s32 zero = 0;
    *p54 = 0x102;
    ((u8 *)p54)[0xD] = 0x18;
    arg0->unk3B = zero;
    sub_08050970(arg0);
}

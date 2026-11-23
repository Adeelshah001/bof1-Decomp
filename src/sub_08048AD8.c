u8 sub_08003104(void);
void sub_08049C40(void *actor, u32 flags, u32 animation);
void sub_08049E88(void *actor);
void sub_08048EF4(void);

void sub_08048AD8(void *arg0)
{
    u8 *actor = arg0;
    u8 duration;
    u16 value;
    u32 mask;
    u32 high;
    u16 y;
    u16 *dst58;
    u16 *dst5A;

    value = actor[2];
    dst58 = (u16 *)((u8 *)arg0 + 0x58);
    *dst58 = value;
    value = *(vu16 *)(actor + 2);
    mask = 0xFF00;
    high = mask;
    high &= value;
    if (high) {
        dst5A = (u16 *)(actor + 0x5A);
        *(vu16 *)dst5A = *dst5A | mask;
    }
    y = *(u16 *)(actor + 6);
    *(u16 *)(actor + 0x5A) = y;
    sub_08049E88(actor);
    duration = sub_08003104();
    if (duration == 0)
        duration = 0xFF;
    actor[0x54] = duration;
    actor[0x55] = duration;
    actor[0x3B] = 0;
    ((Entity *)actor)->unk64 = (u32)sub_08048EF4;
    sub_08049C40(actor, 0x80, 0x38);
}

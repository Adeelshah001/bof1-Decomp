s32 sub_0805D8CC(s32, u32, u32, s32, s32);

static inline const u16 *recordHalfword(const u8 *record, s32 offset)
{
    return (const u16 *)(record + offset);
}

void sub_0806AEB0(const u8 *record, u16 packed)
{
    u16 bits = packed;
    sub_0805D8CC(0, (u32)(bits & 0x3E) >> 1,
                (u32)(bits & 0x7C0) >> 6, 0, *recordHalfword(record, 0x112));
}

void sub_0806AEE0(const u8 *record, u16 packed)
{
    u16 bits = packed;
    sub_0805D8CC(0, (u32)(bits & 0x3E) >> 1,
                (u32)(bits & 0x7C0) >> 6, 0, *recordHalfword(record, 0x114));
}

extern u16 D_030045A0;

void sub_0806AC2C(void)
{
    u16 *state = &D_030045A0;
    u32 flags = *(u8 *)state;
    u32 mask;

    *state = flags;
    if (flags & 0x10)
        mask = 0x100;
    else if (flags & 0x60)
        mask = 0x200;
    else
        return;
    flags |= (u16)mask;
    *state = flags;
}

typedef s32 (*MenuCallback)(void);

extern const MenuCallback D_08150830[];
extern u8 D_0202DBD0[];
extern u8 D_03004620[];

s32 sub_0806B314(void)
{
    const MenuCallback *callbacks = D_08150830;
    u8 *save = D_0202DBD0;
    u8 *menu = D_03004620;
    u32 index = menu[0xB6] * 2;

    save += 0x204;
    return callbacks[save[index]]();
}

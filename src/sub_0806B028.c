s32 sub_0805D8CC(s32, u32, u32, s32, s32);

static inline const u16 *recordHalfword(const u8 *record, s32 offset)
{
    return (const u16 *)(record + offset);
}

void sub_0806AF9C(const u8 *record, u16 packed)
{
    u16 bits = packed;
    sub_0805D8CC(0, (u32)(bits & 0x3E) >> 1,
                (u32)(bits & 0x7C0) >> 6, 0, *recordHalfword(record, 0xEE));
}

void sub_0806AF40(const u8 *record, u16 packed)
{
    u16 bits = packed;
    sub_0805D8CC(0, (u32)(bits & 0x3E) >> 1,
                (u32)(bits & 0x7C0) >> 6, 0, *recordHalfword(record, 0x118));
}

void sub_0806AF10(const u8 *record, u16 packed)
{
    u16 bits = packed;
    sub_0805D8CC(0, (u32)(bits & 0x3E) >> 1,
                (u32)(bits & 0x7C0) >> 6, 0, *recordHalfword(record, 0x116));
}

typedef struct {
    u8 pad00[0x3A];
    u8 active;
    u8 pad3B[0xF0 - 0x3B];
    u8 flags;
} ActorAction;

typedef void (*ActorActionFunc)(ActorAction *, u16);

extern u8 D_0300169C;
extern u8 D_0300457C;
extern const ActorActionFunc D_081507D0[];

void sub_0806B028(ActorAction *actor, u16 arg1)
{
    if (D_0300169C == 0 && actor->active && !(actor->flags & 0x40)) {
        const ActorActionFunc *table = D_081507D0;
        table[D_0300457C & 0x7F](actor, arg1);
    }
}

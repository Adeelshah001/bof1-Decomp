extern u8 D_03004F50[];
void sub_0807CB9C(u8 *);
void sub_08084590(u8 *);

void sub_0808E888(u8 *entity)
{
    u8 *field = entity + 0x4C;
    *field = 10;
    field += 0x8D;
    *field = 12;
    field = D_03004F50 + 0x5F;
    --*field;
    sub_0807CB9C(entity);
}

void sub_0808E8B0(u8 *entity)
{
    u16 x = 0xF48;
    u16 y = 0x2F48;
    u8 zero = 0;
    u8 *field;
    u16 value;
    *(u16 *)(entity + 2) = x;
    field = entity + 0xE4;
    *(u16 *)field = x;
    *(u16 *)(entity + 6) = y;
    field += 2;
    *(u16 *)field = y;
    field += 0xE;
    value = *(u16 *)field;
    field -= 0x88;
    *(u16 *)field = value;
    field -= 0xB;
    *field = zero;
    sub_08084590(entity);
    sub_0808E888(entity);
}

extern u8 D_03004F50[];
u32 sub_080915B4(const Entity *);
void sub_08037FC4(u8 *, s32);
void sub_0807CB08(void);

void sub_0808EAC0(u8 *entity)
{
    u8 *state;
    u8 kind;
    u16 offset;
    entity[0x40] = 0;
    state = entity + 0x4C;
    *state = 2;
    offset = sub_080915B4((const Entity *)entity);
    kind = entity[0x3C];
    if (kind != 0x32 && kind != 0x1C) {
        sub_08037FC4(entity, offset);
        if (entity[0xD9] == 12) {
            *state = 10;
            --D_03004F50[0x5F];
            sub_0807CB08();
            entity[0x41] = 14;
        }
    }
}

void sub_0808E608(u8 *, s32);
void sub_0808E5E4(u8 *);
void sub_0808E654(u8 *, s32);

void sub_0808E59C(u8 *entity)
{
    u8 flags = entity[0xF1];
    flags &= 4;
    if (flags != 0)
        sub_0808E608(entity, 0x29);
    else if (entity[0xE0] == 10)
        sub_0808E5E4(entity);
    else {
        entity[0x54] = flags;
        entity[0x55] = flags;
        sub_0808E654(entity, 12);
    }
}

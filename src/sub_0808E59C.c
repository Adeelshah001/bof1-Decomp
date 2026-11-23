extern u8 D_03004F50[];
void sub_0807CB9C(u8 *);
void sub_08084590(u8 *);

void sub_0808E888(u8 *entity)
{
    u8 *field = entity + 0x4C;
    *field = 10;
    field += 0x8D;
    *field = 12;
    --D_03004F50[0x5F];
    sub_0807CB9C(entity);
}

void sub_0808E8B0(u8 *entity)
{
    u8 *saved = entity;
    u16 x = 0xF48;
    u16 y = 0x2F48;
    u8 zero = 0;
    u16 value;
    *(u16 *)(entity += 0xE4) = (*(u16 *)(saved + 2) = x);
    *(u16 *)(saved + 6) = y;
    entity += 2;
    *(u16 *)entity = y;
    entity += 0xE;
    value = *(u16 *)entity;
    entity -= 0x88;
    *(u16 *)entity = value;
    entity -= 0xB;
    *entity = zero;
    sub_08084590(saved);
    sub_0808E888(saved);
}

void sub_0808E608(u8 *, s32);
void sub_0808E5E4(u8 *);
void sub_0808E654(u8 *, s32);

void sub_0808E59C(u8 *entity)
{
    u32 bits = entity[0xF1];
    u32 flags;
    u32 shifted;
    bits &= 4;
    shifted = bits << 24;
    flags = shifted >> 24;
    if (flags != 0)
        sub_0808E608(entity, 0x29);
    else {
        bits = entity[0xE0];
        if (bits == 10) {
            sub_0808E5E4(entity);
            return;
        }
        entity[0x54] = flags;
        entity[0x55] = flags;
        sub_0808E654(entity, 12);
    }
}

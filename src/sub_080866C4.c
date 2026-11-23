extern void sub_0807CB08(void);
extern void sub_0807B248(u8 *);
extern void sub_08037FC4(u8 *, s32);
extern u8 D_03004F50[];

void sub_08086678(u8 *entity)
{
    u8 zero;
    u8 *step;
    sub_0807CB08();
    step = entity + 0x4D;
    zero = 0;
    *step = 10;
    entity[0xE1] = zero;
    sub_0807B248(entity);
}

void sub_080866C4(u8 *entity)
{
    u8 *state = entity + 0x4C;
    s32 zero = 0;
    *state = 2;
    entity[0x4D] = zero;
    entity[0x50] = zero;
    D_03004F50[0x5D] = zero;
    sub_08037FC4(entity, zero);
}

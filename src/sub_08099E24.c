void sub_08099060(u8 *);
void sub_08099D34(u8 *);
void sub_08038178(u8 *, u32);
void sub_08099E50(u8 *);
void sub_08099AFC(u8 *, s32, u16 *, u16 *);
void sub_080381B4(u8 *, u16, u16);
void sub_08099BDC(u8 *);
void sub_08099BFC(u8 *);

void sub_08099D10(u8 *entity)
{
    entity[0x7D] = 6;
    entity[0x54] = 5;
    sub_08099060(entity);
    sub_08099D34(entity);
}

void sub_08099E24(u8 *entity)
{
    sub_08038178(entity, *(u32 *)(entity + 0x78));
    entity[0x7D] = 7;
    entity[0x54] = 6;
    sub_08099060(entity);
    sub_08099E50(entity);
}

void sub_08099ACC(u8 *entity)
{
    u16 coords[2];
    sub_08099AFC(entity, 0, &coords[0], &coords[1]);
    sub_080381B4(entity, coords[0], coords[1]);
    sub_08099BDC(entity);
}

void sub_08099A84(u8 *entity)
{
    u16 coords[2];
    if ((u32)entity[2] < (u32)(*(u16 *)(entity + 0x44) >> 8)) {
        sub_08099AFC(entity, 2, &coords[0], &coords[1]);
        entity[0x61] = 0x1D;
        *(u16 *)(entity + 0x38) = 0x120;
        entity[0x4C] = 4;
        entity[0x55] = 3;
    }
    sub_08099BFC(entity);
}

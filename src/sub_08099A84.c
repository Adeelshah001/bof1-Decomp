void sub_08099060(u8 *);
void sub_08099D34(u8 *);
void sub_08038178(u8 *, u32);
void sub_08099E50(u8 *);
void sub_08099AFC(u8 *, s32, u16 *, u16 *);
void sub_080381B4(u8 *, u16, u16);
void sub_08099BDC(u8 *);
void sub_08099BFC(u8 *);

void sub_08099A84(u8 *entity)
{
    u16 coords[2];
    if ((u32)entity[2] < (u32)(*(u16 *)(entity + 0x44) >> 8)) {
        sub_08099AFC(entity, 2, &coords[0], &coords[1]);
        {
            u8 *field = entity + 0x61;
            u16 angle;
            *field = 0x1D;
            angle = 0x120;
            *(u16 *)(entity + 0x38) = angle;
            field -= 0x15;
            *field = 4;
            field += 9;
            *field = 3;
        }
    }
    sub_08099BFC(entity);
}

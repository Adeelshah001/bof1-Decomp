void sub_080379D4(u8);
void sub_08093640(u8 *);
void sub_080967C4(u8 *);
u8 sub_080957BC(u8 *);
void sub_08096CD4(u8 *);
void sub_0809692C(u8 *, u16);
extern u8 D_030045B0[], D_03004610;

void sub_0809688C(u8 *entity)
{
    u8 *saved = entity;
    u8 time = 0x32;
    entity[0x54] = time;
    sub_080379D4(9);
    saved[0x4C] = 1;
    sub_08093640(saved);
    sub_080967C4(saved);
}

void sub_080968B8(u8 *entity)
{
    u8 time;
    entity[0x55] = 0;
    time = 0x50;
    entity[0x54] = time;
    sub_080379D4(9);
    entity[0x4C] = 1;
    sub_08093640(entity);
    sub_080967C4(entity);
}

void sub_08096858(u8 *entity)
{
    u8 *state = entity + 0x4C;
    u32 status;
    do {
        status = sub_080957BC(entity);
        if (status == 0)
            return;
        if (status == 1) {
            *state = 2;
            return;
        }
    } while (status == 2);
    sub_08096CD4(entity);
}

void sub_080968EC(u8 *entity)
{
    u8 mode;
    u8 *state;
    u8 index;
    sub_080379D4(0x22);
    *(u16 *)(entity + 2) = 0x80;
    *(u16 *)(entity + 6) = 0x58;
    mode = 2;
    state = D_030045B0;
    state[0x46] = mode;
    state[0x47] = mode;
    index = 0x15;
    D_03004610 = index;
    sub_0809692C(entity, 0x7FFF);
}

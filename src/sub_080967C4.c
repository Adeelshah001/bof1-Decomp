u8 sub_080957BC(u8 *);
void sub_08096CD4(u8 *);
void sub_08098294(Entity *, u32);
s32 sub_080936A0(Entity *);
void sub_08095618(Entity *);
void sub_080379D4(u8);
void sub_08097054(u16);
void sub_08037FC4(void *, u16);
void sub_08095EFC(u8 *);
extern u8 D_03004F50[], D_03004F30[], D_0300178C;
extern u16 D_030023E0[];

void sub_0809675C(u8 *entity)
{
    u8 *state = entity + 0x4C;
    u8 status;
    do {
        status = sub_080957BC(entity);
        switch (status) {
        case 0:
            return;
        case 1:
            *state = 4;
            return;
        default:
            break;
        }
    } while (status == 2);
    sub_08096CD4(entity);
}

void sub_08096720(Entity *entity)
{
    u8 *data = (u8 *)entity;
    s32 result;
    sub_08098294(entity, entity->unk78);
    data[0x4C] = 6;
    result = sub_080936A0(entity);
    if (result == 0) {
        D_03004F50[0x5D] = result;
        sub_08095618(entity);
    } else {
        sub_08096CD4(data);
    }
}

void sub_080967C4(u8 *entity)
{
    u16 value;
    u8 *saved = entity;
    u32 timer = entity[0x54];
    timer--;
    entity[0x54] = timer;
    if ((u8)timer != 0) {
        u32 odd = timer & 1;
        value = 0xF01;
        if (odd == 0)
            value -= 2;
    } else {
        sub_080379D4(0xF1);
        saved[0x4C]++;
        value = 0xF00;
    }
    D_030023E0[1] = value;
}

void sub_080966C4(u8 *entity, u8 state)
{
    u8 *timer;
    u32 mode;
    entity[0x4C] = state;
    sub_080379D4(0x1B);
    entity[2] = 0x80;
    entity[6] = 0x40;
    timer = entity + 0x54;
    *timer++ = 3;
    *timer = 13;
    mode = D_03004F30[9];
    mode &= 0xE0;
    if (mode == 0) {
        D_0300178C = mode;
        sub_08097054(0x1F01);
    }
    sub_08037FC4(entity, 4);
    sub_08095EFC(entity);
}

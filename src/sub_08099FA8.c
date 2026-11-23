extern const char D_080A7C18[];
extern const char D_080A7CE8[];
extern const char D_080A7D0C[];

void sub_080352D0(const char *, const char *, s32, ...);
void sub_08037FC4(void *);
void sub_0809A09C(void *, u8);
void sub_0809A0F4(void *);
void sub_0807B270(void *);
void sub_0809A1B4(void *);

void sub_08099F58(void *entity)
{
    u8 *data = entity;
    data[0x4C] = 2;
    sub_08037FC4(entity);
}

void sub_08099FA8(void *entity)
{
    u8 *data = entity;
    *(u16 *)(data + 2) += 0x10;
    {
        u16 timer = 0x120;
        *(u16 *)(data + 0x38) = timer;
    }
    sub_0809A09C(entity, 0x20);
}

void sub_08099F6C(void *entity)
{
    u8 state = ((u8 *)entity)[0x4C];
    switch (state) {
    default:
        sub_080352D0(D_080A7D0C, D_080A7C18, 0x448, state);
        break;
    case 0:
        sub_08099FA8(entity);
        break;
    case 2:
        sub_0809A0F4(entity);
        break;
    }
}

void sub_08099F04(void *entity)
{
    u8 *data = entity;
    switch (data[0x4C]) {
    case 0:
        sub_08099F58(entity);
        break;
    case 2:
        sub_0807B270(entity);
        break;
    case 4:
        sub_0809A1B4(entity);
        break;
    default:
        sub_080352D0(D_080A7CE8, D_080A7C18, 0x42A, data[0x4C]);
        break;
    }
}

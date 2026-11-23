extern const char D_080A7C18[];
extern const char D_080A7D30[];
extern const char D_080A7D54[];

void sub_080352D0(const char *, const char *, s32, ...);
void sub_08099FFC(void *);
void sub_0809A00C(void *);
void sub_0809A08C(void *);
void sub_0809A0F4(void *);
void sub_08038264(void *);
u8 sub_08038128(u8 *, u8 *, u16, u16);
u8 sub_08038178(u8 *, u16 *);
void sub_0809A1B4(void *);
void sub_0807B270(void *);

void sub_08099FC0(void *entity)
{
    u8 state = ((u8 *)entity)[0x4C];
    switch (state) {
    default:
        sub_080352D0(D_080A7D30, D_080A7C18, 0x46A, state);
        break;
    case 0:
        sub_08099FFC(entity);
        break;
    case 2:
        sub_0809A00C(entity);
        break;
    }
}

void sub_0809A00C(void *entity)
{
    u8 *data = entity;

    sub_08038264(data);
    sub_08038128(data, *(u8 **)(data + 0x78), 0, -0x30);
    if ((data[0x61] & 0xF0) != (*(u16 *)(data + 0x44) >> 8)) {
        sub_0809A1B4(data);
    } else {
        sub_0807B270(data);
    }
}

void sub_0809A050(void *entity)
{
    u8 state = ((u8 *)entity)[0x4C];
    switch (state) {
    default:
        sub_080352D0(D_080A7D54, D_080A7C18, 0x4A5, state);
        break;
    case 0:
        sub_0809A08C(entity);
        break;
    case 2:
        sub_0809A0F4(entity);
        break;
    }
}

void sub_0809A0F4(void *entity)
{
    u8 *data = entity;

    sub_08038264(data);
    sub_08038178(data, *(u16 **)(data + 0x78));
    if ((data[0x61] & 0xF0) != (*(u16 *)(data + 0x44) >> 8)) {
        sub_0809A1B4(data);
    } else {
        sub_0807B270(data);
    }
}

extern const char D_080A7CAC[];
extern const char D_080A7C18[];

void sub_080352D0(const char *, const char *, s32, ...);
void sub_08099DA4(s32);
void sub_08099E24(u8 *);
void sub_08099E50(u8 *);
void sub_08099158(u8 *);
void sub_08099EB4(u8 *);
void sub_0809A1B4(u8 *);
void sub_0809A0E4(u8 *);

void sub_08099D90(u8 *entity, const u8 *source)
{
    u8 value = source[0x61];
    entity[0x61] = value;
    sub_08099DA4((s32)entity);
}

void sub_08099DC4(u8 *entity)
{
    switch (entity[0x4C]) {
    case 0:
        sub_08099E24(entity);
        break;
    case 2:
        sub_08099E50(entity);
        break;
    case 4:
        sub_08099158(entity);
        break;
    case 6:
        sub_08099EB4(entity);
        break;
    default:
        sub_080352D0(D_080A7CAC, D_080A7C18, 0x36B, entity[0x4C]);
        break;
    }
}

void sub_08099D50(u8 *entity)
{
    u8 *source;
    if (entity[0x7D] == 6) {
        source = *(u8 **)(entity + 0x6C);
        if (source[0x4D] == 0x12) {
            sub_0809A1B4(entity);
            return;
        }
        goto update;
    }
    source = *(u8 **)(entity + 0x74);
    if (source[0x3A] != 0) {
update:
        sub_08099D90(entity, source);
        return;
    }
    sub_0809A1B4(entity);
}

void sub_08099D34(u8 *entity)
{
    entity[0x4C] = 4;
    *(u16 *)(entity + 0x38) = (u16)(entity[0x7D] << 5);
    sub_0809A0E4(entity);
}

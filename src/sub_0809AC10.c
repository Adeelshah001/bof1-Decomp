s32 sub_080352D0(const char *, const char *, ...);
void sub_0809AC84(Entity *);
void sub_0809ACD0(Entity *);
void sub_0809ACF8(Entity *);
void sub_0809AD3C(Entity *);
void sub_0809AD64(Entity *);
extern const char D_080A7F8C[], D_080A7C18[];

void sub_0809AC10(Entity *entity)
{
    u8 *data = (u8 *)entity;
    u8 phase = data[0x4C];

    switch (phase) {
    case 0:
        sub_0809AC84(entity);
        break;
    case 1:
        sub_0809ACD0(entity);
        break;
    case 2:
        sub_0809ACF8(entity);
        break;
    case 3:
        sub_0809AD3C(entity);
        break;
    case 4:
        sub_0809AD64(entity);
        break;
    default:
        sub_080352D0(D_080A7F8C, D_080A7C18, 0x9FB, phase);
        break;
    }
}

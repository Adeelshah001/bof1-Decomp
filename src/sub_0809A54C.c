s32 sub_080352D0(const char *, const char *, ...);
void sub_08038178(Entity *, u32);
void sub_08038264(Entity *);
void sub_0807B270(Entity *);
void sub_0809A5B4(Entity *);
void sub_0809A1B4(Entity *);
extern const char D_080A7E04[], D_080A7C18[];

void sub_0809A54C(Entity *entity)
{
    u8 *data = (u8 *)entity;
    u8 phase = data[0x4C];
    u32 mode;

    switch (phase) {
    default:
        sub_080352D0(D_080A7E04, D_080A7C18, 0x6F3, phase);
        break;
    case 0:
        sub_0809A5B4(entity);
        break;
    case 2:
        sub_08038264(entity);
        sub_08038178(entity, entity->unk78);
        mode = data[0x61];
        mode &= 0xF0;
        if (mode != (*(u16 *)(data + 0x44) >> 8))
            sub_0809A1B4(entity);
        else
            sub_0807B270(entity);
        break;
    }
}

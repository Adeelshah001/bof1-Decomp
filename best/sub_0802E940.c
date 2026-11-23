void sub_0802A424(void *, u16, u16);
void sub_0802CCEC(void *);
void sub_0802CD4C(void *, s32);
void sub_0803273C();

void sub_0802E940(u8 *entity, u32 command)
{
    u16 pos[2];
    u16 x, y;
    u8 value;
    u8 mode = ((u8)command >> 4) & 3;
    entity[0x61] = mode;
    (*(u32 *)(entity + 0x88))++;
    command = (u8)command;
    command &= 0xF;
    entity[0xC3] = command;
    value = command;
    if (value == 0) {
        sub_0802CCEC(entity);
        entity[0x4D] = value;
    } else {
        sub_0802CD4C(entity, 0);
        sub_0803273C(entity, pos, (u32)pos + sizeof(u16));
        x = *(u16 *)((u8 *)pos + 0);
        y = *(u16 *)((u32)pos + sizeof(u16));
        sub_0802A424(entity, x, y);
        entity[0x4D] = 2;
    }
}

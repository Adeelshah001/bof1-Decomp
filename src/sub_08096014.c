void sub_0803A8EC(Entity *);
u16 sub_0807B2CC(Entity *);
s32 sub_080936A0(u8 *);
void sub_08095618(Entity *);
void sub_08096CD4(Entity *);
void sub_08098294(Entity *, void *);
extern u8 D_03004F50[];

void sub_08096014(Entity *entity)
{
    u8 *data = (u8 *)entity;
    s32 result;

    if (sub_0807B2CC(entity) != 0) {
        u16 offset = 0x50;
        if (entity->unk2A == 0x18E)
            offset = 0x70;
        offset += entity->unk6;
        entity->unk2C = offset;
        sub_0803A8EC(entity);
    } else {
        sub_08098294(entity, (void *)entity->unk78);
        ++data[0x4C];
        result = sub_080936A0(data);
        if (result == 0) {
            D_03004F50[0x5D] = result;
            sub_08095618(entity);
        } else {
            sub_08096CD4(entity);
        }
    }
}

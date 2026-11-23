typedef struct {
    u8 pad00[0x3A];
    u8 active;
    u8 slot;
    u8 kind;
    u8 pad3D[0x61 - 0x3D];
    u8 unk61;
    u8 pad62[0xE8 - 0x62];
    u8 data[0x124 - 0xE8];
} MapObject;

extern MapObject D_03002AB0[];
void sub_0802CCEC(void *);
void sub_080331A0(void *);
void sub_0803324C(void *);
void sub_080332F8(void *);

void sub_08033B88(void *object, s8 value)
{
    ((u8 *)object)[0x61] = value;
    sub_0802CCEC(object);
}

void sub_08033BBC(MapObject *object, const u8 *data, u8 kind, u8 slot)
{
    u8 i;

    object->slot = slot;
    if (kind != 0xFF) {
        i = 0;
        do {
            ((MapObject *)((u8 *)object + i))->data[0] = data[i];
            i++;
        } while (i < 64);
        object->kind = kind;
        object->active = 1;
        object->slot = slot;
        sub_080331A0(object);
        sub_0803324C(object);
    }
}

void sub_08033B38(s32 unused, u8 value)
{
    MapObject *objects = D_03002AB0;
    MapObject *object;
    u8 i;

    objects[0].unk61 = value;
    i = 1;
    do {
        object = &objects[i];
        if (object->active && !(object->data[8] & 0x40))
            object->unk61 = objects[0].unk61;
        i++;
    } while (i <= 3);
}

void sub_08033B18(s32 object)
{
    if (((MapObject *)object)->slot <= 3) {
        sub_080332F8((void *)object);
        sub_0802CCEC((void *)object);
    }
}

typedef struct {
    u8 pad00[0x3A];
    u8 active;
    u8 pad3B;
    u8 kind;
    u8 pad3D[0xF0 - 0x3D];
    u8 flags;
} MapObject;

typedef struct {
    u8 pad00[0x2B8];
    u8 state;
} SaveData;

extern MapObject D_03002AB0;
extern MapObject D_03002CF8;
extern SaveData D_0202DBD0;
u8 sub_08036E0C(void *);
u8 sub_08036E34(void *);

s32 sub_08036DC4(void)
{
    if (D_03002AB0.kind != 5)
        return 0;
    return 1;
}

u8 sub_08036DDC(MapObject *object)
{
    u8 kind = object->kind;
    u8 result;

    if (kind == 1)
        result = sub_08036E0C(object);
    else if (kind & 0x80)
        result = sub_08036E34(object);
    else
        return 0;
    return result;
}

s32 sub_08036D9C(void)
{
    if (D_03002CF8.active && !(D_03002CF8.flags & 0x40))
        return 1;
    return 0;
}

s32 sub_08036D6C(void)
{
    if (D_0202DBD0.state == 0x40 && D_03002AB0.kind == 5)
        return 1;
    return 0;
}

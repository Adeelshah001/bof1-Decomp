typedef struct {
    u8 pad00[0x2B8];
    u8 flags;
} SavedPlayerFlags;

extern SavedPlayerFlags D_0202DBD0;
extern u8 gEventActors[];
typedef u8 (*PlayerCheck)(void);
extern PlayerCheck const *const D_080FACDC[][5];

s32 sub_08037048(void) {
    s32 result = 1;
    if (D_0202DBD0.flags & 2)
        result = 0;
    return result;
}

s32 sub_08037068(void) {
    s32 result = 1;
    u8 flags = D_0202DBD0.flags;
    u8 type;
    if ((flags & 2) || (type = gEventActors[0x3C]) == 1 ||
        ((flags & 0x10) && type == 5))
        result = 0;
    return result;
}

u8 sub_08037010(u8 check, u8 type, u8 group) {
    return D_080FACDC[group][type][check]();
}

s32 sub_080370A0(void) {
    s32 result = 1;
    if ((D_0202DBD0.flags & 2) || gEventActors[0x3E] != 2)
        result = 0;
    return result;
}

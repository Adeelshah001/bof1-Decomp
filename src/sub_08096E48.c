extern u8 D_03004F50[];

s32 sub_08096D94(void)
{
    u8 *battle = D_03004F50;
    s32 result;
    if (--battle[0x4A] == 0)
        result = 3;
    else
        result = 2;
    return result;
}

s32 sub_08096DD8(u8 *entity)
{
    s32 result;
    if (!(entity[0xF0] & 0x50) && entity[0x3A] != 0 && !(entity[0xF1] & 0x80))
        result = 1;
    else
        result = 0;
    return result;
}

typedef struct {
    u8 pad00[0x3B];
    u8 kind;
    u8 state;
    u8 pad3D[0x17];
    u8 delay : 8;
    u8 counter;
} Effect96E48;

extern const u8 D_08152DEA[];
void sub_0803EE6C(Effect96E48 *entity);
void sub_08095618(Effect96E48 *entity);
void sub_08096EA4(Effect96E48 *entity);

void sub_08096E48(Effect96E48 *entity)
{
    u32 delay = entity->delay - 1;
    u8 zero = 0;
    if (!((entity->delay = delay) & 0x80)) {
        sub_08096EA4(entity);
    } else {
        sub_0803EE6C(entity);
        entity->delay = zero;
        entity->counter = zero;
        if (entity->state == 10 && *(const u8 *)(entity->kind + (u32)D_08152DEA) == 0)
            sub_08095618(entity);
    }
}

extern u16 D_020211CE;

void sub_08096B60(u8 *entity, u32 packed)
{
    u8 *bytes;
    u16 zero;
    D_020211CE = 0;
    bytes = entity + 0x54;
    zero = 0;
    bytes[0] = packed;
    packed >>= 8;
    bytes[1] = packed;
    *(u16 *)(entity + 0x38) = zero;
}

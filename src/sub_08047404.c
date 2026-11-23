extern const u8 D_080A6638[];
extern const u8 D_080A6634[];
extern u8 D_030023E0[];

typedef struct {
    u16 unk0;
    u16 unk2;
} TilePosition;
extern TilePosition D_03002AB0;
extern u8 (*D_080FC7E0[])(u8 *);

void sub_08037FC4(void *, u8);
void sub_080A0A68(void *, const void *, u32);
void sub_080A0AC8(void *, s32, u32);
u8 sub_08036C04(void *, u16, u16);
s32 sub_08037C98(void *, s32);
void sub_0803A8EC(void *);
void sub_08046CAC(void *);
u8 sub_080475B4(void *);
void sub_08046894(void *);

void sub_08047404(u8 *object)
{
    u8 states[4], directions[4], state;
    u8 *initial = states;
    sub_080A0AC8(initial, 0, 4);
    initial[1] = 1;
    sub_080A0A68(directions, D_080A6638, 4);
    state = states[object[0x61]];
    object[0x40] = state;
    sub_08037FC4(object, directions[object[0x61]]);
}

void sub_08047450(u8 *object)
{
    u8 states[4], directions[4], state;
    u8 *initial = states;
    sub_080A0AC8(initial, 0, 4);
    initial[1] = 1;
    sub_080A0A68(directions, D_080A6634, 4);
    state = states[object[0x61]];
    object[0x40] = state;
    sub_08037FC4(object, directions[object[0x61]]);
}

u8 sub_080473A8(u8 *object, u16 x, u16 y)
{
    u16 first = x;
    u16 second = y;
    u8 kind = 1;
    if (((D_03002AB0.unk2 & 0xFFF0) | 8) != first || first != second)
        kind = sub_08036C04(D_030023E0, x, y);
    return D_080FC7E0[kind](object);
}

void sub_08047508(Entity *object)
{
    Entity *saved = object;
    sub_08037C98(object, 0);
    if (sub_080475B4(object) != 0) {
        sub_08046CAC(object);
        object->unk64 = (u32)&sub_08046894;
        sub_08047450((u8 *)object);
    }
    sub_0803A8EC(saved);
}

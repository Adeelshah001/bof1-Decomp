typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x0A];
    u16 unk12;
    u8 pad14[0x02];
    u16 unk16;
    u8 pad18[0x04];
    u16 unk1C;
    u8 pad1E[0x0C];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x0D];
    u8 unk3B;
    u8 pad3C;
    u8 unk3D;
    u8 pad3E[0x03];
    u8 unk41;
    u8 pad42[0x22];
    u32 unk64;
} EntityF;
typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;
extern u8 D_030023E0[];
extern u16 D_030023D4;
extern u16 D_030040E0;
extern const u16 D_080FD51C[];
u16 sub_08037C98(EntityF *, s32);
void sub_0803A8EC(EntityF *);
void sub_0803EE6C(EntityF *);
void sub_08037FC4(EntityF *, s32);
void sub_0804ED40(EntityF *);

void sub_0804FE90(EntityF *entity)
{
    const u16 *positions = D_080FD51C;
    u32 y;

    entity->unk2 = positions[entity->unk3B * 2];
    y = *(const u16 *)((u32)positions + (((entity->unk3B << 1) + 1) << 1));
    entity->unk6 = y;
    entity->unk2C = y;
}

void sub_0804FE34(EntityF *entity)
{
    u16 baseX = D_030023D4;
    u16 baseY = D_030040E0;
    const u16 *positions;
    u32 y;

    if (((Struct23E0 *)D_030023E0)->unkA4 == 6) {
        baseX = 0x938;
        baseY = 0x316C;
    }
    positions = D_080FD51C;
    entity->unk2 = baseX + positions[entity->unk3B * 2];
    y = baseY + *(const u16 *)((u32)positions + (((entity->unk3B << 1) + 1) << 1));
    entity->unk6 = y;
    entity->unk2C = y;
}

void sub_0804FF1C(EntityF *entity)
{
    u32 y;

    entity->unk2 -= entity->unk12;
    y = entity->unk16;
    y += entity->unk6;
    entity->unk6 = y;
    entity->unk2C = y;
    if (sub_08037C98(entity, 1))
        sub_0803A8EC(entity);
    else
        sub_0803EE6C(entity);
}

void sub_0804FDE4(EntityF *entity)
{
    u8 *mode;
    u8 value;

    entity->unk64 = (u32)sub_0804ED40;
    mode = &entity->unk3D;
    *mode = 2;
    if (((Struct23E0 *)D_030023E0)->unkA4 == 0x1BE) {
        mode = &entity->unk41;
        value = 0x2E;
    } else {
        mode = &entity->unk41;
        value = 0x0E;
    }
    *mode = value;
    entity->unk1C = 0x1A0;
    entity->unk2A = 0x138;
    sub_08037FC4(entity, 6);
}

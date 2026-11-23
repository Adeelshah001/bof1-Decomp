void sub_08083BB4(void *);
void sub_080901F4(void *);
void sub_0807B248(void *);
void sub_08083300(void *, u32);
void sub_080903E0(void *);
u32 sub_08091590(u8 *);
u32 sub_080915D4(u8 *);
u32 sub_080915B4(u8 *);
void sub_08037FC4(void *, u32);
void sub_0803800C(void *, u32, u32);
void sub_0807C484(void *);
void sub_0809005C(void *, s32);
void sub_0808EE54(void *);

void sub_080901C4(Entity *entity)
{
    if (--entity->unk54 == 0) {
        sub_08083BB4(entity);
        entity->unk4D = 6;
    }
    sub_080901F4(entity);
}

void sub_080903A0(Entity *entity)
{
    sub_0807B248(entity);
    if (--entity->unk54 == 0) {
        entity->unk4D = 6;
        sub_08083300(entity, ((u32)(u8)sub_08091590((u8 *)entity) << 24 >> 27) * 2);
        sub_080903E0(entity);
    }
}

typedef struct {
    u8 pad00[0x10];
    u16 unk10, unk12, unk14, unk16;
    u8 pad18[0x2C - 0x18];
    u16 unk2C;
    u8 pad2E[0x44 - 0x2E];
    u32 unk44, unk48;
    u8 pad4C[0x54 - 0x4C];
    u8 unk54;
} MotionEntity;

void sub_0808FF8C(MotionEntity *entity)
{
    u8 *timer = &entity->unk54;
    u32 zero = 0;
    *timer = 16;
    entity->unk2C += 0x30;
    entity->unk12 = 1;
    entity->unk10 = zero;
    entity->unk44 = zero;
    entity->unk16 = 0xFFF8;
    entity->unk14 = zero;
    entity->unk48 = 0x800;
    sub_0807C484(entity);
    sub_08037FC4(entity, (u16)sub_080915D4((u8 *)entity));
    sub_0809005C(entity, 4);
}

void sub_08090434(u8 *entity)
{
    if (entity[0x4D] == 0) {
        u32 animation = (0x07000000 & (sub_08091590(entity) << 24)) >> 23;
        sub_0803800C(entity, (u16)sub_080915D4(entity), animation);
    }
    sub_0808EE54(entity);
    if (entity[0x4C] != 4)
        sub_08037FC4(entity, (u16)sub_080915B4(entity));
}

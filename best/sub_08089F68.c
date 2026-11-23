extern u8 D_03004F30[];
extern u8 D_03004F50[];

void sub_0807CB08(void);
void sub_08089BE4(u8 *);

void sub_08089B60(u8 *entity)
{
    entity[0x4D] = 4;
    entity[0x54] = 0x28;
    entity[0xE1] = 5;
    sub_0807CB08();
    sub_08089BE4(entity);
}

u8 sub_0807CAB8(u8 *, u32 *);
void sub_0807C600(u8 *, s32);
u16 sub_080915D4(u8 *);
void sub_08037FC4(u8 *, u16);

void sub_08089D94(u8 *entity)
{
    u32 sp0;
    u8 res;

    do {
        res = sub_0807CAB8(entity, &sp0);
        if (res == 0)
            return;
        if (res == 3) {
            sub_0807C600(entity, 2);
            return;
        }
    } while (res == 2);

    *(u32 *)(entity + 0x78) = sp0;
    *(u32 *)(D_03004F50 + 0x54) = sp0;
    sub_08037FC4(entity, sub_080915D4(entity));
    entity[0x55] = 0x10;
    entity[0x50] = 2;
}

void sub_0808A248(u8 *);

void sub_08089F20(u8 *entity)
{
    entity[0x02] = entity[0xE4];
    entity[0x06] = entity[0xE6];
    entity[0x4D]++;
    D_03004F50[0x10] = 0x7F;
    D_03004F30[0x0C] |= 1;
    entity[0x55] = 0x0B;
    sub_0808A248(entity);
}

struct Unk89F68 {
    u8 pad00[0x06];
    u8 unk06;
    u8 pad07[0x20 - 0x07];
    u16 unk20;
    u8 pad22[0x4C - 0x22];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 unk55 : 8;
};

void sub_0807B27C(void);
void sub_0803800C(struct Unk89F68 *, s32, s32);

void sub_08089F68(struct Unk89F68 *entity)
{
    sub_0807B27C();
    if ((u8)entity->unk20 == 1) {
        if (!(--entity->unk55 & 0x80)) {
            sub_0803800C(entity, 0, entity->unk55 * 2);
        } else {
            entity->unk4C = 8;
            entity->unk06 += 8;
            entity->unk54 = 8;
            D_03004F50[0x10] = 9;
        }
    }
}

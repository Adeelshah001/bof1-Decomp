extern void *sub_0803ED98(void);
extern void sub_080379D4(s32 a1);

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
} EntityLocal;

void sub_080487F0(EntityLocal *entity) {
    EntityLocal *new_entity = sub_0803ED98();
    if (new_entity != NULL) {
        new_entity->unk3A = 1;
        new_entity->unk3C = 8;
        new_entity->unk41 = 0x38;
        new_entity->unk3B = 0;
        new_entity->unk2 = entity->unk2;
        {
            u16 unk6 = entity->unk6;
            new_entity->unk6 = unk6;
            new_entity->unk2C = unk6 + 0x10;
        }
        sub_080379D4(0x23);
    }
}

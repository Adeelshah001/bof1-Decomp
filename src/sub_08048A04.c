extern void sub_08049CA4(void);
extern void sub_08049C40(void *, s32, s32);

typedef struct {
    u8 pad[0xA4];
    vu16 unkA4;
} D_030023E0_Struct;
extern D_030023E0_Struct D_030023E0;

void sub_08048A04(Entity *entity) {
    u32 r2;
    u16 unk2;
    u32 cmp_val;

    entity->unk64 = (u32)&sub_08049CA4;
    if (D_030023E0.unkA4 == 0xAA) {
        unk2 = *(u16 *)((u8 *)entity + 0x02);
        cmp_val = 0xD5 << 3;
        r2 = 0x3E;
        if (unk2 == cmp_val) {
            r2 = 0x2E;
        }
        sub_08049C40(entity, 0xA0, r2);
        return;
    }
    if (*(u8 *)((u8 *)entity + 0x3B) == 5) {
        sub_08049C40(entity, 0xA0, 0x2E);
    } else {
        sub_08049C40(entity, 0xA0, 0x3E);
    }
    if (D_030023E0.unkA4 == 0xFA) {
        entity->unk2C = (u16)(entity->unk2C + 0x40);
        entity->unk41 = (u8)(0x30 | entity->unk41);
    }
}

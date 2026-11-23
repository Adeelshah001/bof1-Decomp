extern void sub_0804AAF4(void);
extern void sub_08048284(void *entity, s32 a1, s32 a2, s32 a3);
extern void sub_08037FC4(void *entity, s32 a1);

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0x2A - 0x08];
    u16 unk2A;
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x54 - 0x3A];
    u16 unk54;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
} EntityLocal;

void sub_080481D8(EntityLocal *entity) {
    entity->unk64 = (u32)&sub_0804AAF4;
    entity->unk2A = 0x22C;
    sub_08048284(entity, 0x10, 0x3C, 1);
    sub_08037FC4(entity, 2);
    entity->unk2 = 0x980;
    entity->unk6 = 0xBA50;
    entity->unk2C = 0xBA50;
    entity->unk38 = 0;
    entity->unk54 = 0x40;
    entity->unk61 = 2;
}

extern const u8 D_0822B3B8[];

void *Entity_FindFreeSlot(void);
void sub_080379D4(s32);

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3A - 0x2E];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
    u8 pad42[0xCC - 0x42];
    u8 unkCC;
} Entity535;

static inline u8 read_u8(const u8 *base, u32 offset) {
    return *(const u8 *)((u32)base + offset);
}

void sub_08053508(Entity535 *arg0) {
    Entity535 *slot = Entity_FindFreeSlot();
    u32 x;
    u32 y;
    const u8 *data;

    if (slot != NULL) {
        slot->unk3A = 1;
        slot->unk3C = 8;
        slot->unk3B = 0;
        data = D_0822B3B8;
        slot->unk41 = read_u8(data, arg0->unkCC + 1) << 1;
        x = read_u8(data, arg0->unkCC + 2);
        x |= read_u8(data, arg0->unkCC + 3) << 8;
        slot->unk2 = x;
        y = read_u8(data, arg0->unkCC + 4);
        y |= read_u8(data, arg0->unkCC + 5) << 8;
        slot->unk6 = y - 8;
        slot->unk2C = y + 8;
        sub_080379D4(0x23);
        arg0->unkCC += 6;
    }
}

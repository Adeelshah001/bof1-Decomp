typedef struct {
    const void *source;
    void *destination;
    u16 size;
} DmaTransfer;

extern const DmaTransfer D_0814BB34[];
extern vu32 D_040000D4[];

void sub_08068818(s32 index)
{
    u32 table = (u32)D_0814BB34;
    u32 offset = index * sizeof(DmaTransfer);
    const DmaTransfer *transfer = (const DmaTransfer *)(offset + table);
    const void *source = transfer->source;
    void *destination;
    u32 size;
    table += 4;
    destination = *(void **)(offset + table);
    size = transfer->size;
    D_040000D4[0] = (u32)source;
    D_040000D4[1] = (u32)destination;
    D_040000D4[2] = (size >> 1) | 0x80000000;
    (void)D_040000D4[2];
}
extern u8 D_03004620[];
extern u8 D_0202DBD0[];
extern const u8 D_0000049A[];
void sub_080379D4(s32);

s32 sub_08066E80(void)
{
    u8 *state = D_03004620;
    u32 selection = (u32)(state + 0xB2);
    u16 *limit = (u16 *)(D_0202DBD0 + (u32)D_0000049A);

    selection = *(u8 *)selection;
    if (selection < *limit) {
        sub_080379D4(2);
        state[3] = 2;
    } else {
        sub_080379D4(3);
        state[2] = 0x2A;
        state[7] = 0xFF;
    }
    return 0;
}

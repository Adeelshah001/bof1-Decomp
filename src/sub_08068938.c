typedef struct {
    const void *source;
    void *destination;
    u16 size;
} DmaTransfer;

extern const DmaTransfer D_0814BB34[];
extern vu32 D_040000D4[];

void sub_08068818(s32 index)
{
    const DmaTransfer *transfer = &D_0814BB34[index];
    const void *source = transfer->source;
    void *destination = transfer->destination;
    u32 size = transfer->size;
    D_040000D4[0] = (u32)source;
    D_040000D4[1] = (u32)destination;
    D_040000D4[2] = (size >> 1) | 0x80000000;
    (void)D_040000D4[2];
}

extern u8 D_03004790[][12];
extern const u8 D_0814BBA0[][4];
void sub_08067314(s32);
void sub_080674B8(s32);

void sub_08068938(s32 slot, s32 index)
{
    u8 *state = D_03004790[slot];

    if (state[0] == 0) {
        const u8 *entry = D_0814BBA0[index];
        state[3] = entry[0];
        state[4] = entry[1];
        state[1] = entry[2];
        state[2] = entry[3];
        state[0] = 1;
        sub_08067314(slot);
        sub_080674B8(slot);
    }
}

extern u8 D_03004620[];
extern u8 D_0202DBD0[];
void sub_080379D4(s32);

s32 sub_08066E80(void)
{
    u8 *state = D_03004620;
    u8 *selection = state + 0xB2;
    u16 *limit = (u16 *)(D_0202DBD0 + 0x49A);

    if (*selection < *limit) {
        sub_080379D4(2);
        state[3] = 2;
    } else {
        sub_080379D4(3);
        state[2] = 0x2A;
        state[7] = 0xFF;
    }
    return 0;
}

extern const void *const D_0814ED6C[];
extern const u8 D_0814BDE5[];
void sub_08059978(void);
void sub_0805A9FC(void);
void sub_0805AE70(s32, s32, const u8 *);
void sub_0805B308(const void *);
void sub_0805D5E4(s32, u8 *, s32);

void sub_080655F8(void)
{
    u8 buffer[4];
    u8 mode;

    sub_08059978();
    mode = D_03004620[0xB2];
    if (mode != 0) {
        sub_0805AE70(0x102, 0, D_0814BDE5);
    } else {
        sub_0805B308(D_0814ED6C[0x50]);
        sub_0805A9FC();
        sub_0805D5E4(5, buffer, 3);
        buffer[3] = mode;
        sub_0805AE70(0x102, 0, buffer);
    }
}

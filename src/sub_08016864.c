extern u32 D_080F6D74[];
extern void sub_080A0774(void *, u32);
extern u8 D_030023E0[];

typedef struct {
    u8 pad0[1];
    u8 unk1;
} UnkSubStruct;

void sub_08016898(Entity *arg0) {
    u32 *table = D_080F6D74;
    UnkSubStruct *e = (UnkSubStruct *)arg0->unk68;

    sub_080A0774(arg0, table[e->unk1]);
}

extern void (*D_080F6D3C[])(void);

void sub_08016864(s32 arg0) {
    void (**handlers)(void) = D_080F6D3C;
    u16 value = arg0;

    handlers[(value & 0xFF) >> 1]();
}

extern void (*D_080F6864[])(void);

void sub_080167B8(void) {
    void (**handlers)(void) = D_080F6864;
    u8 *state = D_03004830;

    handlers[(s8)state[0x2A]]();
}

void sub_08016A24(void) {
    u8 *base = D_03004830;
    u8 *ptr = base + 0x2C;

    if (--*ptr == 0) {
        ptr[-1]++;
        if ((u16)(*(u16 *)(D_030023E0 + 0xA4) + 0xFFFFFE4F) <= 1) {
            base[0x40]++;
        }
    }
}

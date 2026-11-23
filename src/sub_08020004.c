extern u8 D_0202DBD0[];
extern u16 D_03004114;

typedef struct {
    u8 pad00[0x204];
    u16 slots[65];
} ItemSlots;

void sub_0801D700(void);
u8 sub_08001770(s32);
void sub_08004EA0(s32);
void sub_080017EC(s32);
u8 sub_0805CF40(u16, u16 *);

void sub_0801FFE4(void) {
    if (!((s8)D_03004830[0x2D] & 0x80)) {
        sub_0801D700();
    }
}

void sub_08020004(void) {
    if (sub_08001770(0xD0) == 0) {
        sub_08004EA0(0x8594);
    }
    D_03004114 = 0;
}

void sub_0801FFA0(void) {
    u16 slot;
    sub_0805CF40(0x168, &slot);
    ((ItemSlots *)D_0202DBD0)->slots[slot] = 0x169;
    sub_080017EC(0xC4);
    D_03004114 = 0;
}

void sub_0801FF64(void) {
    u16 slot;
    sub_0805CF40(0x167, &slot);
    ((ItemSlots *)D_0202DBD0)->slots[slot] = 0x168;
    D_03004114 = 0;
}

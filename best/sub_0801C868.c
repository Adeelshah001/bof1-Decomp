typedef struct {
    u8 pad00[0xB8];
    u8 flags;
} ObjectFlags;

extern ObjectFlags D_03002AB0;
extern u8 D_03004550[];

void sub_08030960(s32);
void sub_080017EC(s32);
void sub_0800312C(s32, s32);

void sub_0801C868(void) {
    u8 *base = D_03004830;
    s8 *phase = (s8 *)(base + 0x2D);
    if (*phase == 3) {
        *phase = 0;
        base[0x2B]++;
    }
}

void sub_0801C924(void) {
    if (!(D_03004550[0x23] & 0x80)) {
        sub_08030960(0x16D);
        sub_080017EC(0xAD);
    }
}

void sub_0801C94C(void) {
    u8 *base;
    sub_0800312C(0x10, 0xA);
    D_03002AB0.flags |= 4;
    base = D_03004830;
    base[0x3F] = 0x21;
    base[0x40] = 0;
}

void sub_0801C998(void) {
    D_03002AB0.flags |= 4;
    D_03004830[0x2D]++;
    sub_080017EC(0x55);
}

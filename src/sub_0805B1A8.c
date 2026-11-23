typedef struct {
    u16 unk0;
    u16 unk2;
    u32 unk4;
    u32 unk8;
} Unk03000AE0;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
} Unk02011280;

extern Unk03000AE0 D_03000AE0;
extern Unk02011280 D_02011280[];

void sub_0805B1A8(void) {
    Unk03000AE0 *p = &D_03000AE0;
    u32 val;
    p->unk2 = 0;
    val = 0xFFFF;
    p->unk0 = val;
}

void sub_0805B15C(void) {
    s32 i;
    D_03000AE0.unk8 = 0;
    for (i = 0; i < 0x40; i++) {
        D_02011280[i].unk4 = 0;
        D_02011280[i].unk2 = 0;
        D_02011280[i].unk0 = 0;
    }
}

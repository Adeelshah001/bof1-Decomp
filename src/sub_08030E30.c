typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x4D - 0x2E];
    u8 unk4D;
    u8 pad4E[0xB8 - 0x4E];
    u32 unkB8;
} Struct_08030;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x4D - 0x2E];
    u8 unk4D;
    u8 pad4E[0xB8 - 0x4E];
    u8 unkB8;
} Struct_08030E30;

typedef void (*Sub08030Func)(Struct_08030 *);
typedef void (*Sub08030E30Func)(Struct_08030E30 *);

extern u8 D_03002AB0[];
extern Struct_08030 *D_0300458C;
extern u16 D_030040E0;
extern u16 D_030023D4;
extern const Sub08030Func D_080FA418[];
extern const Sub08030E30Func D_080FA430[];

u8 sub_08032820(void);
void sub_08054820(s32, u8);
void sub_0802CCEC(void *);
void sub_0803A8EC(void *);

void sub_08030C80(s32 arg0) {
    u8 val = sub_08032820();
    u8 *ab0;

    sub_08054820(arg0, val);
    ab0 = D_03002AB0;
    ab0[0x61] = (val + 2) & 3;
    sub_0802CCEC(ab0);
}

s32 sub_08030D98(Struct_08030 *arg0) {
    u16 *p40E0;
    Struct_08030 *e;

    D_080FA418[arg0->unk4D >> 1](arg0);
    p40E0 = &D_030040E0;
    e = D_0300458C;
    arg0->unk2C = e->unk6;
    *p40E0 = e->unk6;
    D_030023D4 = e->unk2;
    if ((arg0->unkB8 & 0x40008) == 0) {
        sub_0803A8EC(arg0);
    }
    return 0;
}

s32 sub_08030E30(Struct_08030E30 *arg0) {
    D_080FA430[arg0->unk4D >> 1](arg0);
    arg0->unk2C = arg0->unk6;
    D_030040E0 = arg0->unk6;
    D_030023D4 = arg0->unk2;
    if ((arg0->unkB8 & 8) == 0) {
        sub_0803A8EC(arg0);
    }
    return 0;
}

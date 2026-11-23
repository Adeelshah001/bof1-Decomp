extern u8 D_030033F0[];
extern u8 D_03002AB0[];

s32 sub_08033420(void);
void sub_08053B34(void);
void sub_08004154(void);

typedef struct {
    u8 pad00[0x64];
    void (*unk64)(void);
    u8 pad68[0xF4 - 0x68];
    void (*unkF4)(void);
} StructA;

typedef struct {
    u8 pad00[0x64];
    void (*unk64)(void);
    u8 pad68[0x144 - 0x68];
    void (*unk144)(void);
} StructB;

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF0 - 0x3B];
    u8 unkF0;
} Record;

void sub_08022748(void) {
    if (((u32)sub_08033420() << 24) != 0) {
        StructA *a = (StructA *)0x03002510;
        StructB *b = (StructB *)0x03001870;
        a->unk64 = sub_08053B34;
        a->unkF4 = sub_08053B34;
        b->unk64 = sub_08053B34;
        b->unk144 = sub_08053B34;
        D_030033F0[0] = 0xFF;
        D_03002AB0[0xB8] = (u8)((D_03002AB0[0xB8] | 0x80) & 0xBF);
        D_03004830[0x40]++;
    }
}

void sub_08022E2C(void) {
    u8 i;
    Record *rec;

    sub_08004154();
    for (i = 1; i <= 7; i++) {
        rec = (Record *)((u8 *)0x03002AB0 + i * 0x124);
        if (rec->unk3A != 0) continue;
        if (!(rec->unkF0 & 0x40)) {
            rec->unkF0 |= 0x42;
        }
    }
}

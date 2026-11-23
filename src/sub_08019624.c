extern u32 D_080F77F8[];
extern void sub_080A0774(void *, u32);

typedef struct {
    u8 pad0[1];
    u8 unk1;
} UnkSubStruct;

void sub_08019624(Entity *arg0) {
    u32 *table = D_080F77F8;
    UnkSubStruct *e = (UnkSubStruct *)arg0->unk68;
    sub_080A0774(arg0, table[e->unk1]);
}

extern void (*D_080F77A0[])(void);

void sub_08019604(s32 arg0) {
    void (**handlers)(void) = D_080F77A0;
    u16 value = arg0;
    handlers[(value & 0xFF) >> 1]();
}

extern u8 D_030023E0[];
extern u8 D_03001850[];
extern u16 D_03004114;
u8 sub_08005024(s32 arg0, s32 arg1);
void sub_080193D8(void);

void sub_08019670(Entity *arg0) {
    u8 *p = (u8 *)arg0 + 0x41;
    u8 *state = D_030023E0;
    *p = ((u8 *)arg0->unk68)[2];
    arg0->unk68 += 3;
    if (*(u16 *)(state + 0xA4) == 0xFF || *(u16 *)(state + 0xA4) == 0x13C) {
        *p = (*p & 0xCF) | 0x20;
    }
}

void sub_080195A8(void) {
    u8 r;
    u8 *state = D_030023E0;
    if (*(u16 *)(state + 0xA4) == 0x117 && (r = sub_08005024(0x1D48, 0xD98C)) == 0) {
        D_03001850[0]++;
        D_03004114 = r;
    } else {
        sub_080193D8();
    }
}

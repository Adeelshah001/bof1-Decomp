struct Unk73E54 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad03[3];
    u8 unk6;
    u8 pad07[5];
    u8 unkC;
    u8 pad0D[0x50 - 0xD];
    u16 unk50;
    u8 pad52[0x62 - 0x52];
    u8 unk62;
};

struct Unk3002AB0 {
    u8 pad00[0xF1];
    u8 unkF1;
    u8 padF2[0x124 - 0xF2];
};

extern struct Unk3002AB0 D_030032AC;
extern u8 D_0300457C;
extern const u16 D_08151F08[];

void sub_0806B028(struct Unk3002AB0 *, u16);
void sub_08073FF0(void);

void sub_08073E88(struct Unk73E54 *arg0) {
    arg0->unk1 = 0x1E;
    arg0->unk2 = 2;
    arg0->unk62 = (arg0->unk62 & 0xF0) | 2;
}

void sub_08073ED8(struct Unk73E54 *arg0) {
    u16 var;
    struct Unk3002AB0 *ptr;
    const u16 *tab;
    s32 idx;

    D_0300457C = 9;
    arg0->unkC = 8;
    var = 0x5EE;
    ptr = &D_030032AC;
    tab = D_08151F08;
loop:
    sub_0806B028(ptr, var);
    if (--arg0->unkC == 0) {
        sub_08073FF0();
        return;
    }
    ptr--;
    idx = arg0->unkC - 1;
    var = tab[idx];
    goto loop;
}

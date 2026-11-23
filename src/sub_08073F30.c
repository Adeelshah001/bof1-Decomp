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
    u8 unk62_lo : 4;
    u8 unk62_hi : 4;
};

struct Unk3002AB0 {
    u8 pad00[0xF1];
    u8 unkF1;
    u8 padF2[0x124 - 0xF2];
};

extern struct Unk3002AB0 D_03002AB0[];
extern struct Unk3002AB0 D_030032AC;
extern u8 D_0300457C;
extern const u16 D_08151F08[];

void sub_08074B20(struct Unk73E54 *);
void sub_0806B028(struct Unk3002AB0 *, u16);
void sub_08073FF0(void);
void sub_08073FFC(struct Unk73E54 *, struct Unk3002AB0 *);

void sub_08073E54(struct Unk73E54 *arg0) {
    arg0->unk6 = 0;
    arg0->unk50 = 0;
    sub_08074B20(arg0);
}

void sub_08073E88(struct Unk73E54 *arg0) {
    arg0->unk1 = 0x1E;
    arg0->unk2 = 2;
    arg0->unk62_lo = 2;
}

void sub_08073ED8(struct Unk73E54 *arg0) {
    u16 var = 0x5EE;
    struct Unk3002AB0 *ptr = &D_030032AC;

    D_0300457C = 9;
    arg0->unkC = 8;
    for (;;) {
        sub_0806B028(ptr, var);
        if (--arg0->unkC == 0) {
            break;
        }
        ptr--;
        var = D_08151F08[arg0->unkC - 1];
    }
    sub_08073FF0();
}

void sub_08073F30(struct Unk73E54 *arg0) {
    struct Unk3002AB0 *ptr = D_03002AB0;

    arg0->unkC = 0;
    while (ptr->unkF1 & 0x80) {
        arg0->unkC++;
        ptr++;
    }
    sub_08073FFC(arg0, ptr);
}

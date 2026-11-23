typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF0 - 0x3B];
    u8 unkF0;
    u8 unkF1;
    u8 padF2[0xF4 - 0xF2];
    u16 unkF4;
    u16 unkF6;
    u16 unkF8;
    u16 unkFA;
    u8 padFC[0x124 - 0xFC];
} Struct_08039;

void sub_0805DA14(Struct_08039 *);

void sub_0803933C(Struct_08039 *arg0) {
    arg0->unkF6 = arg0->unkF4;
    arg0->unkFA = arg0->unkF8;
    arg0->unkF1 &= 0x0F;
    sub_0805DA14(arg0);
}

void sub_080391BC(Struct_08039 *arg0) {
    arg0->unkF6 = arg0->unkF4;
    arg0->unkFA = arg0->unkF8;
    arg0->unkF1 &= 0x0F;
    sub_0805DA14(arg0);
    sub_08033B18((s32)arg0);
}

extern Struct_08039 D_03002AB0[];
void sub_080393D4(Struct_08039 *);
void sub_08033B98(void);

void sub_08039174(void) {
    u8 i;

    for (i = 0; i <= 7; i++) {
        Struct_08039 *p = &D_03002AB0[i];
        if (p->unk3A != 0 && !(p->unkF0 & 0x40)) {
            sub_080393D4(p);
        }
    }
    sub_08033B98();
}

extern u8 D_02019B00[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];

void sub_08039138(void) {
    u16 i;

    for (i = 0x100; i <= 0x1FF; i++) {
        D_02020FC0[i] = D_02019B00[i];
        D_020211C0[i] = D_02019B00[i];
    }
}

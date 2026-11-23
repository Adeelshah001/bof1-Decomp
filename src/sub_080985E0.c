extern u8 D_03004F50[];
extern u8 D_03004F30[];

typedef struct {
    u8 pad00[0xDC];
    u8 unkDC;
    u8 padDD[0xF1 - 0xDD];
    u8 unkF1;
    u8 padF2[0x102 - 0xF2];
    u8 unk102;
    u8 pad103[0x106 - 0x103];
    u16 unk106;
} Unk985;

u32 sub_08003104(void);
s32 sub_080985E0(void);
void sub_08097170(void *);
void sub_080985F4(void);

s32 sub_080985E0(void) {
    D_03004F50[0x5C] |= 0x80;
    return 1;
}

s32 sub_080985A4(u8 *arg0) {
    u32 r = sub_08003104() & 0xF;
    if (arg0[0x102] < D_03004F30[7]) {
        if (r <= 5) {
            return 0;
        }
    } else {
        if (r <= 3) {
            return 0;
        }
    }
    return sub_080985E0();
}

void sub_0809857C(void *arg0, u8 *arg1, u16 arg2) {
    if (arg1[0xFC] == 7) {
        sub_08097170(arg0);
    } else {
        sub_080985E0();
        sub_080985F4();
    }
}

void sub_08098540(Unk985 *arg0, u16 arg1, u8 arg2) {
    if (!(arg0->unkF1 & 0x40)) {
        if (!(arg0->unkDC & arg2)) {
            arg0->unkDC |= arg2;
            arg0->unk106 += arg1;
        }
    }
}

extern u16 D_03004E0C;
extern u16 D_03004E08;
extern u8 D_030023DC;
extern u8 D_030023E0[];

typedef struct {
    u8 pad00[0x41];
    u8 unk41;
    u8 unk42;
} Unk03004830;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;

typedef struct {
    u8 pad00[0x2];
    u16 unk2;
    u8 pad04[0x2];
    u8 unk6;
} Unk08027240;

void sub_08027934(void);
void sub_080017EC(s32);
void sub_08027A00(Unk08027240 *);

void sub_080275BC(void) {
    u16 val = D_03004E0C - 0x840;
    if (val < 0x2D60) {
        ((Unk03004830 *)D_03004830)->unk42 = 0;
        val = 0x2D60;
    }
    D_03004E0C = val;
}

void sub_080275F4(void) {
    if (D_030023DC == 0) {
        sub_08027934();
        if (--((Unk03004830 *)D_03004830)->unk41 == 0) {
            ((Unk03004830 *)D_03004830)->unk41 = 0x10;
            D_03004E08 = 0x7F01;
            D_03004E0C = 0x68A5;
        }
    }
}

s32 sub_08027644(void) {
    switch (((Unk030023E0 *)D_030023E0)->unkA4) {
    case 0x8:
        sub_080017EC(0x10);
        break;
    case 0xB:
        sub_080017EC(0x11);
        break;
    case 0x8F:
        sub_080017EC(0x12);
        break;
    default:
        sub_080017EC(0x13);
        break;
    }
    return 0x87A9;
}

s32 sub_08027240(Unk08027240 *arg0) {
    if (arg0->unk6 == 0x9C) {
        switch ((u8)arg0->unk2) {
        case 0x48:
        case 0x98:
        case 0x38:
            sub_08027A00(arg0);
            break;
        case 0xA8:
            sub_08027A00(arg0);
            break;
        }
    }
    return 0;
}

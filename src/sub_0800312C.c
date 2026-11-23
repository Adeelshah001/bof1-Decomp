extern u8 D_03000800[];
extern u8 D_03000804;
extern u32 D_03001694;
extern u8 D_030016E0[];
extern u8 D_030023DC;
extern u8 D_030023E0[];
extern void (* const D_080FFD70[])(u8, s32, s32);
extern void (* const D_080FFE78[])(u8, s32, s32);

void sub_08001F80(s32, s32, s32);
s32 sub_080003D8(void (*)(void), void *, s32);
void sub_08057BB0(void);
void sub_08058728(u8, s32);

typedef struct {
    u8 pad00[0x1E];
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u8 pad26[0x44 - 0x26];
    u8 unk44;
    u8 pad45[0x4E - 0x45];
    u8 unk4E;
    u8 unk4F;
} Struct4830;

typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
} Struct23E0;

u8 sub_08003104(void) {
    D_03000804 = (D_03000804 + 1) & 3;
    D_03000800[D_03000804] += 0x13;
    return D_03000800[D_03000804];
}

void sub_0800312C(s32 arg0, u8 arg1) {
    if (D_030023DC == 1) {
        sub_08001F80(0, 0, 0);
        if (D_030023DC == 0xFF && arg1 == 0) {
            return;
        }
    }
    D_030023DC = 0;
    D_03001694 |= 1;
    sub_08058728(arg1, sub_080003D8(sub_08057BB0, D_030016E0, 0xFF));
}

void sub_080030D4(void) {
    Struct4830 *s = (Struct4830 *)D_03004830;
    s32 zero8 = 0;
    s32 zero16 = 0;

    s->unk1E = zero16;
    s->unk20 = zero16;
    s->unk4E = zero8;
    s->unk4F = zero8;
    s->unk22 = zero16;
    s->unk24 = zero16;
    s->unk44 = zero8;
    ((Struct23E0 *)D_030023E0)->unk4C = zero8;
}

void sub_08003188(u8 arg0, s32 arg1, s32 arg2) {
    u32 idx = arg0 & 0x7F;

    if (idx <= 0x63) {
        D_080FFD70[idx - 0x10](arg0, arg1, arg2);
    } else {
        D_080FFE78[idx - 0x64](arg0, arg1, arg2);
    }
}

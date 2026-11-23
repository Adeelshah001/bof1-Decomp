extern u8 D_03000888[];
extern u8 D_03000890[];
extern u8 D_03001694[];
extern u8 D_030023DC[];
extern u8 D_030023E0[];
extern u8 D_03002490[];
extern u8 D_030033F0;
extern u8 D_030045B0[];
extern u8 D_080A64AA[];
extern u8 D_081A7F9C[];
extern u8 D_081A837C[];
extern void (* const D_080FA984[])(u8);
extern void (* const D_080FAA70[])(void *);

u8 sub_08001770(s32);
void sub_08035A50(u16, const void *, const void *);
void sub_080A0A68(void *, const void *, s32);
void sub_080A0AC8(void *, s32, s32);

typedef struct {
    u8 pad00[0x2D];
    s8 unk2D;
} Struct4830;

typedef struct {
    u8 pad00[0x88];
    s32 unk88;
} Struct3505C;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

typedef struct {
    u8 pad00[0x10];
    u8 unk10;
    u8 pad11[0x18 - 0x11];
    u8 unk18;
    u8 pad19[0x1C - 0x19];
} Struct2490;

void sub_0803505C(Struct3505C *arg0) {
    arg0->unk88 += (((Struct4830 *)D_03004830)->unk2D == 0xD) ? 5 : 2;
}

void sub_080358D4(void) {
    u8 sp0[0x14];
    u16 sp14;
    u16 val;
    const void *p1;
    const void *p2;
    u8 i;

    val = ((Struct23E0 *)D_030023E0)->unkA4;
    sub_080A0A68(sp0, D_080A64AA, 0x13);
    sub_080A0AC8(&sp14, 0, 2);
    p1 = D_081A837C;
    p2 = D_081A7F9C;
    if (val == 0xAD && !sub_08001770(0x49)) {
        p1 = sp0;
        p2 = &sp14;
        D_030033F0 |= 1;
        val = 0;
    }
    sub_08035A50(val, p1, p2);
    if (((Struct23E0 *)D_030023E0)->unkA4 == 0) {
        u8 idx = D_030045B0[2];
        D_03000888[0] = 0;
        D_03000890[0] = 0;
        for (i = 1; i <= 3; i++) {
            ((Struct2490 *)D_03002490)[i].unk18 = 0;
        }
        D_080FA984[idx](idx);
    }
    if ((*(s32 *)D_03001694 & 4) && D_030023DC[0] != 2) {
        for (i = 0; i <= 3; i++) {
            Struct2490 *s = &((Struct2490 *)D_03002490)[i];
            if (s->unk18 != 0) {
                D_080FAA70[s->unk10](s);
            }
        }
    }
}

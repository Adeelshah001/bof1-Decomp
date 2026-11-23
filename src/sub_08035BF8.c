extern u8 D_0202DBD0[];
extern u32 D_03001694;
extern u8 D_030023DC[];
extern u8 D_0300088C[];
extern u8 D_03000890;

typedef void (*Func080FAA70)(void *);
extern const Func080FAA70 D_080FAA70[];

typedef struct {
    u8 pad00[0x10];
    u8 unk10;
    u8 pad11[0x18 - 0x11];
    u8 unk18;
    u8 pad19[0x1C - 0x19];
} Struct3002490;

extern Struct3002490 D_03002490[];

void sub_0803549C(s32);
u8 sub_08001770(s32);
void sub_08035740(u8);

void sub_08035D50(s32 arg0) {
    u8 *base = D_03004830;
    if ((s8)base[0x2A] != 0 || (s8)base[0x2B] > 0x13) {
        sub_0803549C(arg0);
    }
}

void sub_08035BF8(s32 arg0) {
    s32 flag = 1;
    if (sub_08001770(0x6B) != 0) {
        flag = 0;
        if ((u8)(D_0202DBD0[0x2B2] - 1) <= 3) {
            flag = 1;
        }
    }
    if (flag != 0) {
        sub_0803549C(arg0);
    }
}

void sub_08035BA0(void) {
    u8 i;
    if ((D_03001694 & 4) && D_030023DC[0] != 2) {
        for (i = 0; i < 4; i++) {
            Struct3002490 *s = &D_03002490[i];
            if (s->unk18 != 0) {
                D_080FAA70[s->unk10](s);
            }
        }
    }
}

void sub_08035F40(void) {
    s8 i;
    for (i = D_03000890 - 1; i >= 0; i--) {
        sub_08035740(D_0300088C[i]);
    }
}

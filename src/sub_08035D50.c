extern u32 D_03001694;
extern u8 D_030023DC[];

typedef void (*Func080FAA70)(void *);
extern Func080FAA70 D_080FAA70[];

typedef struct {
    u8 pad00[0x10];
    u8 unk10;
    u8 pad11[0x18 - 0x11];
    u8 unk18;
    u8 pad19[0x1C - 0x19];
} Struct3002490;

extern Struct3002490 D_03002490[];

void sub_0803549C(s32);

void sub_08035D50(s32 arg0) {
    s8 *base = (s8 *)D_03004830;
    if (base[0x2A] != 0 || base[0x2B] > 0x13) {
        sub_0803549C(arg0);
    }
}

void sub_08035BA0(void) {
    u8 i;
    Struct3002490 *arr;
    Func080FAA70 *funcs;

    if ((D_03001694 & 4) && D_030023DC[0] != 2) {
        arr = D_03002490;
        funcs = D_080FAA70;
        for (i = 0; i < 4; i++) {
            Struct3002490 *s = &arr[i];
            if (s->unk18 != 0) {
                funcs[s->unk10](s);
            }
        }
    }
}

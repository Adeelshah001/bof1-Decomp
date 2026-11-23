extern u8 D_030023DC;
extern u8 D_030023E0[];
extern u8 D_0300248C;
extern u8 D_03003418;
extern u16 D_03004114;

void sub_0802FAA0(void *);
u8 sub_08033420(void);
void sub_080379D4(s32);

typedef struct {
    u8 pad[0x3e];
    u8 unk3e;
    u8 pad1[0x4d - 0x3f];
    u8 state;
    u8 pad2[2];
    u8 substate;
} Obj32118;

s32 sub_0803218C(u8 *arg0) {
    if (--arg0[0x54] == 0) {
        sub_0802FAA0(arg0);
    }
    return 0;
}

s32 sub_080321AC(u8 *arg0) {
    if (sub_08033420() != 0) {
        if (!(arg0[0xB8] & 0x20)) {
            *(u16 *)(arg0 + 0x4C) = 2;
            arg0[0x50] = 0;
            arg0[0x41] = *(u16 *)(arg0 + 0x36);
        } else {
            sub_0802FAA0(arg0);
        }
    }
    return 0;
}

s32 sub_080321F0(u8 *arg0) {
    if (D_030023DC != 1) {
        u8 tmp;
        *(u16 *)(arg0 + 0x54) = 4;
        arg0[0x4D] = 2;
        tmp = D_03003418;
        D_0300248C = tmp;
        D_03003418 = tmp | 0x11;
        sub_080379D4(0x10);
    }
    return 0;
}

void sub_08032118(Obj32118 *p) {
    u8 *q;
    D_03004114 = 0;
    q = D_030023E0;
    if (*(u16 *)(q + 0xA4) == 0 && p->unk3e == 6) {
        p->state = 4;
        p->substate = 0;
        D_03004114 = 1;
    }
}

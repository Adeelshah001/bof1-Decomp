extern u8 D_030023DC;
extern u8 D_0300248C;
extern u8 D_03003418;

void sub_0802FAA0(void *);
u8 sub_08033420(void);
void sub_080379D4(s32);

typedef struct {
    u8 pad00[0x36];
    u16 unk36;
    u8 pad38[0x41 - 0x38];
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    u16 unk4C;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0xB8 - 0x51];
    u8 unkB8;
} Obj321AC;

s32 sub_080321AC(Obj321AC *arg0) {
    if (sub_08033420() != 0) {
        if (arg0->unkB8 & 0x20) {
            sub_0802FAA0(arg0);
        } else {
            arg0->unk4C = 2;
            arg0->unk50 = 0;
            arg0->unk41 = arg0->unk36;
        }
    }
    return 0;
}

s32 sub_080321F0(u8 *arg0) {
    if (D_030023DC != 1) {
        *(u16 *)(arg0 + 0x54) = 4;
        arg0[0x4D] = 2;
        D_0300248C = D_03003418;
        D_03003418 |= 0x11;
        sub_080379D4(0x10);
    }
    return 0;
}

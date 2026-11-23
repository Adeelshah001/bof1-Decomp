extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 sub_0805CF40(s32 arg0, u16 *arg1);
extern void sub_0805C9B8(void *arg0, s32 arg1);

typedef struct {
    u8 pad[0x3F];
    u8 a;
    u8 b;
} S;

void sub_08025768(void) {
    u16 sp0;
    if (sub_0805CF40(0x141, &sp0)) {
        sub_0805C9B8(D_03002AB0, 0x64);
    }
}

void sub_0802585C(void) {
    S *p = (S *)D_03004830;
    u8 *ev;
    p->a = 5;
    p->b = 0;
    ev = D_03002AB0;
    ev[0xB8] |= 4;
}

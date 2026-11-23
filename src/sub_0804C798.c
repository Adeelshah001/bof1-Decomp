typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0x54 - 0x3B];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 unk62;
    u8 unk63;
    u32 unk64;
    u8 pad68[0xA6 - 0x68];
    u16 unkA6;
    u8 padA8[0xAA - 0xA8];
    u16 unkAA;
} ActorC6;

extern const u8 D_0822F5B8[];

void sub_0804D828(ActorC6 *);
void sub_0804D1D0(ActorC6 *, s32, s32);
void sub_0804D430(void);
void sub_0804D784(ActorC6 *, s32, s32);
void sub_0804B9D4(ActorC6 *);
void sub_0804D6B0(void);

void sub_0804C798(ActorC6 *arg0) {
    u8 *p;
    u8 zero;
    sub_0804D1D0(arg0, 0xFFC8, 0x50);
    p = &arg0->unk61;
    zero = 0;
    *p = 1;
    arg0->unk64 = (u32)sub_0804D430;
    arg0->unk54 = zero;
    sub_0804D784(arg0, 2, 0);
    sub_0804D828(arg0);
}

void sub_0804C7D8(ActorC6 *arg0) {
    u8 *p;
    u8 zero;
    sub_0804D1D0(arg0, 0xFFC8, 0xA0);
    p = &arg0->unk61;
    zero = 0;
    *p = 1;
    arg0->unk64 = (u32)sub_0804D430;
    arg0->unk54 = zero;
    sub_0804D784(arg0, 2, 0);
    sub_0804D828(arg0);
}

void sub_0804C85C(ActorC6 *arg0) {
    u8 *p = &arg0->unk61;
    u8 zero = 0;
    s32 var_r2;
    *p = 2;
    sub_0804D1D0(arg0, 0x70, 0xFFF0);
    arg0->unk64 = (u32)sub_0804D430;
    arg0->unk54 = zero;
    var_r2 = 0xFFFE;
    if (*p != 0) {
        var_r2 = 2;
    }
    sub_0804D784(arg0, 0, var_r2);
    sub_0804D828(arg0);
}

void sub_0804C630(ActorC6 *arg0) {
    sub_0804D784(arg0, 0xFFFF, 0);
    arg0->unk61 = 3;
    arg0->unk64 = (u32)sub_0804D6B0;
    arg0->unkA6 = D_0822F5B8[0x0C] | (D_0822F5B8[0x0D] << 8);
    sub_0804B9D4(arg0);
    sub_0804D1D0(arg0, 0x130, 0x70);
    sub_0804D828(arg0);
}

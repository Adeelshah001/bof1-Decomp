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

void sub_0804BF28(void);
void sub_0804D828(ActorC6 *);
void sub_0804D1D0(ActorC6 *, s32, s32);
void sub_0804D430(void);
void sub_0804D784(ActorC6 *, s32, s32);
void sub_0803A508(ActorC6 *);
void sub_0804D5AC(void);

void sub_0804C6D8(ActorC6 *arg0) {
    arg0->unkA6 = D_0822F5B8[0x10] | (D_0822F5B8[0x11] << 8);
    arg0->unk62 = 0xFF;
    arg0->unk64 = (u32)sub_0804BF28;
    arg0->unk3A |= 0x10;
    sub_0804D828(arg0);
}

void sub_0804C718(ActorC6 *arg0) {
    u8 *p;
    u8 zero;
    sub_0804D1D0(arg0, 0xFFC8, 0x40);
    p = &arg0->unk61;
    zero = 0;
    *p = 1;
    arg0->unk64 = (u32)sub_0804D430;
    arg0->unk54 = zero;
    sub_0804D784(arg0, 2, 0);
    sub_0804D828(arg0);
}

void sub_0804C684(ActorC6 *arg0) {
    sub_0804D784(arg0, 0, 0);
    arg0->unk63 = 1;
    arg0->unk61 = 1;
    arg0->unkAA = 0;
    arg0->unk54 = 0;
    arg0->unkA6 = D_0822F5B8[0x0E] | (D_0822F5B8[0x0F] << 8);
    sub_0803A508(arg0);
    arg0->unk64 = (u32)sub_0804D5AC;
    sub_0804D828(arg0);
}

void sub_0804C758(ActorC6 *arg0) {
    u8 *p;
    u8 zero;
    sub_0804D1D0(arg0, 0xFFC8, 0xB0);
    p = &arg0->unk61;
    zero = 0;
    *p = 1;
    arg0->unk64 = (u32)sub_0804D430;
    arg0->unk54 = zero;
    sub_0804D784(arg0, 2, 0);
    sub_0804D828(arg0);
}

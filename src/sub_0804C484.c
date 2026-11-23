extern void sub_0804B928(void);
extern void sub_0804D504(void);
extern void sub_0804D538(void);
extern void sub_0804D430(void);
extern void sub_0804D6B0(void);
extern void sub_0804D1D0(void *, s32, s32);
extern void sub_0804D784(void *, s32, s32);
extern void sub_0804D844(void *, s32);
extern void sub_0804B9D4(void *);
extern u8 D_0822F5B8[];

void sub_0804C41C(void *arg0) {
    Entity *e = arg0;
    e->unk64 = (u32)sub_0804D504 | 1;
    *(u16 *)((u8 *)e + 0xA6) = (u16)(D_0822F5B8[0] | (D_0822F5B8[1] << 8));
    sub_0804B928();
}

void sub_0804C444(void *arg0) {
    Entity *e = arg0;
    e->unk64 = (u32)sub_0804D538 | 1;
    *(u16 *)((u8 *)e + 0xA6) = (u16)(D_0822F5B8[4] | (D_0822F5B8[5] << 8));
    sub_0804B928();
}

void sub_0804C484(void *arg0) {
    Entity *e = arg0;
    u8 *p = (u8 *)e + 0x61;
    u8 zero = 0;
    *p = 2;
    sub_0804D1D0(e, 0xFFF0, 0xFFD0);
    sub_0804D784(e, 0, 1);
    e->unk64 = (u32)sub_0804D430;
    *(u8 *)((u8 *)e + 0x54) = zero;
    sub_0804D844(e, 0x1A0);
}

void sub_0804C510(void *arg0) {
    Entity *e = arg0;
    u16 vAA = 0;
    u8 v54 = 0;
    *(u16 *)((u8 *)e + 0xA6) = (u16)(D_0822F5B8[6] | (D_0822F5B8[7] << 8));
    sub_0804D1D0(e, 0xFFC0, 0x70);
    *(u8 *)((u8 *)e + 0x63) = 1;
    *(u8 *)((u8 *)e + 0x61) = 1;
    *(u16 *)((u8 *)e + 0xAA) = vAA;
    *(u8 *)((u8 *)e + 0x54) = v54;
    sub_0804B9D4(e);
    e->unk64 = (u32)sub_0804D6B0;
    sub_0804D844(e, 0x1A0);
}

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x54 - 0x3A];
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
    u16 unkAC;
    u16 unkAE;
    u8 padB0[0xC9 - 0xB0];
    u8 unkC9;
    u8 unkCA;
} ActorCD;

extern const u8 D_0822F5B8[];
extern u8 D_030044A0[];
extern const s8 D_080A6694[4][2];

void sub_0804D7EC(ActorCD *, s32, s32);
void sub_0804BC8C(ActorCD *, s32);
void sub_0804D1D0(ActorCD *, s32, s32);
void sub_0804B9D4(ActorCD *);
void sub_0804D6B0(void);
void sub_0804D844(ActorCD *, s32);
s32 sub_0804E2A4(void);
void sub_080A0A68(void *, const void *, s32);

void sub_0804CCDC(ActorCD *arg0) {
    u16 val = D_0822F5B8[0x28] | (D_0822F5B8[0x29] << 8);
    arg0->unkA6 = val;
    sub_0804D7EC(arg0, 0x1698, 0xF61C);
    sub_0804BC8C(arg0, 0);
}

void sub_0804C5D0(ActorCD *arg0) {
    arg0->unkA6 = D_0822F5B8[0x0A] | (D_0822F5B8[0x0B] << 8);
    sub_0804D1D0(arg0, 0xFFC0, 0x90);
    arg0->unk63 = 1;
    arg0->unk61 = 1;
    arg0->unkAA = 0;
    arg0->unk54 = 0;
    sub_0804B9D4(arg0);
    arg0->unk64 = (u32)sub_0804D6B0;
    sub_0804D844(arg0, 0x1A0);
}

void sub_0804DB90(ActorCD *arg0) {
    u16 *p = &arg0->unkAC;
    *p = 0x1000;
    arg0->unkC9 = 0x10;
    *(u16 *)(D_030044A0 + (sub_0804E2A4() & 0xFE)) = *p;
    p++;
    *p = 0x1400;
    arg0->unkCA = 0x20;
    *(u16 *)(D_030044A0 + (sub_0804E2A4() & 0xFE)) = *p;
    arg0->unk38 = 0x100;
}

void sub_0804BCE0(ActorCD *arg0) {
    s8 offsets[4][2];
    u16 y;
    sub_080A0A68(offsets, D_080A6694, 8);
    arg0->unk2 = offsets[arg0->unk63][0] + arg0->unk2;
    y = offsets[arg0->unk63][1] + arg0->unk6;
    arg0->unk6 = y;
    arg0->unk2C = y;
    arg0->unkAA--;
}

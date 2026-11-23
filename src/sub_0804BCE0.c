typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x63 - 0x3A];
    u8 unk63;
    u32 unk64;
    u8 pad68[0xAA - 0x68];
    u16 unkAA;
    u16 unkAC;
    u16 unkAE;
    u8 padB0[0xC9 - 0xB0];
    u8 unkC9;
    u8 unkCA;
} ActorCD;

extern u8 D_030044A0[];
extern const s8 D_080A6694[8];

u8 sub_0804E2A4(void);
void sub_080A0A68(void *, const void *, s32);

void sub_0804BCE0(ActorCD *arg0) {
    s8 offsets[8];
    sub_080A0A68(offsets, D_080A6694, 8);
    arg0->unk2 = offsets[arg0->unk63 * 2] + arg0->unk2;
    arg0->unk2C = (arg0->unk6 = offsets[arg0->unk63 * 2 + 1] + arg0->unk6);
    arg0->unkAA--;
}

void sub_0804DB90(ActorCD *arg0) {
    u16 *p = &arg0->unkAC;
    u8 idx;
    *p = 0x1000;
    arg0->unkC9 = 0x10;
    idx = sub_0804E2A4() & ~1;
    *(u16 *)(D_030044A0 + idx) = *p;
    p++;
    *p = 0x1400;
    arg0->unkCA = 0x20;
    idx = sub_0804E2A4() & ~1;
    *(u16 *)(D_030044A0 + idx) = *p;
    arg0->unk38 = 0x100;
}

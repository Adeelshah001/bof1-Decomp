typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x1C - 0x08];
    u16 unk1C;
    u8 pad1E[0x38 - 0x1E];
    u16 unk38;
    u8 pad3A[0x41 - 0x3A];
    u8 unk41;
    u8 pad42[0x58 - 0x42];
    u16 unk58;
    u16 unk5A;
    u8 pad5C[0x61 - 0x5C];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
} Actor48E88;

extern Actor48E88 D_03002AB0;

u16 sub_08037C98(Actor48E88 *, s32);
void sub_08037FC4(Actor48E88 *, s32);
void sub_0803828C(Actor48E88 *, u16 *, u16, u8);
void sub_0803A8EC(Actor48E88 *);
void sub_08049EAC(Actor48E88 *, u16, u16);
void sub_08049EC4(Actor48E88 *);

static inline void set_unk1C_unk41(Actor48E88 *e, u16 a, u8 b) {
    e->unk1C = a;
    e->unk41 = b;
}

void sub_08048E88(Actor48E88 *arg0) {
    sub_0803828C(arg0, &arg0->unk4, arg0->unk38, arg0->unk61);
    if (sub_08037C98(arg0, 1) == 0) {
        arg0->unk64 = (u32)sub_08049EC4;
        set_unk1C_unk41(arg0, 0x1A0, 0xC);
        arg0->unk2 = D_03002AB0.unk2;
        arg0->unk6 = D_03002AB0.unk6;
        sub_08049EAC(arg0, arg0->unk58, arg0->unk5A);
        sub_08037FC4(arg0, 0);
        return;
    }
    sub_0803A8EC(arg0);
}

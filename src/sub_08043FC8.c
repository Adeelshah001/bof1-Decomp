struct Unk0202DBD0 {
    u8 pad00[0x2BA];
    u8 unk2BA;
    u8 unk2BB;
    s8 unk2BC : 8;
    s8 unk2BD : 8;
};
extern struct Unk0202DBD0 D_0202DBD0;

void sub_0804305C(s32);
void sub_08040AD0(u8, void *);

s32 sub_08043FC8(void) {
    sub_0804305C(6);
    D_0202DBD0.unk2BA = 0;
    D_0202DBD0.unk2BB = 0xFF;
    D_0202DBD0.unk2BC = -1;
    D_0202DBD0.unk2BD = -1;
    sub_08040AD0(0, (u8 *)&D_0202DBD0 + 0x24);
    return 0;
}

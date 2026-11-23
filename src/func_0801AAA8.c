typedef struct {
    u8 pad00[0x2A];
    s8 unk2A;
} Unk4830;

void sub_08054B60(void);
void sub_08004EA0(s32);
void sub_0800312C(s32, s32);
void sub_08033AF4(s32);
u8 sub_08001770(s32);
void sub_08030AD8(s32);
void sub_08019B78(s32);

void func_0801AAA8(void) {
    ((Entity *)D_03003420)->unk78 = (u32)sub_08054B60;
    D_03004830[0x2C] = 0xEC;
    D_03004830[0x2B]++;
}

void sub_0801AB58(void) {
    D_03004830[0x2D]++;
    D_03004830[0x2C] = 0;
    sub_08004EA0(0x845A);
    D_03004830[0x2B]++;
}

void sub_0801AC74(void) {
    sub_0800312C(0x10, 0x0A);
    sub_08033AF4(0x0D);
    D_03004830[0x2C] = 0x50;
    D_03004830[0x2B]++;
}

void sub_0801A194(void) {
    if (((Unk4830 *)D_03004830)->unk2A == 0 && sub_08001770(0xB9) != 0 && sub_08001770(0xBA) == 0) {
        sub_08030AD8(0x8C);
        sub_08019B78(0x20);
    }
}

extern u16 D_03001670;
extern u16 D_03001678;
extern u16 D_03001620;
extern u16 D_03001640;
extern u16 D_030016D0;
extern u8 D_0300097A;
extern u16 D_03004E0C;
typedef struct {
    u8 pad00[0x28E];
    u16 unk28E;
    u8 pad290[0x4FE - 0x290];
    u8 unk4FE;
} Unk0202DBD0;
extern Unk0202DBD0 D_0202DBD0;
void sub_0803ADDC(s32, s32);
void sub_0803AF58(s32, s32);
void sub_0803D630(void);

void sub_0803C58C(void) {
    D_03001678 = 0x207;
    D_03001670 = 0;
}

void sub_0803C70C(void) {
    D_03001670 = 0xF8 << 5;
    D_03001620 = 0x4405;
    D_03001640 = 0x4605;
    D_030016D0 = 0x400F;
    D_03001678 = 0x4207;
}

void sub_0803BCF8(void) {
    sub_0803ADDC(0x1EC, 0xFFFF);
    sub_0803ADDC(0x118, 0xFFFF);
    sub_0803ADDC(0xE8, 0xFFFF);
    if ((s8)D_03004830[0x31] == 6) {
        sub_0803ADDC(0xC0, 0xFFFF);
        sub_0803AF58(0x46, 0xFFFF);
    }
}

void sub_0803D0D8(void) {
    u32 timer;
    u16 val;

    timer = D_0300097A;
    timer--;
    D_0300097A = (u8)timer;
    if ((u8)timer == 0) {
        D_0300097A = 0x18;
        D_03004E0C -= 0x20;
        val = D_03004E0C;
        if (val == 0x74) {
            D_0202DBD0.unk4FE++;
        }
        D_0202DBD0.unk28E = D_03004E0C;
        sub_0803D630();
    }
}

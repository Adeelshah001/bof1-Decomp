extern u16 D_03004E0C;
extern u8 D_0300097A;
typedef struct {
    u8 pad00[0x28E];
    u16 unk28E;
    u8 pad290[0x4FE - 0x290];
    u8 unk4FE;
} Unk0202DBD0;
extern Unk0202DBD0 D_0202DBD0;

void sub_0803D630(void);

void sub_0803D360(void) {
    u32 timer = D_0300097A;
    timer--;
    D_0300097A = timer;
    if ((u8)timer == 0) {
        u32 cnt;
        u16 val;
        D_0300097A = 0x3C;
        cnt = D_03004E0C;
        cnt++;
        D_03004E0C = cnt;
        if ((u16)cnt == 0x10B4) {
            D_0202DBD0.unk4FE++;
        }
        val = D_03004E0C;
        D_0202DBD0.unk28E = val;
        sub_0803D630();
    }
}

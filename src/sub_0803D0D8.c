extern u8 D_0300097A;
extern u16 D_03004E0C;
typedef struct {
    u8 pad00[0x28E];
    u16 unk28E;
    u8 pad290[0x4FE - 0x290];
    u8 unk4FE;
} Unk0202DBD0;
extern Unk0202DBD0 D_0202DBD0;
void sub_0803D630(void);

void sub_0803D0D8(void) {
    u32 timer;
    u32 val;

    timer = D_0300097A;
    timer--;
    D_0300097A = (u8)timer;
    if ((u8)timer == 0) {
        D_0300097A = 0x18;
        val = D_03004E0C - 0x20;
        D_03004E0C = val;
        if ((u16)val == 0x74) {
            D_0202DBD0.unk4FE++;
        }
        D_0202DBD0.unk28E = D_03004E0C;
        sub_0803D630();
    }
}

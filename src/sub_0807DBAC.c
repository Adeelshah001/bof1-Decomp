typedef struct {
    u8 pad00[6];
    u16 unk06;
    u8 pad08[2];
    u16 unk0A;
    u8 pad0C[0xA];
    u16 unk16;
    u8 pad18[2];
    u16 unk1A;
    u8 pad1C[0x290 - 0x1C];
    u16 unk290;
    u8 pad292[0x2B9 - 0x292];
    u8 unk2B9;
} EventWork;

extern EventWork D_0202DBD0;
extern u8 D_03004584;
extern u8 D_03004F50[];
void sub_080017EC(u16 id);

void sub_0807DBAC(u8 state)
{
    if (state == 0) {
        D_0202DBD0.unk06 = 0x368;
        D_0202DBD0.unk0A = 0x3EAC;
    } else {
        D_0202DBD0.unk290 = 0xBB;
        D_0202DBD0.unk16 = 0x1C8;
        D_0202DBD0.unk1A = 0xA1FC;
        D_0202DBD0.unk2B9 = 1;
        sub_080017EC(0x7E);
        D_03004584 = 1;
        sub_08002BBC(D_03004F50[0x5B]);
    }
}

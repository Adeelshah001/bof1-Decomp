void sub_08002BBC(u8 arg0);
void sub_080017EC(u16 flag);
typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State03002AB0;
typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;
typedef struct {
    u8 pad00[6];
    u16 unk6;
    u8 pad08[2];
    u16 unkA;
} State0202DBD0;
extern State03002AB0 D_03002AB0;
extern State03004F50 D_03004F50;
extern State0202DBD0 D_0202DBD0;
extern u8 D_03004584;

void sub_0807E674(s32 arg0)
{
    if (arg0 << 0x18 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

void sub_0807E710(s32 arg0)
{
    if (arg0 << 0x18 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_0202DBD0.unk6 = 0xD88;
        D_0202DBD0.unkA = 0xFDCC;
    }
}

void sub_0807E760(s32 arg0)
{
    if (arg0 << 0x18 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        sub_080017EC(0x4B);
    }
}

void sub_0807E7D4(s32 arg0)
{
    if (arg0 << 0x18 != 0) {
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_03004830[0x2B]++;
    }
}

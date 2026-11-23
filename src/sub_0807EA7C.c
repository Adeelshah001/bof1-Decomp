void sub_08002BBC(u8 arg0);
void sub_080017EC(s32 flag);
void sub_08001888(s32 flag);
typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State03002AB0;
typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;
typedef struct {
    u8 pad00[0x16];
    u16 unk16;
    u8 pad18[2];
    u16 unk1A;
    u8 pad1C[0x290 - 0x1C];
    u16 unk290;
    u8 pad292[0x2B9 - 0x292];
    u8 unk2B9;
} State0202DBD0;
extern State03002AB0 D_03002AB0;
extern State03004F50 D_03004F50;
extern State0202DBD0 D_0202DBD0;
extern u8 D_03004584;
extern u8 D_03003418;

void sub_0807EA7C(s32 arg0)
{
    if ((u8)arg0 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08001888(0x101);
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_03003418 |= 0x40;
    }
}

void sub_0807EA48(s32 arg0)
{
    if ((u8)arg0 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

void sub_0807EB34(s32 arg0)
{
    if ((u8)arg0 != 0) {
        State0202DBD0 *state = &D_0202DBD0;
        state->unk290 = 0xBB;
        state->unk16 = 0x1C8;
        state->unk1A = 0xA1FC;
        state->unk2B9 = 1;
        sub_080017EC(0x7E);
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

void sub_0807E96C(s32 arg0)
{
    if ((u8)arg0 != 0) {
        D_03004830[0x2C] = 0;
        D_03004830[0x2D] = 0;
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

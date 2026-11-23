typedef struct {
    u8 pad00[0xDC];
    u8 unkDC;
    u8 padDD[0xF1 - 0xDD];
    u8 unkF1;
    u8 padF2[0xF4 - 0xF2];
    u16 unkF4;
    u16 unkF6;
    u16 unkF8;
    u16 unkFA;
    u8 padFC[0x105 - 0xFC];
    u8 unk105;
    u8 pad106[0x10C - 0x106];
    u8 unk10C;
} Obj98_5;

void sub_08098408(s32 unused, Obj98_5 *arg1, u16 arg2)
{
    u16 val;

    if (!(arg1->unkF1 & 0x80)) {
        val = arg2 + arg1->unkF6;
        if (val >= arg1->unkF4) {
            val = arg1->unkF4;
        }
        arg1->unkF6 = val;
    }
}

void sub_080983E4(Obj98_5 *arg0)
{
    arg0->unkDC &= 0xEF;
    arg0->unk10C = arg0->unk105;
}

void sub_080983B4(s32 unused, Obj98_5 *arg1, u16 arg2)
{
    u16 val = arg2 + arg1->unkFA;

    if (val >= arg1->unkF8) {
        val = arg1->unkF8;
    }
    arg1->unkFA = val;
}

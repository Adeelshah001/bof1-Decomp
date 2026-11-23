typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54 : 8;
    u8 unk55 : 8;
    u8 pad56[0x78 - 0x56];
    s32 unk78;
} Obj95;

typedef struct {
    u8 pad00[0x4A];
    u8 unk4A;
    u8 pad4B[0x5D - 0x4B];
    u8 unk5D;
} Global4F50;

extern Global4F50 D_03004F50;

void sub_08091BB8(Obj95 *);
void sub_08096CBC(Obj95 *);
void sub_08095B7C(Obj95 *);
void sub_08095EFC(Obj95 *);
void sub_08096CD4(Obj95 *);
void sub_08098294(Obj95 *, s32);
void sub_08095B00(Obj95 *, s32);

void sub_08095B64(Obj95 *arg0, u8 arg1)
{
    if (arg1 == 1) {
        sub_08091BB8(arg0);
    } else {
        sub_08096CBC(arg0);
    }
}

void sub_08095B44(Obj95 *arg0)
{
    u8 val = arg0->unk4C;
    if (val == 0) {
        sub_08095B7C(arg0);
    } else {
        sub_08095B64(arg0, val);
    }
}

void sub_08095BEC(Obj95 *arg0)
{
    sub_08098294(arg0, arg0->unk78);
    arg0->unk4C++;
    if (--D_03004F50.unk4A == 0) {
        sub_08096CD4(arg0);
    } else {
        D_03004F50.unk5D = 0;
        sub_08095EFC(arg0);
    }
}

void sub_08095AC0(Obj95 *arg0)
{
    if ((--arg0->unk54) & 0x80) {
        if ((--arg0->unk55) & 0x80) {
            sub_08096CBC(arg0);
        } else {
            sub_08095B00(arg0, 1);
        }
    }
}

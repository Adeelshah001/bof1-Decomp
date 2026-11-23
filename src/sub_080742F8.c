typedef struct {
    u8 pad00[0x02];
    u8 unk02;
    u8 pad03[0x59 - 0x03];
    u8 unk59;
    u8 unk5A;
    u8 pad5B[0x67 - 0x5B];
    u8 unk67;
} Struct03004F50;

typedef struct {
    u8 pad00[0xE0];
    u8 unkE0;
    u8 unkE1;
    u8 unkE2;
} StructArg1;

void sub_0806DF40(StructArg1 *arg0);
void sub_080740B4(void);
void sub_080743EC(Struct03004F50 *arg0, s32 arg1);
s32 sub_08084A38(Struct03004F50 *arg0, StructArg1 *arg1);

void sub_080742F8(Struct03004F50 *arg0, StructArg1 *arg1)
{
    u8 *base = D_03003420;
    u16 idx;
    u32 val;

    if ((u8 *)arg1 >= base && (u8 *)arg1 < base + 0xB68 && sub_08084A38(arg0, arg1) == 0) {
        sub_080743EC(arg0, 0x1E);
        return;
    }
    if (arg1->unkE0 != 0x14) {
        arg0->unk02 = 8;
        sub_080740B4();
        return;
    }
    idx = arg0->unk5A - arg0->unk59;
    val = arg1->unkE2 & 0xF0;
    ((Struct03004F50 *)((u8 *)arg0 + idx))->unk67 = val;
    sub_0806DF40(arg1);
    sub_080743EC(arg0, 0x1C);
}

extern u8 D_03004F30[];

typedef struct {
    u8 pad00[0x38];
    s16 unk38;
    u8 pad3A[0x41 - 0x3A];
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    s8 unk4C;
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
} Obj8D;

void sub_08037FC4(Obj8D *, s32);
void sub_0807C484(Obj8D *);

void sub_0808DA44(Obj8D *arg0, s8 arg1)
{
    arg0->unk4C = arg1;
    arg0->unk4D = 0;
    arg0->unk50 = 0;
    sub_08037FC4(arg0, 0);
}

void sub_0808DA64(Obj8D *arg0)
{
    if (D_03004F30[0x0D] == 0) {
        arg0->unk41 = 8;
        arg0->unk4C = 2;
        arg0->unk4D = 0;
        arg0->unk50 = 0;
        sub_08037FC4(arg0, 0);
    }
}

void sub_0808DAE8(Obj8D *arg0)
{
    sub_0807C484(arg0);
    arg0->unk38 = 0xE0;
    arg0->unk54 = 0;
    arg0->unk4D = 4;
}

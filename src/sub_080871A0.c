extern const u8 D_08152998[][1];

typedef struct Obj87Child {
    u8 pad00[0x02];
    u8 unk02;
    u8 pad03[0x06 - 0x03];
    u8 unk06;
    u8 pad07[0x3A - 0x07];
    u8 unk3A;
    u8 pad3B[0x4C - 0x3B];
    u8 unk4C;
    u8 unk4D;
} Obj87Child;

typedef struct {
    u8 pad00[0x02];
    u8 unk02;
    u8 pad03[0x06 - 0x03];
    u8 unk06;
    u8 pad07[0x4D - 0x07];
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x55 - 0x51];
    u8 unk55;
    u8 pad56[0x6C - 0x56];
    Obj87Child *unk6C;
    u8 pad70[0xE6 - 0x70];
    u8 unkE6;
    u8 padE7[0xF1 - 0xE7];
    u8 unkF1;
} Obj87;

void sub_0808F1E4(Obj87 *);

void sub_080871A0(Obj87 *arg0)
{
    u8 val;
    sub_0808F1E4(arg0);
    val = arg0->unkF1;
    if (val & 0x80) {
        Obj87Child *child = arg0->unk6C;
        child->unk3A = 0;
        child->unk4C = 0;
        child->unk4D = 0;
    }
}

void sub_08087144(Obj87 *arg0)
{
    Obj87Child *child;
    u8 val;
    u8 tmp;

    val = arg0->unk55 + 2;
    if (val > 7) {
        val = 0;
    }
    arg0->unk55 = val;
    child = arg0->unk6C;
    tmp = D_08152998[arg0->unk55][0];
    arg0->unk02 = tmp;
    child->unk02 = tmp;
    tmp = D_08152998[arg0->unk55 + 1][0];
    arg0->unk06 = tmp;
    arg0->unkE6 = tmp;
    child->unk06 = tmp;
}

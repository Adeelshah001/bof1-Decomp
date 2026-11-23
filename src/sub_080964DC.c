typedef struct {
    u8 pad00[0x10];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u8 pad18[0x4C - 0x18];
    u8 unk4C;
} Unk964;

extern u8 D_03004F50[];
extern u32 D_03004F40;
extern u16 D_03001864;
extern u16 D_03001780;
extern u8 D_0300178C;
extern u8 D_03003410;

s32 sub_08082C40(void);
void sub_08096460(Unk964 *);
void sub_0809644C(Unk964 *);
s32 sub_08082FFC(Unk964 *);
void sub_080379D4(u32);
void sub_08073470(void);
void sub_08073964(void);

void sub_0809644C(Unk964 *arg0) {
    arg0->unk4C = 4;
    sub_08096460(arg0);
}

void sub_08096410(Unk964 *arg0) {
    u16 val;
    if (sub_08082C40() == 0) {
        val = 0xFC00;
        if (D_03004F50[0x58] == 0) {
            val = 0x400;
        }
        arg0->unk14 = 0;
        arg0->unk16 = val >> 8;
        arg0->unk10 = 0;
        arg0->unk12 = val >> 8;
        sub_0809644C(arg0);
    }
}

void sub_080964DC(Unk964 *arg0) {
    D_03004F40 = 0;
    if (sub_08082FFC(arg0) != 0) {
        sub_080379D4(0xF1);
        arg0->unk4C = 2;
        D_03001864 = 0x17;
        D_03001780 = 0;
        D_0300178C = 0;
        D_03003410 = 0;
        sub_08073470();
        sub_08073964();
    }
}

void sub_080963B8(Unk964 *arg0) {
    s32 ret = sub_08082C40();
    if (ret == 0) {
        arg0->unk14 = ret;
        arg0->unk16 = 8;
        arg0->unk10 = ret;
        arg0->unk12 = 8;
        sub_0809644C(arg0);
    }
}

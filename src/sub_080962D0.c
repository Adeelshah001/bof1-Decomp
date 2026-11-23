typedef struct {
    u8 pad00[0x10];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u8 pad18[0x38 - 0x18];
    u16 unk38;
    u8 pad3A;
    u8 unk3B;
    u8 pad3C[0x44 - 0x3C];
    u32 unk44;
    u8 pad48[0x4C - 0x48];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
} Unk964;

extern const u8 D_082D2708[][1];
s32 sub_08082C40(void);
void sub_0809644C(Unk964 *);
void sub_08093640();
void sub_080379D4(u8);
u16 sub_08037974(u8, s32);
void sub_08082B68(Unk964 *);
void sub_08096D24(Unk964 *, s32, s32);

void sub_08096320(Unk964 *arg0) {
    s32 ret = sub_08082C40();
    if (ret == 0) {
        arg0->unk14 = ret;
        arg0->unk16 = 4;
        arg0->unk10 = ret;
        arg0->unk12 = 4;
        sub_0809644C(arg0);
    }
}

void sub_08096344(Unk964 *arg0) {
    s32 ret = sub_08082C40();
    if (ret == 0) {
        arg0->unk14 = ret;
        arg0->unk16 = 4;
        arg0->unk10 = ret;
        arg0->unk12 = ret;
        sub_0809644C(arg0);
    }
}

void sub_080962D0(Unk964 *arg0) {
    u16 off;
    sub_08093640();
    arg0->unk4C++;
    sub_080379D4(0x31);
    off = sub_08037974(arg0->unk3B, 0x11);
    arg0->unk44 = (D_082D2708[off + 0x18][0] | (D_082D2708[off + 0x19][0] << 8)) << 8;
    sub_08082B68(arg0);
}

void sub_08096290(Unk964 *arg0, u8 arg1) {
    sub_080379D4(arg1);
    arg0->unk38 = 0x160;
    arg0->unk4C = 2;
    sub_08096D24(arg0, 8, 0x10);
    arg0->unk10 = (arg0->unk61 & 0xF0) << 8;
    arg0->unk54 = 0;
}

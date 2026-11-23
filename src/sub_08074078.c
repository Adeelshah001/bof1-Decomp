struct Unk73E54 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 pad03[0x59 - 0x03];
    u8 unk59;
    u8 unk5A;
    u8 pad5B[0x5D - 0x5B];
    u8 unk5D;
    u8 pad5E[0x62 - 0x5E];
    u8 unk62;
    u8 unk63;
    u8 pad64[0x67 - 0x64];
    u8 unk67;
    u8 unk68[0x20];
};

extern u8 D_03004ED1[];
extern u8 D_03004F30[];

void sub_08081DFC(struct Unk73E54 *);
void sub_08084AB8(struct Unk73E54 *);
void sub_0806DD70(struct Unk73E54 *, u8);
void sub_0806DCC0(struct Unk73E54 *);

s32 sub_08074054(struct Unk73E54 *arg0, u16 arg1) {
    s32 offset = arg0->unk63 * 4;
    u8 *ptr = arg0->unk68;
    ptr[offset] = arg1;
    ptr[offset + 1] = arg1 >> 8;
    return offset;
}

void sub_08074078(struct Unk73E54 *arg0) {
    arg0->unk2 = 6;
    if (arg0->unk62 & 0xF) {
        sub_08084AB8(arg0);
    }
    sub_08081DFC(arg0);
    arg0->unk5A = arg0->unk59;
    arg0->unk5D = 0;
}

void sub_080740C0(struct Unk73E54 *arg0) {
    sub_0806DD70(arg0, D_03004ED1[D_03004ED1[0]--]);
}

void sub_080740DC(struct Unk73E54 *arg0) {
    u16 diff = arg0->unk5A - arg0->unk59;
    D_03004F30[0xC] &= ~3;
    if ((((u8 *)arg0)[diff + 0x67] & 0x80) == 0) {
        sub_0806DD70(arg0, 0);
        return;
    }
    sub_0806DCC0(arg0);
}

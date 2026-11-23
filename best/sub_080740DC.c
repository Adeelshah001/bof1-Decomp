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
    u8 unk67[0x20];
};

struct Unk3004F30 {
    u8 pad00[0xC];
    u8 unkC_0 : 2;
    u8 unkC_2 : 6;
};

extern u8 D_03004F30[];

void sub_0806DD70(struct Unk73E54 *, u8);
void sub_0806DCC0(struct Unk73E54 *);

void sub_080740DC(struct Unk73E54 *arg0) {
    u16 diff = arg0->unk5A - arg0->unk59;
    u8 val;
    ((struct Unk3004F30 *)D_03004F30)->unkC_0 = 0;
    val = arg0->unk67[diff];
    if (!(val & 0x80)) {
        sub_0806DD70(arg0, val);
        return;
    }
    sub_0806DCC0(arg0);
}

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

struct Unk3004F30 {
    u8 pad00[0xC];
    u8 unkC_0 : 2;
    u8 unkC_2 : 6;
};

extern u8 D_03004ED1[];
extern u8 D_03004F30[];

void sub_0806DD70(struct Unk73E54 *, u8);
void sub_0806DCC0(struct Unk73E54 *);

s32 sub_08074054(struct Unk73E54 *arg0, u16 arg1) {
    u32 offset = arg0->unk63 * 4;
    arg0->unk68[offset] = arg1;
    arg0->unk68[offset + 1] = arg1 >> 8;
    return offset;
}

void sub_080740C0(struct Unk73E54 *arg0) {
    u8 *p = D_03004ED1;
    s32 idx = *p;
    *p = idx - 1;
    sub_0806DD70(arg0, p[idx]);
}

void sub_080740DC(struct Unk73E54 *arg0) {
    u32 a = arg0->unk5A;
    u16 diff = a - arg0->unk59;
    u8 val;
    ((struct Unk3004F30 *)D_03004F30)->unkC_0 = 0;
    val = ((u8 *)arg0)[diff + 0x67];
    if (!(val & 0x80)) {
        sub_0806DD70(arg0, val);
        return;
    }
    sub_0806DCC0(arg0);
}

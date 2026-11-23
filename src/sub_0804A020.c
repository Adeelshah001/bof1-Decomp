extern u8 D_03003F98[];
extern u8 D_02022840[];
void sub_0803A8EC(void *);
void sub_080490F4(void *);
void sub_080A0774(void *);
s32 sub_08001770(s32);
void sub_0803828C(void *, void *, u16, u8);

void sub_08049FAC(void *arg0) {
    u8 flag = D_03003F98[0];
    u8 val = ((u8 *)arg0)[0x80];
    if ((val & flag) != 0) {
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_080490F4 | 1;
        if (((u8 *)arg0)[0x61] != 0) {
            sub_080A0774(arg0);
        }
    } else {
        sub_0803A8EC(arg0);
    }
}

void sub_0804A020(void *arg0) {
    void *r5 = arg0;
    if ((sub_08001770(0xDD) << 0x18) != 0) {
        *(u32 *)((u8 *)arg0 + 0x64) = *(u32 *)((u8 *)arg0 + 0xDC);
    }
    sub_0803A8EC(r5);
}

void sub_0804A048(void *arg0) {
    u8 temp;
    sub_0803828C(arg0, (void *)((u8 *)arg0 + 4), *(u16 *)((u8 *)arg0 + 0x38), ((u8 *)arg0)[0x61]);
    temp = ((u8 *)arg0)[0x54] - 1;
    ((u8 *)arg0)[0x54] = temp;
    if ((temp << 0x18) == 0) {
        ((u8 *)arg0)[0x54] = 0x3F;
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_0804A020 | 1;
    }
    if ((sub_08001770(0xDD) << 0x18) != 0) {
        *(u32 *)((u8 *)arg0 + 0x64) = *(u32 *)((u8 *)arg0 + 0xDC);
    }
    sub_0803A8EC(arg0);
}

void sub_0804A098(void *arg0) {
    u8 var;
    u16 val;
    var = ((u8 *)arg0)[0x54] + 1;
    if (var == 0x60) {
        var = 0x40;
    }
    ((u8 *)arg0)[0x54] = var;
    val = (u16)(D_02022840[var + 0x500] | (D_02022840[var + 0xA00] << 8)) + 0xF910;
    *(u16 *)((u8 *)arg0 + 0x06) = val;
    sub_0803A8EC(arg0);
}

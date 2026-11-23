typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x38 - 0x04];
    u16 unk38;
    u8 pad3A[0x46 - 0x3A];
    u16 unk46;
    u8 pad48[0x4A - 0x48];
    u16 unk4A;
    u8 pad4C[0x54 - 0x4C];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x61 - 0x56];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
    u8 pad6D[0x7E - 0x6D];
    u16 unk7E;
} Entity45;

extern void (*const D_080FC67C[])(Entity45 *);
extern u8 D_03003F98;

s32 sub_0803A8EC(Entity45 *);
u8 sub_0803A508(Entity45 *);
void sub_080451F8(Entity45 *);
void sub_0804515C(Entity45 *);
void sub_08045FB4(Entity45 *);
void sub_08046004(Entity45 *);

void sub_08045C30(Entity45 *arg0) {
    Entity45 *e = arg0;
    if (!(arg0->unk6C & 0x80)) {
        D_080FC67C[arg0->unk6C](arg0);
    }
    sub_0803A8EC(e);
}

void sub_08045C64(Entity45 *arg0) {
    u8 ret = sub_0803A508(arg0);
    if (ret == 0 && (D_03003F98 & 0x80)) {
        D_03003F98 = ret;
        arg0->unk38 = 0x20;
        arg0->unk64 = (u32)sub_080451F8;
        arg0->unk55 = 0x18;
        arg0->unk54 = 4;
        arg0->unk61 = 8;
    }
    sub_0804515C(arg0);
    sub_0803A8EC(arg0);
}

void sub_08045BF4(Entity45 *arg0) {
    u16 *p = &arg0->unk7E;
    u8 val;
    *p = arg0->unk2 - 0x10;
    arg0->unk64 = (u32)sub_08045FB4;
    val = arg0->unk6C;
    if (val == 0 || val == 2) {
        arg0->unk4A = *p + 4;
    } else {
        arg0->unk46 = *p;
    }
}

void sub_08045BB8(Entity45 *arg0) {
    u16 *p = &arg0->unk7E;
    u8 val;
    *p = arg0->unk2 + 0x10;
    arg0->unk64 = (u32)sub_08046004;
    val = arg0->unk6C;
    if (val == 0 || val == 2) {
        arg0->unk4A = *p + 4;
    } else {
        arg0->unk46 = *p;
    }
}

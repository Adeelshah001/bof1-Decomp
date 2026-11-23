typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x46 - 0x04];
    u16 unk46;
    u8 pad48[0x4A - 0x48];
    u16 unk4A;
    u8 pad4C[0x64 - 0x4C];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
    u8 pad6D[0x7E - 0x6D];
    u16 unk7E;
} Entity45;

void sub_08045FB4(Entity45 *);
void sub_08046004(Entity45 *);

void sub_08045BF4(Entity45 *arg0) {
    u8 val;
    arg0->unk7E = arg0->unk2 - 0x10;
    arg0->unk64 = (u32)sub_08045FB4;
    val = arg0->unk6C;
    if (val == 0 || val == 2) {
        arg0->unk4A = *(vu16 *)&arg0->unk7E + 4;
    } else {
        arg0->unk46 = *(vu16 *)&arg0->unk7E;
    }
}

void sub_08045BB8(Entity45 *arg0) {
    u8 val;
    arg0->unk7E = arg0->unk2 + 0x10;
    arg0->unk64 = (u32)sub_08046004;
    val = arg0->unk6C;
    if (val == 0 || val == 2) {
        arg0->unk4A = *(vu16 *)&arg0->unk7E + 4;
    } else {
        arg0->unk46 = *(vu16 *)&arg0->unk7E;
    }
}

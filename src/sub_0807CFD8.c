typedef struct {
    u8 pad00[0x06];
    u8 unk6;
    u8 pad07[0x16 - 0x07];
    u8 unk16;
    u8 pad17[0x4C - 0x17];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54 : 8;
    u8 pad55[0xD9 - 0x55];
    u8 unkD9;
    u8 padDA[0xE6 - 0xDA];
    u8 unkE6;
} Entity7CF;

extern u8 D_03004F30[];
extern u8 D_03004F50[];

void sub_0807D040(Entity7CF *);
void sub_080380E8(Entity7CF *);

void sub_0807CFD8(Entity7CF *arg0) {
    u8 *p = &arg0->unk4C;
    u32 zero = 0;
    *p = 2;
    arg0->unk4D = zero;
    arg0->unkD9 = zero;
    D_03004F30[0xD] = zero;
}

void sub_0807CFF8(Entity7CF *arg0) {
    u8 *counter = D_03004F50 + 0x5F;
    u8 val = *counter + 1;
    u32 zero = 0;
    *counter = val;
    arg0->unk4C = 2;
    arg0->unk4D = zero;
}

void sub_0807D018(Entity7CF *arg0) {
    if ((--arg0->unk54) & 0x80) {
        arg0->unk4D++;
        arg0->unk16 = 4;
    }
}

void sub_0807CF80(Entity7CF *arg0) {
    u8 state = arg0->unk4D;
    if (state == 0) {
        sub_0807D040(arg0);
    } else if (state == 1) {
        sub_0807D018(arg0);
    } else {
        sub_080380E8(arg0);
        if (arg0->unkE6 < arg0->unk6) {
            u8 *counter;
            u8 val;
            u32 zero;
            arg0->unk6 = *(u16 *)&arg0->unkE6;
            counter = D_03004F50 + 0x5F;
            val = *counter + 1;
            zero = 0;
            *counter = val;
            arg0->unk4C = 2;
            arg0->unk4D = zero;
        }
    }
}

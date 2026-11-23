typedef struct {
    u8 pad00[0x06];
    u8 unk6;
    u8 pad07[0x4C - 0x07];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0xE6 - 0x4E];
    u8 unkE6;
} Entity7CF;

extern u8 D_03004F50[];

void sub_0807D040(Entity7CF *);
void sub_0807D018(Entity7CF *);
void sub_080380E8(Entity7CF *);

void sub_0807CFF8(Entity7CF *arg0) {
    u8 *state = D_03004F50;
    u8 *counter = state + 0x5F;
    u8 val = *counter + 1;
    u32 zero = 0;
    *counter = val;
    arg0->unk4C = 2;
    arg0->unk4D = zero;
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
            u8 *p = D_03004F50;
            u32 zero;
            arg0->unk6 = *(u16 *)&arg0->unkE6;
            p[0x5F]++;
            zero = 0;
            arg0->unk4C = 2;
            arg0->unk4D = zero;
        }
    }
}

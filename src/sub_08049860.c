typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x54 - 0x3A];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x64 - 0x62];
    void (*unk64)(void *);
    u8 pad68[0x80 - 0x68];
    u8 unk80;
} Entity497;

void sub_08049C40(Entity497 *, s32, s32);
void sub_08048E20(void *);

void sub_08049860(Entity497 *arg0) {
    arg0->unk2C = arg0->unk6 - 0xF0;
    arg0->unk54 = 0x10;
    arg0->unk61 = 0x10;
    arg0->unk38 = 0;
    arg0->unk80 = 0;
    arg0->unk64 = sub_08048E20;
    sub_08049C40(arg0, 0x80, 0xA);
}

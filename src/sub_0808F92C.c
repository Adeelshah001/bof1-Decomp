typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x54 - 0x2E];
    u8 unk54;
    u8 pad55[0xE4 - 0x55];
    u16 unkE4;
    u16 unkE6;
} Unk8F92C;

void sub_08038278(void *);
void sub_0807C600(void *, s32);
void sub_0807B248(void *);

void sub_0808F92C(Unk8F92C *arg0) {
    sub_08038278(arg0);
    if (--arg0->unk54 == 0) {
        u16 y;
        arg0->unk2 = arg0->unkE4;
        y = arg0->unkE6;
        arg0->unk6 = y;
        arg0->unk2C = y;
        sub_0807C600(arg0, 0);
    }
    sub_0807B248(arg0);
}

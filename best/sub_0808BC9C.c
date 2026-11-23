typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
    u8 pad8[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0xE4 - 0x2E];
    u16 unkE4;
    u16 unkE6;
} SBC9C;

void sub_0808EAC0(void *e);

void sub_0808BC9C(SBC9C *e)
{
    u16 *p;

    e->unk6 = 0x2F55;
    e->unk2C = 0x2F55;
    p = &e->unkE6;
    *p = 0x2F55;
    e->unk2 = 0x0F45;
    p--;
    *p = 0x0F45;
    sub_0808EAC0(e);
}

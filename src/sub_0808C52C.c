typedef struct Entity8C {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x70 - 0x3A];
    u8 unk70;
    u8 pad71[0xE4 - 0x71];
    u16 unkE4;
    u16 unkE6;
} Entity8C;

void sub_08037FC4(Entity8C *arg0, s32 arg1);
void sub_08038278(Entity8C *arg0);
void sub_0807C600(Entity8C *arg0, s32 arg1);

void sub_0808C52C(Entity8C *arg0) {
    u16 unk2;
    arg0->unk38 = 0xA0;
    sub_08038278(arg0);
    unk2 = arg0->unk2;
    if (unk2 < arg0->unkE4) {
        u16 v;
        arg0->unk2 = *(vu16 *)&arg0->unkE4;
        v = arg0->unkE6;
        arg0->unk6 = v;
        arg0->unk2C = v;
        sub_08037FC4(arg0, 2);
        arg0->unk70 = 0xFF;
        sub_0807C600(arg0, 2);
    }
}

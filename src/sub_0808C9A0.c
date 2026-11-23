typedef struct {
    u8 pad00[0x40];
    u16 unk40;
    u8 pad42[0x54 - 0x42];
    s32 unk54;
    u8 pad58[0x5D - 0x58];
    u8 unk5D;
    u8 pad5E[0x5F - 0x5E];
    u8 unk5F;
} Battle4F50;

extern Battle4F50 D_03004F50;

typedef struct Entity8C {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x38 - 0x2E];
    u16 unk38;
    u8 pad3A[0x41 - 0x3A];
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x70 - 0x55];
    u8 unk70;
    u8 pad71[0x74 - 0x71];
    u8 *unk74;
    s32 unk78;
    u8 pad7C[0xE4 - 0x7C];
    vu16 unkE4;
    u16 unkE6;
    u8 padE8[0xF4 - 0xE8];
    u16 unkF4;
    u16 unkF6;
} Entity8C;

void sub_08037FC4(Entity8C *arg0, s32 arg1);
void sub_08038278(Entity8C *arg0);
void sub_0807C600(Entity8C *arg0, s32 arg1);
u8 sub_0807CAB8(Entity8C *arg0, s32 *out);
void sub_0808EE54(Entity8C *arg0);

void sub_0808C52C(Entity8C *arg0) {
    arg0->unk38 = 0xA0;
    sub_08038278(arg0);
    if (arg0->unk2 < arg0->unkE4) {
        u16 v;
        arg0->unk2 = arg0->unkE4;
        v = arg0->unkE6;
        arg0->unk6 = v;
        arg0->unk2C = v;
        sub_08037FC4(arg0, 2);
        arg0->unk70 = 0xFF;
        sub_0807C600(arg0, 2);
    }
}

void sub_0808C9A0(Entity8C *arg0) {
    s32 sp0;
    u8 ret;
    do {
        ret = sub_0807CAB8(arg0, &sp0);
        if (ret == 0) {
            return;
        }
        arg0->unk78 = sp0;
        D_03004F50.unk54 = sp0;
        if (ret == 1) {
            ret = 0xA;
            arg0->unk4D = ret;
            return;
        }
    } while (ret == 2);
    sub_0807C600(arg0, 2);
    sub_08037FC4(arg0, 0);
}

void sub_0808C9F0(Entity8C *arg0) {
    if (arg0->unk4D != 0) {
        sub_0808EE54(arg0);
    } else {
        u16 diff = arg0->unkF6;
        diff -= D_03004F50.unk40;
        if (!(diff & 0x8000) && ((u32)(diff << 18) >> 16) >= arg0->unkF4) {
            sub_0808EE54(arg0);
        } else {
            D_03004F50.unk5F = 0;
            sub_0808EE54(arg0);
        }
    }
}

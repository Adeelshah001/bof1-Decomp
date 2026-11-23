typedef struct EntitySub {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[2];
    u16 unk6;
    u8 pad8[0x2C - 8];
    u16 unk2C;
    u8 pad2E[0x46 - 0x2E];
    u16 unk46;
    u8 pad48[0x4A - 0x48];
    u16 unk4A;
    u8 pad4C[0x68 - 0x4C];
    u8 *unk68;
    u8 pad6C[0x6F - 0x6C];
    u8 unk6F;
    u8 pad70[0x78 - 0x70];
    void (*unk78)(struct EntitySub *);
    void (*unk7C)(struct EntitySub *);
} EntitySub;

void sub_08037FC4(EntitySub *, s32);
void sub_080551E4(EntitySub *);
void sub_08054808(EntitySub *);
void sub_080547FC(EntitySub *);
void sub_0803A8EC(EntitySub *);

void sub_08055310(EntitySub *arg0) {
    u8 *p;
    arg0->unk7C(arg0);
    p = arg0->unk68;
    if (*p == 0x51) {
        u8 val = p[1];
        arg0->unk68 = p + 2;
        sub_08037FC4(arg0, val * 2);
        sub_080551E4(arg0);
        arg0->unk7C = sub_080551E4;
    } else if (*p == 0xFF) {
        sub_08054808(arg0);
    } else if (*p == 0xEF) {
        sub_080547FC(arg0);
    }
    sub_0803A8EC(arg0);
}

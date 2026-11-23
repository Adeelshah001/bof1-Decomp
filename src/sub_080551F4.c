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
    u8 pad4C[0x6F - 0x4C];
    u8 unk6F;
    u8 pad70[0x78 - 0x70];
    void (*unk78)(void);
    void (*unk7C)(void);
} EntitySub;

void sub_080552BC(void);
void sub_08055310(void);
u8 sub_080550D4(EntitySub *arg0);
void sub_08054F2C(EntitySub *arg0, u8 *arg1);
void sub_0805512C(EntitySub *arg0);
void sub_08054FF8(void);

void sub_080551F4(EntitySub *arg0) {
    arg0->unk7C = sub_080552BC;
    arg0->unk78 = sub_08055310;
}

void sub_080551E4(EntitySub *arg0) {
    arg0->unk46 = arg0->unk2;
    arg0->unk4A = arg0->unk6;
}

void sub_08055198(EntitySub *arg0, u8 *arg1) {
    *arg1 |= 1;
    arg0->unk6F = arg0->unk46 >> 8;
    if (!sub_080550D4(arg0)) {
        sub_08054F2C(arg0, arg1);
        return;
    }
    if ((u8)arg0->unk46 != 0) {
        arg0->unk46--;
    }
    sub_0805512C(arg0);
}

void sub_08055280(EntitySub *arg0) {
    if (sub_080550D4(arg0)) {
        arg0->unk7C = sub_08054FF8;
    }
    arg0->unk2C = arg0->unk6;
}

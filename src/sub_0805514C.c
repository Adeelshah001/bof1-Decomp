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

struct Unk03002AB0 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
};
extern struct Unk03002AB0 D_03002AB0;

void sub_08055364(void *, u16, u16);
u8 sub_080550D4(EntitySub *);
void sub_08054FF8(EntitySub *);
void sub_08037FC4(EntitySub *, s32);
void sub_080551E4(EntitySub *);
void sub_08054808(EntitySub *);
void sub_080547FC(EntitySub *);
void sub_0803A8EC(EntitySub *);
void sub_08054F2C(EntitySub *, u8 *);
void sub_0805512C(EntitySub *);

void sub_080552BC(void *arg0) {
    sub_08055364(arg0, D_03002AB0.unk2, D_03002AB0.unk6);
}

void sub_08055280(EntitySub *arg0) {
    Entity *e = (Entity *)arg0;
    if (sub_080550D4(arg0)) {
        arg0->unk7C = sub_08054FF8;
    }
    e->unk2C = e->unk6;
}

void sub_08055310(EntitySub *arg0) {
    u8 *p;
    arg0->unk7C(arg0);
    p = arg0->unk68;
    if (*p == 0x51) {
        s32 val = p[1] * 2;
        arg0->unk68 = p + 2;
        sub_08037FC4(arg0, val);
        sub_080551E4(arg0);
        arg0->unk7C = sub_080551E4;
    } else if (*p == 0xFF) {
        sub_08054808(arg0);
    } else if (*p == 0xEF) {
        sub_080547FC(arg0);
    }
    sub_0803A8EC(arg0);
}

void sub_0805514C(EntitySub *arg0, u8 *arg1) {
    *arg1 |= 2;
    arg0->unk6F = arg0->unk4A >> 8;
    if (!sub_080550D4(arg0)) {
        sub_08054F2C(arg0, arg1);
        return;
    }
    if ((u8)arg0->unk4A != 0) {
        arg0->unk4A--;
    }
    sub_0805512C(arg0);
}

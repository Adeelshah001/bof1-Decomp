typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0x46 - 0x3C];
    u16 unk46;
    u8 pad48[0x5C - 0x48];
    u8 unk5C;
    u8 pad5D[0x64 - 0x5D];
    void (*unk64)(void *);
} Entity557;

extern const u16 D_080FEC3C[];

void sub_08037FC4(Entity557 *, s32);
void sub_080A0784(Entity557 *);
void sub_080379D4(s32);
void sub_0803A8EC(Entity557 *);
u8 sub_08055660(u8);
void sub_080A0774(Entity557 *);
void sub_0803800C(Entity557 *, s32, u16);
void sub_0803EE6C(Entity557 *);

void sub_08055B84(void *);
void sub_08055B60(void *);
void sub_08055B54(void *);
void sub_080462E0(void *);
void sub_080557E4(void *);

void sub_08055738(Entity557 *arg0) {
    void (*fn)(void *) = sub_08055B84;
    arg0->unk64 = fn;
    sub_08037FC4(arg0, 2);
    fn(arg0);
}

void sub_08055758(Entity557 *arg0) {
    if (sub_08055660(arg0->unk5C) != 0) {
        void (*fn)(void *);
        sub_08037FC4(arg0, 0xC);
        sub_080379D4(0xE);
        fn = sub_08055B60;
        arg0->unk64 = fn;
        fn(arg0);
    } else {
        sub_0803A8EC(arg0);
    }
}

void sub_080556F4(Entity557 *arg0) {
    u8 idx = arg0->unk3B;
    u16 val = D_080FEC3C[idx - 8];
    if (idx == 0xE) {
        sub_0803EE6C(arg0);
    } else {
        sub_0803800C(arg0, idx * 2, val);
        arg0->unk46--;
        arg0->unk64 = sub_08055B54;
    }
}

void sub_080557A0(Entity557 *arg0) {
    sub_08037FC4(arg0, 0xE);
    if ((s8)D_03004830[0x31] != 6) {
        arg0->unk3B -= 4;
        arg0->unk64 = sub_080462E0;
    } else {
        arg0->unk64 = sub_080557E4;
    }
    sub_0803A8EC(arg0);
}

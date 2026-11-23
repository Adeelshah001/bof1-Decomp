void sub_08086B30(u8 *);
void sub_08086B44(u8 *);
void sub_08086B18(u8 *);

void sub_08086AEC(u8 *arg0) {
    u8 state = arg0[0xE0];
    if (state == 8) {
        sub_08086B30(arg0);
    } else if (state == 10) {
        sub_08086B44(arg0);
    } else {
        sub_08086B18(arg0);
    }
}

void sub_08086B80(u8 *);

void sub_08086B30(u8 *arg0) {
    arg0[0xE1] = 5;
    sub_08086B80(arg0);
}

s32 sub_0807CE30(u8 *);
void sub_0807C484(u8 *);
void sub_08086B98(u8 *, s32, s32);

void sub_08086B44(u8 *arg0) {
    arg0[0xE1] = 0x17;
    if (sub_0807CE30(arg0) != 0) {
        sub_0807C484(arg0);
        sub_08086B98(arg0, 4, 2);
    } else {
        arg0[0xE0] = 6;
        sub_08086B80(arg0);
    }
}

struct EntityBB0 {
    u8 pad0[0x41];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x74 - 0x4E];
    struct EntityBB0 *unk74;
};

void sub_0807B27C(void *);
void sub_08083300(void *, s32);

void sub_08086BB0(struct EntityBB0 *arg0) {
    sub_0807B27C(arg0);
    arg0->unk4D = 4;
    sub_08083300(arg0, 0x46);
    arg0->unk74->unk41 = arg0->unk41;
}

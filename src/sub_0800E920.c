extern u8 D_03002510[];
void sub_08005140(void *arg0, s32 arg1);

void sub_0800E904(Entity *arg0) {
    if ((s8)D_03004830[0x2D] == 4) {
        arg0->unk68 += 2;
    }
}

void sub_0800E8E8(Entity *arg0) {
    if ((s8)D_03004830[0x2D] == 2) {
        arg0->unk68 += 2;
    }
}

void sub_0800E920(Entity *arg0) {
    u8 *p = D_03002510;
    p[0x4EC]++;
    arg0->unk68 += 2;
}

void sub_0800E93C(Entity *arg0) {
    sub_08005140(arg0, 0x8180);
    arg0->unk68 += 2;
}

extern u8 D_03001850[];
extern u8 D_03004830[];
void sub_08004EA0(u32 arg0);
void sub_080017EC(u32 arg0);
void sub_08003378(u32 arg0);

void sub_0800EB68(void) {
    return;
}

void sub_0800EBA8(void) {
    return;
}

void sub_0800EB1C(Entity *arg0) {
    sub_08004EA0(0x815C);
    D_03001850[0] = 1;
    D_03004830[0x2D]++;
    arg0->unk68 += 2;
}

void sub_0800EAA8(Entity *arg0) {
    sub_08004EA0(0x8119);
    sub_080017EC(0x5E);
    sub_08003378(0x2A);
    D_03004830[0x2D]++;
    arg0->unk68 += 2;
    D_03004830[0x2B]++;
}

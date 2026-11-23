struct Unk4E450 {
    u8 pad00[0x2A];
    u16 unk2A;
    u8 pad2C[0x2E - 0x2C];
    u16 unk2E;
    u8 pad30[0x3D - 0x30];
    u8 unk3D;
};

void sub_08037FC4(struct Unk4E450 *, s32);
void sub_080332C0(struct Unk4E450 *);
void sub_0804E4D4(struct Unk4E450 *);

void sub_0804E474(struct Unk4E450 *arg0) {
    sub_08037FC4(arg0, 0);
    arg0->unk2E = 0x1A00;
}

void sub_0804E48C(struct Unk4E450 *arg0) {
    sub_08037FC4(arg0, 2);
    arg0->unk2E = 0x2F00;
}

void sub_0804E450(struct Unk4E450 *arg0) {
    s32 zero = 0;
    arg0->unk2A = 0x2E;
    sub_080332C0(arg0);
    arg0->unk3D = zero;
    sub_0804E4D4(arg0);
}

void sub_0804E4A4(struct Unk4E450 *arg0) {
    sub_08037FC4(arg0, 4);
    arg0->unk2E = 0x2E00;
}

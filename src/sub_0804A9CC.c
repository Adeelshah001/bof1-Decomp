struct EntityA9CC {
    u8 pad[0x4C];
    u8 unk4C;
};
void sub_0804A9B0(void *);
void sub_0804A9F0(void *);

void sub_0804A9CC(struct EntityA9CC *arg0) {
    if (arg0->unk4C == 0) {
        arg0->unk4C++;
        sub_0804A9B0(arg0);
    } else {
        sub_0804A9F0(arg0);
    }
}

Entity *sub_0803EDDC(u16 arg0);
extern u16 D_030023E0[];
extern void *sub_08046784;

void sub_08013AA0(void) {
    Entity *ent = sub_0803EDDC(D_030023E0[0x50]);
    if (ent != NULL) {
        ent->unk3A = 1;
        *(void **)&ent->unk64 = &sub_08046784;
        ent->unk2A = 0x0D98;
        ent->unk6 = 0x5C7C;
    }
}

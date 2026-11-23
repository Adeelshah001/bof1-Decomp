extern const u8 D_0822F5B8[];

u8 *Entity_FindFreeSlot(void);
void sub_0804D7EC(u8 *arg0, s32 arg1, s32 arg2);
void sub_0804BC8C(u8 *arg0, s32 arg1);

void sub_0804CD5C(u8 *arg0) {
    D_03004830[0x2B]++;
    *(u16 *)(arg0 + 0xA6) += 2;
}

void sub_0804CD74(u8 *arg0) {
    if (*(u16 *)(D_03004830 + 0x2A) == 0x90C) {
        *(u16 *)(arg0 + 0xA6) += 2;
    }
}

void sub_0804CD94(u8 *arg0) {
    u8 *ent = Entity_FindFreeSlot();
    if (ent != NULL) {
        ent[0x3B] = 0xC;
        ent[0x3C] = 0xC;
        ent[0x3A] = 1;
    }
    *(u16 *)(arg0 + 0xA6) += 2;
}

void sub_0804CD1C(u8 *arg0) {
    *(u16 *)(arg0 + 0xA6) = D_0822F5B8[0x2A] | (D_0822F5B8[0x2B] << 8);
    sub_0804D7EC(arg0, 0xB18, 0x9B8C);
    sub_0804BC8C(arg0, 1);
}

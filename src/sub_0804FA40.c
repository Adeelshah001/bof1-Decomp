
void sub_08037FC4(void *, s32);
void sub_0804FF1C(void *);
void sub_08050058(void *);
void sub_0803EE6C(void *);
void sub_0804FA40(Entity *p) {
    p->unk64 = (u32)sub_0804FF1C;
    ((u8 *)p)[0x3D] = 2;
    p->unk41 = 8;
    p->unk1C = 0x1A0;
    p->unk2A = 0x196;
    sub_08037FC4(p, 0);
}
void sub_0804FA7C(u8 *p) {
    u8 *parent = *(u8 **)(p + 0xD4);
    s32 n;
    p[0x54] = 7;
    *(u16 *)(p + 2) = *(u16 *)(parent + 2);
    *(u16 *)(p + 6) = *(u16 *)(parent + 6);
    do {
        sub_08050058(p);
        n = p[0x54] - 1;
        p[0x54] = n;
    } while (!(n & 0x80));
    sub_0803EE6C(p);
}

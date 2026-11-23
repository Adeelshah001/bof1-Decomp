extern void sub_0800F820(void);
void *sub_0803ED98(void);

void sub_0801D4B8(void) {
    void *ent;
    sub_0800F820();
    ent = sub_0803ED98();
    *(void **)0x03004154 = ent;
    if (ent != NULL) {
        ((u8 *)ent)[0x3A] = 1;
        *(u8 *)(*(void **)0x03004154 + 0x3C) = 0xC;
        *(u8 *)(*(void **)0x03004154 + 0x3B) = 0x30;
        D_03004830[0x2B]++;
    }
}

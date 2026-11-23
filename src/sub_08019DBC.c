void sub_08019DE8(s8 arg0, s8 arg1);
void *Entity_FindFreeSlot(void);

extern u8 *D_03004154;

s32 sub_08019DBC(u8 arg0) {
    u8 *e;
    e = (u8 *)Entity_FindFreeSlot();
    D_03004154 = e;
    if (e == NULL)
        return 1;
    sub_08019DE8((s8)arg0, 0x15);
    return 0;
}

s32 sub_08019E04(u8 arg0) {
    u8 *e;
    e = (u8 *)Entity_FindFreeSlot();
    D_03004154 = e;
    if (e == NULL)
        return 1;
    e[0x3C] = 0x0F;
    ((u8 *)D_03004154)[0x3A] = 1;
    ((u8 *)D_03004154)[0x3B] = arg0;
    return 0;
}

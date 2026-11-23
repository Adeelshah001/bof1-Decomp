void sub_08001F80(s32, s32, s32);
void sub_08004EA0(void);
void sub_08019DA0(void);
void sub_08019DE8(s8 arg0, s8 arg1);
void *Entity_FindFreeSlot(void);

extern u8 D_03002AB0[];
extern u8 *D_03004154;

void sub_08019D3C(void) {
    u8 *p;
    sub_08001F80(0xA, 0, 0);
    p = D_03004830;
    p[0x2B]++;
}

s32 sub_08019DBC(u8 arg0) {
    u8 *e;
    e = (u8 *)Entity_FindFreeSlot();
    D_03004154 = e;
    if (e != NULL) {
        sub_08019DE8((s8)arg0, 0x15);
        return 0;
    }
    return 1;
}

void sub_08019C90(void) {
    u8 *p;
    sub_08004EA0();
    p = D_03002AB0;
    p[0x54] = 0;
    p[0x178] = 0;
    p[0x29C] = 0;
    p[0x3C0] = 0;
    p[0xB8] &= 0xFB;
    sub_08019DA0();
}

s32 sub_08019E04(u8 arg0) {
    u8 *e;
    e = (u8 *)Entity_FindFreeSlot();
    D_03004154 = e;
    if (e != NULL) {
        e[0x3C] = 0x0F;
        ((u8 *)D_03004154)[0x3A] = 1;
        ((u8 *)D_03004154)[0x3B] = arg0;
        return 0;
    }
    return 1;
}

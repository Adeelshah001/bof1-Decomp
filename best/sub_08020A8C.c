extern u8 *D_03004154;
extern u8 D_03002AB0[];
extern u8 D_03001864[];

u8 *Entity_FindFreeSlot(void);
s32 sub_08020A30(u16 arg0, u16 arg1);
void sub_08021A90(s32, s32);

s32 sub_08020AF0(s32 arg0, s16 arg1) {
    sub_08020A30((0x110000 | (arg0 << 24)) >> 16, arg1);
    return (s32)D_03004154;
}

void sub_08020A8C(void) {
    s8 v;

    D_03002AB0[0xB8] |= 4;
    v = ((s8 *)(D_03004830 + 0x2A))[0];
    if (v == 0) {
        *(u16 *)D_03001864 = v;
    }
}

s32 sub_08020A30(u16 arg0, u16 arg1) {
    D_03004154 = Entity_FindFreeSlot();
    if (D_03004154 == 0) {
        return 1;
    }
    D_03004154[0x3B] = arg0;
    D_03004154[0x3E] = arg0 >> 8;
    D_03004154[0x3A] = 1;
    D_03004154[0x3C] = 0x12;
    *(u32 *)(D_03004154 + 0x64) = 0;
    *(s32 *)(D_03004154 + 0xD4) = (s16)arg1;
    return 0;
}

void sub_08020800(void) {
    u8 *state = D_03004830;
    u8 *p = state + 0x2D;
    u8 *q;
    u8 *slot;
    u8 v = *p - 1;

    *p = v;
    if (v == 0) {
        sub_08021A90(2, 0x6A);
        slot = D_03004154;
        *(u16 *)(slot + 2) = 0xAB8;
        *(u16 *)(slot + 6) = 0xFA77;
        *(u16 *)(slot + 0x2C) = 0xFE4C;
        *(u16 *)(slot + 0x12) = 3;
        *(u16 *)(slot + 0x16) = 3;
        q = state + 0x2B;
        (*q)++;
    }
}

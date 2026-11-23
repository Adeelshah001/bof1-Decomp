typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0x12 - 8];
    u16 unk12;
    u8 pad14[2];
    u16 unk16;
    u8 pad18[0x2C - 0x18];
    u16 unk2C;
} Slot;

extern u8 *D_03004154;

u8 *Entity_FindFreeSlot(void);
s32 sub_08020A30(s32 arg0, s16 arg1);
void sub_08021A90(s32, s32);

s32 sub_08020AF0(s32 arg0, s16 arg1) {
    sub_08020A30((s32)(0x110000 | (arg0 << 0x18)) >> 0x10, arg1);
    return (s32)D_03004154;
}

s32 sub_08020A30(s32 arg0, s16 arg1) {
    u16 a = (u16)arg0;
    u16 b = (u16)arg1;
    u8 *slot;
    u32 zero = 0;

    D_03004154 = Entity_FindFreeSlot();
    if (D_03004154 == 0) {
        return 1;
    }
    D_03004154[0x3B] = a;
    D_03004154[0x3E] = a >> 8;
    D_03004154[0x3A] = 1;
    D_03004154[0x3C] = 0x12;
    slot = D_03004154;
    *(u32 *)(slot + 0x64) = zero;
    *(s32 *)(slot + 0xD4) = (s16)b;
    return 0;
}

void sub_08020800(void) {
    u8 *state = D_03004830;
    u8 *p = state + 0x2D;
    u8 *q;
    Slot *slot;

    if (--*p == 0) {
        sub_08021A90(2, 0x6A);
        slot = (Slot *)D_03004154;
        slot->unk2 = 0xAB8;
        slot->unk6 = 0xFA77;
        slot->unk2C = 0xFE4C;
        slot->unk12 = 3;
        slot->unk16 = 3;
        q = state + 0x2B;
        (*q)++;
    }
}

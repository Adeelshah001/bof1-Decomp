
u8 sub_08037ED4(void *, u16, u16);
s32 sub_08003104(void);
void sub_080A0A68(void *, const void *, s32);
void sub_08037BE0(void *, u16, const void *);

extern const u8 D_080A6518[];
extern const u8 D_0822F04C[];
extern const u8 D_081F4ABC[];
extern const u8 D_0300169C[];

void sub_080380A4(void *arg0) {
    *(u16 *)((u8 *)arg0 + 0x4C) = 0;
    *(u16 *)((u8 *)arg0 + 0x50) = 0;
    *(u16 *)((u8 *)arg0 + 0x22) = 0;
    *(u8 *)((u8 *)arg0 + 0x40) = 0;
    *(u8 *)((u8 *)arg0 + 0x3A) = 0;
    *(u32 *)((u8 *)arg0 + 0x64) = 0;
}

s32 sub_08038058(u8 arg0) {
    u8 stack[12];
    u32 temp;

    sub_080A0A68(stack, D_080A6518, 0xB);
    temp = sub_08003104() << 24;
    return D_0822F04C[((temp >> 27) & 7) + (arg0 * 8)] & stack[(temp >> 24) & 7];
}

void sub_080380F4(void *arg0, void *arg1, u16 arg2, u16 arg3) {
    u16 x = *(u16 *)((u8 *)arg1 + 2) - arg2;
    u16 y = *(u16 *)((u8 *)arg1 + 6) - arg3;
    *(u8 *)((u8 *)arg0 + 0x61) = sub_08037ED4(arg0, x, y);
}

void sub_0803800C(void *arg0, s32 arg1, u16 arg2) {
    u32 stack[1];
    u8 **pTable;
    u16 off;
    u8 *p1;
    s32 val;
    u8 *p2;
    u16 res;

    stack[0] = (u32)D_081F4ABC;
    pTable = (u8 **)((u8 *)stack + *D_0300169C);
    off = *(u16 *)((u8 *)arg0 + 0x2A);
    p1 = (u8 *)*pTable + off;
    val = (p1[0] | (p1[1] << 8)) + arg1;
    p2 = (u8 *)*pTable + (u16)val;
    res = arg2 + (p2[0] | (p2[1] << 8));
    *(u16 *)((u8 *)arg0 + 0x22) = res;
    sub_08037BE0(arg0, res, D_081F4ABC);
}

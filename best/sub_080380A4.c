
u8 sub_08037ED4(void *, u16, u16);
s32 sub_08003104(void);
void sub_080A0A68(void *, void *, s32);
void sub_08037BE0(void *, u16, void *);

extern u8 D_080A6518[];
extern u8 D_0822F04C[];
extern u8 D_081F4ABC[];
extern u8 D_0300169C[];

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
    return D_0822F04C[((temp >> 27) & 7) + (arg0 << 3)] & stack[(temp >> 24) & 7];
}

void sub_080380F4(void *arg0, void *arg1, u16 arg2, u16 arg3) {
    *(u8 *)((u8 *)arg0 + 0x61) = sub_08037ED4(arg0, *(u16 *)((u8 *)arg1 + 2) - arg2, *(u16 *)((u8 *)arg1 + 6) - arg3);
}

void sub_0803800C(void *arg0, s32 arg1, u16 arg2) {
    u32 stack[1];
    u8 *pTable = *(u8 **)(stack + (*D_0300169C));
    u16 off = *(u16 *)((u8 *)arg0 + 0x2A);
    u8 *p1 = pTable + off;
    s32 val = (p1[0] | (p1[1] << 8)) + arg1;
    u8 *p2 = pTable + (u16)val;
    u16 res = arg2 + (p2[0] | (p2[1] << 8));
    *(u16 *)((u8 *)arg0 + 0x22) = res;
    sub_08037BE0(arg0, res, D_081F4ABC);
}

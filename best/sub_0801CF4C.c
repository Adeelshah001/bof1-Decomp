/* machine draft (m2c) for agbcc -O2 -mthumb-interwork, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK sub_08003378(s32);                          /* extern */
M2C_UNK sub_0801DCCC(s32);                          /* extern */
void *sub_08020AF0(s32, s16);                       /* extern */

void sub_0801CF4C(void) {
    void *temp_r0;

    *(s16 *)0x03004890 = 0x12C;
    temp_r0 = sub_08020AF0(0x11, *(s16 *)0x03004138);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s16 *, 2) = 0x798;
        M2C_FIELD(temp_r0, s16 *, 6) = 0xDA5C;
        M2C_FIELD(temp_r0, s16 *, 0x2C) = 0xDA5C;
        sub_0801DCCC(0x12E);
        sub_0801DCCC(0x13E);
        sub_0801DCCC(0x143);
        sub_0801DCCC(0x144);
        sub_0801DCCC(0x16A);
        sub_0801DCCC(0x16C);
        sub_08003378(0x40);
        *(s8 *)0x0300485D = 0x20;
        *(u8 *)0x0300485B += 1;
    }
}

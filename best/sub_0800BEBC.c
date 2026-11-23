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

M2C_UNK sub_0800B9BC(s32);                          /* extern */
M2C_UNK sub_0800BFDC(s32);                          /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */

void sub_0800BEBC(void) {
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r1;

    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_0800B9BC(1);
        temp_r0_2 = *(u8 *)0x0300485D - 1;
        *(u8 *)0x0300485D = temp_r0_2;
        if ((temp_r0_2 << 0x18) == 0) {
            sub_080379D4(0x26);
            *(u8 *)0x0300485C = 0xFF;
            *(u8 *)0x0300485B += 1;
            return;
        }
        sub_0800B9BC(1);
        temp_r1 = *(void **)0x03004154;
        M2C_FIELD(temp_r1, s16 *, 0x2C) = (s16) (M2C_FIELD(temp_r1, u16 *, 6) + 0xF0);
        *(u8 *)0x0300485C = 0x10;
        if ((s8) *(u8 *)0x0300485D == 1) {
            sub_0800BFDC(0x5B0);
            sub_0800BFDC(0x5A6);
            M2C_FIELD(*(void **)0x03004154, s16 *, 0x2C) = 0xC0;
            *(u8 *)0x030033F0 |= 1;
        }
    }
}

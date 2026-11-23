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

M2C_UNK sub_0801DBF0(s32);                          /* extern */
void *sub_0803ED98();                               /* extern */

void sub_0801CDC4(void) {
    u16 temp_r0;
    u16 temp_r2;
    void *temp_r0_2;
    void *temp_r2_2;

    temp_r0 = *(u16 *)0x03000854 - 1;
    *(u16 *)0x03000854 = temp_r0;
    temp_r2 = temp_r0;
    if (temp_r2 == 0) {
        *(s16 *)0x03004890 = 0xC8;
        *(u16 *)0x0300413C = temp_r2;
        sub_0801DBF0(0);
        temp_r0_2 = sub_0803ED98();
        *(void **)0x03004154 = temp_r0_2;
        M2C_FIELD(temp_r0_2, s8 *, 0x3A) = 1;
        M2C_FIELD(*(void **)0x03004154, s8 *, 0x3C) = 0x14;
        M2C_FIELD(*(void **)0x03004154, s8 *, 0x3B) = 5;
        temp_r2_2 = *(void **)0x03004154;
        M2C_FIELD(temp_r2_2, s16 *, 0x54) = 0x308;
        *(u8 *)0x0300485B += 1;
        *(void **)0x03004448 = temp_r2_2;
    }
}

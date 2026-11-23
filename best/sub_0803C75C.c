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

M2C_UNK sub_0803CAF0(u8, u16, u16);                 /* extern */

void sub_0803C75C(void) {
    u16 temp_r8;
    u16 temp_r9;
    u8 temp_r0;
    u8 temp_r5;

    temp_r9 = *(u16 *)0x03004E0C;
    temp_r8 = *(u16 *)0x03004E14;
    if (!(0x10 & *(u8 *)0x03003418) && (*(u16 *)0x03002484 == 0)) {
        temp_r5 = *(u8 *)0x030040EC;
        if (temp_r5 == 0) {
            sub_0803CAF0(*(u8 *)0x03000978, *(u16 *)0x03004E18, *(u16 *)0x03004E08);
            temp_r0 = *(u8 *)0x03000978 + 1;
            *(u8 *)0x03000978 = temp_r0;
            if ((u32) temp_r0 > 0xFU) {
                *(u8 *)0x03000978 = temp_r5;
            }
            *(s8 *)0x030043DC = 1;
        }
    }
    *(u16 *)0x03004E14 = temp_r8;
    *(u16 *)0x03004E0C = temp_r9;
}

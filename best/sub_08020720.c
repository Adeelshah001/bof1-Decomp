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

M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */

void sub_08020720(void) {
    M2C_FIELD((void *)0x030045B0, s32 *, 0xC) = (s32) (M2C_FIELD((void *)0x030045B0, s32 *, 0xC) + 1);
    *(u8 *)0x03002B68 |= 8;
    *(s16 *)0x03002508 = 1;
    *(s8 *)0x03002AEA = 1;
    sub_0800518C(0x1B6, 0xA68, 0xFFFFFE8C);
    *(s8 *)0x03000858 = 0;
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    *(u8 *)0x0300485B += 1;
}

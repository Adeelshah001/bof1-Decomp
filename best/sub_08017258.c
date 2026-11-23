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

void sub_08017258(void) {
    sub_0800518C(0x1C5, 0xE68, 0xFFFFB14C);
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    M2C_FIELD((void *)0x02020FC0, s8 *, 0) = 0;
    M2C_FIELD((void *)0x02020FC0, s8 *, 1) = 0;
    M2C_FIELD((void *)0x020211C0, s8 *, 0) = 0;
    M2C_FIELD((void *)0x020211C0, s8 *, 1) = 0;
    *(s16 *)0x0300168C = 0xFF;
    *(s8 *)0x03001850 = 0;
    *(u8 *)0x03002B68 &= 0x7F;
    *(u8 *)0x0300485B += 1;
}

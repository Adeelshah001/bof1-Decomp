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

s8 sub_08019E04(s32);                               /* extern */
M2C_UNK sub_0802FD60(s32);                          /* extern */

void sub_080177DC(void) {
    s8 temp_r2;

    sub_0802FD60(0x64);
    temp_r2 = sub_08019E04(2);
    if (temp_r2 == 0) {
        *(s8 *)0x030018AA = temp_r2;
        *(s8 *)0x0300198A = temp_r2;
        *(s8 *)0x03001A6A = temp_r2;
        *(s8 *)0x03001B4A = temp_r2;
        *(s8 *)0x030018BC = temp_r2;
        *(s8 *)0x0300199C = temp_r2;
        *(s8 *)0x03001A7C = temp_r2;
        *(s8 *)0x03001B5C = temp_r2;
        *(u8 *)0x03002B68 |= 0x80;
        *(u8 *)0x0300485B += 1;
    }
}

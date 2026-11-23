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

M2C_UNK sub_08000248(s32);                          /* extern */
s32 sub_08002E44(u8);                               /* extern */

void sub_08003984(u8 arg0) {
    s32 var_r0;

loop_11:
    if ((sub_08002E44(arg0) << 0x18) == 0) {
        if (*(u8 *)0x030023DC == 0xFF) {
            var_r0 = 0x0200AA10;
            goto block_7;
        }
        if (*(u8 *)0x030043DC != 0) {
            *(s32 *)0x03004758 = 0x020211C0;
            *(s32 *)0x03001694 |= 1;
        } else if (*(s32 *)0x03001694 & 1) {
            var_r0 = 0x02020FC0;
block_7:
            *(s32 *)0x03004758 = var_r0;
        }
        if (*(s32 *)0x03001694 & 0x100) {
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) *(s32 *)0x03004758;
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x05000100;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000040;
        }
        sub_08000248(1);
        goto loop_11;
    }
}

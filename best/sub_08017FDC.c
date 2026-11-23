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

s32 sub_08019FE0(M2C_UNK, s8);                      /* extern */

void sub_08017FDC(void) {
    s32 var_r0_2;
    u16 var_r0;
    u16 var_r0_3;

    if (*(u8 *)0x03002B04 != 0) {
        if (0x80 & *(u8 *)0x03002B05) {
            var_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) - 2;
        } else {
            var_r0 = M2C_FIELD((void *)0x03002AB0, u16 *, 6) + 2;
        }
        M2C_FIELD((void *)0x03002AB0, u16 *, 6) = var_r0;
        sub_08019FE0(0x03002AB0, M2C_FIELD((void *)0x03002AB0, s8 *, 0x54));
    }
    if (*(u8 *)0x03002C28 == 0) {
        var_r0_2 = 0;
    } else {
        if (0x80 & *(u8 *)0x03002C29) {
            var_r0_3 = M2C_FIELD((void *)0x03002BD4, u16 *, 6) - 2;
        } else {
            var_r0_3 = M2C_FIELD((void *)0x03002BD4, u16 *, 6) + 2;
        }
        M2C_FIELD((void *)0x03002BD4, u16 *, 6) = var_r0_3;
        var_r0_2 = sub_08019FE0(0x03002BD4, M2C_FIELD((void *)0x03002BD4, s8 *, 0x54));
    }
    if ((var_r0_2 << 0x18) == 0) {
        *(u8 *)0x0300485B += 1;
    }
}

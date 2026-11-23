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

u8 sub_0802F810(void *, M2C_UNK *, void *);         /* extern */
s32 sub_08075248(void *, M2C_UNK *);                /* extern */

void sub_08030300(void *arg0) {
    M2C_UNK sp0;
    M2C_UNK sp4;
    u16 temp_r5;
    u8 temp_r2;

    temp_r2 = sub_0802F810(arg0, &sp0, &sp0 + 2);
    if (temp_r2 != 0) {
        temp_r5 = *(u16 *)0x03002484;
        if ((temp_r5 == 0) && ((sub_08075248(arg0, &sp4) << 0x10) != 0)) {
            M2C_FIELD(arg0, s8 *, 0x4D) = 4;
            M2C_FIELD(arg0, u8 *, 0x50) = (u8) temp_r5;
            goto block_5;
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x4D) = 4;
        M2C_FIELD(arg0, u8 *, 0x50) = temp_r2;
block_5:
        *(s16 *)0x03004114 = 1;
    }
}

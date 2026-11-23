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

M2C_UNK sub_080546E8(void *);                       /* extern */
s32 sub_080550D4(void *);                           /* extern */
M2C_UNK sub_0805512C(void *);                       /* extern */

void sub_08054F2C(void *arg0, u8 *arg1) {
    u8 temp_r1;

    temp_r1 = *arg1;
    if (temp_r1 == 1) {
        *arg1 = 2 | temp_r1;
        M2C_FIELD(arg0, s8 *, 0x6F) = (s8) ((u16) M2C_FIELD(arg0, u16 *, 0x4A) >> 8);
        if ((sub_080550D4(arg0) << 0x18) != 0) {
            if ((u8) M2C_FIELD(arg0, u16 *, 0x4A) != 0) {
                M2C_FIELD(arg0, u16 *, 0x4A) = (u16) (M2C_FIELD(arg0, u16 *, 0x4A) - 1);
            }
            goto block_13;
        }
        goto block_6;
    }
    if (temp_r1 == 2) {
        *arg1 = 1 | temp_r1;
        M2C_FIELD(arg0, s8 *, 0x6F) = (s8) ((u16) M2C_FIELD(arg0, u16 *, 0x46) >> 8);
        if ((sub_080550D4(arg0) << 0x18) == 0) {
block_6:
            sub_08054F2C(arg0, arg1);
            return;
        }
        if ((u8) M2C_FIELD(arg0, u16 *, 0x46) != 0) {
            M2C_FIELD(arg0, u16 *, 0x46) = (u16) (M2C_FIELD(arg0, u16 *, 0x46) - 1);
        }
        goto block_13;
    }
    if ((((u8) M2C_FIELD(arg0, u16 *, 0x46) == 0) && (M2C_FIELD(arg0, s8 *, 0x6F) = (s8) ((u16) M2C_FIELD(arg0, u16 *, 0x46) >> 8), ((sub_080550D4(arg0) << 0x18) != 0))) || (((u8) M2C_FIELD(arg0, u16 *, 0x4A) == 0) && (M2C_FIELD(arg0, s8 *, 0x6F) = (s8) ((u16) M2C_FIELD(arg0, u16 *, 0x4A) >> 8), ((sub_080550D4(arg0) << 0x18) != 0)))) {
block_13:
        sub_0805512C(arg0);
        return;
    }
    sub_080546E8(arg0);
}

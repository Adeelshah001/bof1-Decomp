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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_08078880(void *, s32);                  /* extern */

void sub_0807890C(void *arg0) {
    u8 temp_r1;
    void *temp_r0;

    if (0x83 & M2C_FIELD(arg0, u8 *, 0xF1)) {
        M2C_FIELD(arg0, u8 *, 0x4D) = 0U;
        M2C_FIELD((arg0 + 0x4D), s8 *, 3) = 0;
        *(s8 *)0x03004FAD = 0;
        if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
            M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
        }
        if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
            sub_0803A8EC(arg0);
        }
    } else {
        temp_r1 = M2C_FIELD((void *)0x03004F50, u8 *, 0xC);
        if (temp_r1 == 0) {
            temp_r0 = arg0 + 0x4D;
            M2C_FIELD(arg0, u8 *, 0x4D) = temp_r1;
            M2C_FIELD(temp_r0, u8 *, 0x93) = temp_r1;
            M2C_FIELD((temp_r0 + 0x93), u8 *, 1) = temp_r1;
        }
        if ((s32) temp_r1 <= 8) {
            if ((s32) temp_r1 > 6) {
                sub_08078880(arg0, 1);
                return;
            }
            if ((s32) temp_r1 > 4) {
                goto block_12;
            }
            sub_08078880(arg0, 1);
            return;
        }
block_12:
        sub_08078880(arg0, 0);
    }
}

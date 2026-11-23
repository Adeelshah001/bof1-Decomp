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

s32 sub_0807B288();                                 /* extern */
M2C_UNK sub_08083300(void *, s32);                  /* extern */
M2C_UNK sub_08087710(void *);                       /* extern */

void sub_080876C4(void *arg0) {
    u8 temp_r0;
    u8 temp_r1;
    void *temp_r0_2;

    if ((sub_0807B288() << 0x10) == 0) {
        sub_08087710(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    temp_r1 = temp_r0;
    if (!(0x80 & temp_r1)) {
        if (temp_r1 == 0) {
            sub_08083300(arg0, 0x16);
            goto block_5;
        }
    } else {
block_5:
        temp_r0_2 = M2C_FIELD(arg0, void **, 0x74);
        M2C_FIELD(temp_r0_2, s8 *, 2) = (s8) (M2C_FIELD(arg0, u8 *, 2) + 0x16);
        M2C_FIELD(temp_r0_2, s8 *, 6) = (s8) (M2C_FIELD(arg0, u8 *, 6) - 0x18);
    }
}

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

M2C_UNK sub_08013A38(s32, void *);                  /* extern */

void sub_08012BC8(void *arg0) {
    void *temp_r2;

    sub_08013A38(0x21, arg0);
    if (*(s16 *)0x03004114 == 0) {
        M2C_FIELD(*(void **)0x03004154, s8 *, 0x41) = 0x38;
        temp_r2 = *(void **)0x03004154;
        M2C_FIELD(temp_r2, s16 *, 0x1C) = 0x1D0;
        M2C_FIELD(temp_r2, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
        M2C_FIELD(temp_r2, s16 *, 6) = (s16) (M2C_FIELD(arg0, u16 *, 6) - 0x10);
        M2C_FIELD(temp_r2, s16 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) - 0x10);
        if (*(u16 *)0x03002484 == 0x11F) {
            M2C_FIELD(temp_r2, s8 *, 0x41) = 0x3A;
        }
    }
}

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

M2C_UNK sub_0803EE38(void *);                       /* extern */
s32 sub_080448A4(void *, s32);                      /* extern */
extern M2C_UNK sub_08045F70;

void sub_080455A0(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x1C) = 0x60;
    M2C_FIELD(arg0, s8 *, 0x41) = 0x2E;
    if (((sub_080448A4(arg0, 4) << 0x18) != 0) && (M2C_FIELD(arg0, u8 *, 0x60) != 0)) {
        sub_0803EE38(arg0);
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08045F70;
}

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

M2C_UNK sub_0807B27C(void *);                       /* extern */
M2C_UNK sub_08083BB4(void *);                       /* extern */
M2C_UNK sub_08089C24(void *);                       /* extern */

void sub_08089D08(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), u8 *, 0x3A) != 0) {
        sub_0807B27C(arg0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
    sub_08083BB4(arg0);
    sub_08089C24(arg0);
}

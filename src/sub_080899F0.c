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

M2C_UNK sub_08037FC4(void *, u16);                  /* extern */
M2C_UNK sub_0807CB9C(void *);                       /* extern */
M2C_UNK sub_080869CC();                             /* extern */
u16 sub_080915B4(void *);                           /* extern */

void sub_080899F0(void *arg0) {
    sub_080869CC();
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
    sub_08037FC4(arg0, sub_080915B4(arg0));
    if (M2C_FIELD(arg0, u8 *, 0x4C) == 0xA) {
        sub_0807CB9C(arg0);
    }
}

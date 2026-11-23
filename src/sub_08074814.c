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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0805A9FC();                             /* extern */
M2C_UNK sub_0805DA14(s32);                          /* extern */
M2C_UNK sub_080749C0(void *);                       /* extern */
s32 sub_080822AC(void *);                           /* extern */

void sub_08074814(void *arg0) {
    sub_0805A9FC();
    if (*(s32 *)0x03004550 == M2C_FIELD(arg0, s32 *, 0x1C)) {
        sub_080379D4(7);
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
        if (sub_080822AC(arg0) == 0) {
            sub_080749C0(arg0);
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
        sub_0805DA14(M2C_FIELD(arg0, s32 *, 0x4C));
        M2C_FIELD(arg0, s8 *, 2) = 0x16;
        goto block_4;
    }
block_4:
    *(s8 *)0x03004754 = 1;
}

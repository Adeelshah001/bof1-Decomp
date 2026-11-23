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

M2C_UNK sub_0800F958(void *, s16);                  /* extern */
M2C_UNK sub_08024080(void *);                       /* extern */

void sub_08011D94(void *arg0) {
    u16 temp_r0;

    *(s16 *)0x0300413C = (s16) M2C_FIELD(M2C_FIELD(arg0, void **, 0x68), u8 *, 2);
    sub_0800F958(arg0, *(s16 *)0x0300413C);
    if (*(s16 *)0x03004114 != 1) {
        temp_r0 = *(u16 *)0x030040F8;
        *(s16 *)0x0300413C = (s16) temp_r0;
        if ((temp_r0 << 0x10) != 0) {
            *(u8 *)0x03002B68 |= 4;
            sub_08024080(arg0);
            if (*(u8 *)0x0300488C != 0) {
                M2C_FIELD(arg0, void **, 0x68) = (void *) (M2C_FIELD(arg0, void **, 0x68) + 1);
            }
        }
    }
}

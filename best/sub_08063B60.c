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

M2C_UNK sub_08059978();                             /* extern */
M2C_UNK sub_0805A9FC();                             /* extern */
M2C_UNK sub_0805B308(s32);                          /* extern */
M2C_UNK sub_0805B358(s32, u8, s32, s32, s32);       /* extern */
M2C_UNK sub_0805B568(s32, s32, s32, s32, s32);      /* extern */
s32 sub_08063A94();                                 /* extern */
M2C_UNK sub_08067D74(s32);                          /* extern */

s32 sub_08063B60(void) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD((void *)0x03004620, u8 *, 7);
    if (temp_r1 == 0) {
        *(s16 *)0x03001648 = (s16) temp_r1;
        sub_0805B358(0x0814C388, M2C_FIELD((void *)0x03004620, u8 *, 0xB2), 0x10, 0, 1);
        M2C_FIELD((void *)0x03004620, s8 *, 0xB0) = 6;
        sub_08067D74(2);
        sub_0805B568(0x8008, 0x4078, 1, 0, 0x1CC);
        sub_08059978();
        sub_0805B308(0x0814BDB2);
        sub_0805A9FC();
        M2C_FIELD((void *)0x03004620, u8 *, 0xB2) = 0xFFU;
        M2C_FIELD((void *)0x03004620, u8 *, 7) = -1U;
        return 0;
    }
    return sub_08063A94();
}

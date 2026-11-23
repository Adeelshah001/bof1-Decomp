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
M2C_UNK sub_0804A5A4(void *);                       /* extern */

void sub_0804A50C(void *arg0) {
    if (*(u8 *)0x03002B72 != 0) {
        *(u8 *)0x03002B72 = 0;
        if (M2C_FIELD(arg0, u8 *, 0xC4) == 0) {
            sub_080379D4(0xF);
            M2C_FIELD(arg0, u8 *, 0xC4) = 8U;
        }
        M2C_FIELD(arg0, s8 *, 0x51) = 2;
        M2C_FIELD(arg0, u8 *, 0xC5) = (u8) *(u8 *)0x0300178C;
        *(u8 *)0x0300178C = 0;
        M2C_FIELD(arg0, s16 *, 0xA2) = (s16) *(u8 *)0x03003410;
        M2C_FIELD(arg0, s16 *, 0x9C) = (s16) *(s32 *)0x030040F0;
        M2C_FIELD(arg0, s16 *, 0x9E) = (s16) *(s32 *)0x03003FB0;
        M2C_FIELD(arg0, s16 *, 0xA0) = (s16) *(s32 *)0x03002500;
        *(s32 *)0x03003FB0 = 0;
        *(s32 *)0x03002500 = 0;
        *(u8 *)0x03003410 = 0x33;
        M2C_FIELD(arg0, s8 *, 0xC6) = 3;
        sub_0804A5A4(arg0);
    }
}

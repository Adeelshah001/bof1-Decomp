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

M2C_UNK sub_080030D4();                             /* extern */
M2C_UNK sub_08004EA0(s32);                          /* extern */
M2C_UNK sub_0801DC94(s8);                           /* extern */
M2C_UNK sub_08072CC4(s32);                          /* extern */

void sub_0801D174(void) {
    s16 temp_r0;

    sub_08072CC4(*(u8 *)0x030045F0 | 0x3A00);
    if (*(u8 *)0x03004584 != 0) {
        sub_080030D4();
        return;
    }
    sub_08004EA0(0x85A7);
    *(s8 *)0x0300485C = 0xE0;
    *(s8 *)0x0300485D = 1;
    temp_r0 = *(u8 *)0x030045F0 + 1;
    *(s16 *)0x0300413C = temp_r0;
    if ((s32) temp_r0 > 0x3B) {
        *(s16 *)0x0300413C = 0x34;
    }
    sub_0801DC94((s8) *(s16 *)0x0300413C);
}

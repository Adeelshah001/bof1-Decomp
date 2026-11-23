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

M2C_UNK sub_0800421C(s32, s16, s16);                /* extern */
M2C_UNK sub_0800C754();                             /* extern */

void sub_0800C340(void) {
    s8 temp_r1;
    u8 temp_r0;

    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    temp_r1 = (s8) temp_r0;
    if (temp_r1 != 0) {
        sub_0800C754();
        return;
    }
    *(s16 *)0x03004120 = (s16) temp_r1;
    sub_0800421C(0, *(s16 *)0x03002AB2, *(s16 *)0x03002AB6);
    *(s16 *)0x03001864 = 0x17;
    *(s32 *)0x03001694 &= ~0x80;
    *(u8 *)0x0300485C = 0x20;
    *(u8 *)0x0300485B += 1;
}

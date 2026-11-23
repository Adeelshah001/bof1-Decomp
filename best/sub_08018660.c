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

M2C_UNK sub_0800421C(s32, s32, s32);                /* extern */
M2C_UNK sub_08019DA0();                             /* extern */

void sub_08018660(void) {
    u8 temp_r1;

    if (*(u8 *)0x03002AFC != 0) {
        *(u8 *)0x03002B68 |= 4;
        temp_r1 = *(u8 *)0x030023DC;
        if (temp_r1 == 0) {
            *(s16 *)0x03004120 = (s16) temp_r1;
            sub_0800421C(0x102, 0x1B28, 0xFFFF8E2C);
            *(s8 *)0x03001698 = 8;
            *(u8 *)0x03002B68 &= 0xFB;
            sub_08019DA0();
        }
    }
}

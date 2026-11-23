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
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */

void sub_08017888(void) {
    *(s16 *)0x03001864 = 0;
    sub_0800312C(0x10, 0x30);
    sub_0800518C(0x1B5, 0x1978, 0x591C);
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    if (*(u8 *)0x03004874 != 0) {
        *(s8 *)0x03001698 = 8;
        *(s8 *)0x03001674 = 8;
        *(s8 *)0x0300166C = 0;
        *(s8 *)0x030016A4 = 0;
        *(u16 *)0x030040E0 += 0x20;
        sub_080030D4();
    }
    *(s16 *)0x03001864 = 0x17;
    *(u8 *)0x0300485B += 1;
}

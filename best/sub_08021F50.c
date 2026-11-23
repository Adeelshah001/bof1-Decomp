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

M2C_UNK sub_0800312C(s32, s32);                     /* extern */

void sub_08021F50(void) {
    if (*(u8 *)0x030023DC != 1) {
        *(s16 *)0x03001864 = 0x17;
        *(u8 *)0x03002AEA &= 0xBF;
        *(u8 *)0x03002C0E &= 0xBF;
        *(u8 *)0x03002D32 &= 0xBF;
        *(u8 *)0x03002E56 &= 0xBF;
        *(u8 *)0x0300345A &= 0xBF;
        sub_0800312C(0x10, 2);
        *(u8 *)0x03004870 += 1;
    }
}

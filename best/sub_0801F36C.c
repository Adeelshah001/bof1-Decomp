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

M2C_UNK sub_0800518C(s32, s32, s32);                /* extern */
M2C_UNK sub_0803D3B8(s32);                          /* extern */

void sub_0801F36C(void) {
    s8 temp_r4;
    u8 temp_r0;

    temp_r0 = *(u8 *)0x0300485C - 1;
    *(u8 *)0x0300485C = temp_r0;
    temp_r4 = (s8) temp_r0;
    if (temp_r4 == 0) {
        sub_0803D3B8(2);
        sub_0800518C(0, 0xD08, 0x63C);
        *(s8 *)0x03001698 = 8;
        *(s8 *)0x03001674 = 8;
        *(s8 *)0x0300166C = temp_r4;
        *(s8 *)0x030016A4 = temp_r4;
        *(u8 *)0x0300485B += 1;
    }
}

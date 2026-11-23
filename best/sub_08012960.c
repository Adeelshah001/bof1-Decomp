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
M2C_UNK sub_08012B84();                             /* extern */
M2C_UNK sub_0802FD60(s32);                          /* extern */

void sub_08012960(void) {
    sub_0800518C(0x15D, 0xC78, 0xFFFFA53C);
    *(s8 *)0x03001698 = 8;
    *(s8 *)0x03001674 = 8;
    *(s8 *)0x0300166C = 0x20;
    *(s8 *)0x030016A4 = 0x20;
    sub_08012B84();
    sub_0802FD60(0x30);
    *(s8 *)0x0300486F = 0;
    *(s16 *)0x03004E18 = 0;
    *(s16 *)0x03004E08 = 0;
    *(s16 *)0x03004E14 = 0;
    *(s16 *)0x03004E0C = 0;
    *(s8 *)0x0300485C = 0x20;
    *(u8 *)0x0300485B += 1;
}

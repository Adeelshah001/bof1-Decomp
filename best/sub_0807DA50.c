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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_080017EC(s32);                          /* extern */
M2C_UNK sub_08033AF4(s32);                          /* extern */

void sub_0807DA50(s32 arg0) {
    if ((arg0 << 0x18) != 0) {
        *(s16 *)0x0202DE60 = 0x84;
        M2C_FIELD((void *)0x0202DBD0, s16 *, 0x16) = 0x1728;
        M2C_FIELD((void *)0x0202DBD0, s16 *, 0x1A) = 0x4A9C;
        M2C_FIELD((void *)0x0202DBD0, s8 *, 0x2B9) = 0;
        if ((sub_08001770(0x39) << 0x18) != 0) {
            sub_08033AF4(7);
        }
        *(s8 *)0x03004584 = 1;
        sub_08002BBC(*(u8 *)0x03004FAB);
        return;
    }
    M2C_FIELD((void *)0x0202DBD0, s16 *, 6) = 0x10F8;
    M2C_FIELD((void *)0x0202DBD0, s16 *, 0xA) = 0x4BCC;
    M2C_FIELD((void *)0x0202DBD0, s8 *, 0x2AC) = 0;
    sub_080017EC(0x3A);
}

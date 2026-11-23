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

M2C_UNK sub_08001888(s32);                          /* extern */

void sub_0807DF40(s32 arg0) {
    if ((arg0 << 0x18) != 0) {
        sub_08001888(0xCA);
        *(u8 *)0x03002B68 &= 0xFB;
        *(s8 *)0x03004584 = 1;
        sub_08002BBC(*(u8 *)0x03004FAB);
        return;
    }
    M2C_FIELD((void *)0x0202DBD0, s16 *, 6) = 0x978;
    M2C_FIELD((void *)0x0202DBD0, s16 *, 0xA) = 0xE98C;
    M2C_FIELD((void *)0x0202DBD0, s16 *, 0x284) = 0x1A9;
    *(s8 *)0x0300485A = 0x13;
    *(s8 *)0x0300485B = 0;
    M2C_FIELD((void *)0x0202DBD0, s8 *, 0x2AC) = 0;
    *(u8 *)0x03003418 |= 0x40;
}

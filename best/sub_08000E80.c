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

void sub_08000E80(void) {
    s32 temp_r4;

    *(s8 *)0x030043D8 = 0;
    if (*(s32 *)0x03001694 & 1) {
        temp_r4 = *(s32 *)0x03004758;
        M2C_FIELD((void *)0x040000D4, s32 *, 0) = temp_r4;
        M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) ((*(u8 *)0x0300418C << 5) + 0x05000000);
        M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((u16) *(u16 *)0x03004EA0 >> 2) | 0x84000000);
        if (*(u16 *)0x03004EA0 != 0x400) {
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (temp_r4 + 0x100);
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x05000200;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x84000040;
        }
        *(s32 *)0x03001694 &= ~1;
    }
}

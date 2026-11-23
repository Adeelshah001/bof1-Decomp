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

void sub_08000DF4(void) {
    if (((u32) *(u16 *)0x04000006 <= 0x9FU) && !(*(s32 *)0x03001694 & 0x400)) {
        *(s32 *)0x03001694 |= 0x400;
        if (*(u8 *)0x03004E94 != 0) {
            M2C_FIELD((void *)0x040000D4, s32 *, 0) = (s32) (*(u16 *)0x03001778 + 0x02011DA0);
            M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) *(s32 *)0x03004E8C;
            M2C_FIELD((void *)0x040000D4, s32 *, 8) = (s32) (((u8) *(u8 *)0x03004E94 >> 1) | 0x80000000);
            *(u16 *)0x03001778 += *(u8 *)0x03004E94;
        }
        *(s32 *)0x03001694 &= 0xFFFFFBFF;
        *(s16 *)0x03007FF8 = 2;
    }
}

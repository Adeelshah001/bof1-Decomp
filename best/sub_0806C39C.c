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

M2C_UNK sub_080739D0(s32);                          /* extern */

void sub_0806C39C(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    s32 temp_r5_2;

    temp_r5 = arg1 + 1;
    temp_r0 = arg0 * 2;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08150DCA;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (M2C_FIELD((void *)0x08150C68, s32 *, 4) * arg1 * 2) + temp_r0);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000007;
    sub_080739D0(0);
    temp_r5_2 = temp_r5 + 1;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08150DD8;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000007;
    sub_080739D0(0);
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08150DE6;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + (temp_r5_2 * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000007;
    sub_080739D0(0);
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08150DF4;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = (s32) (M2C_FIELD((void *)0x08150C68, s32 *, 0) + ((temp_r5_2 + 1) * M2C_FIELD((void *)0x08150C68, s32 *, 4) * 2) + temp_r0);
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000007;
    sub_080739D0(0);
}

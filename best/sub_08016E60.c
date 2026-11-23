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

void *sub_0803ED98();                               /* extern */

void sub_08016E60(void) {
    void *temp_r0;
    void *temp_r1;

    temp_r0 = sub_0803ED98();
    *(void **)0x03004154 = temp_r0;
    M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
    M2C_FIELD(*(void **)0x03004154, s8 *, 0x3C) = 0x12;
    M2C_FIELD(*(void **)0x03004154, s8 *, 0x3B) = 0x11;
    temp_r1 = *(void **)0x03004154;
    M2C_FIELD(temp_r1, s16 *, 2) = 0x158;
    M2C_FIELD(temp_r1, s16 *, 6) = 0x37AC;
    M2C_FIELD(temp_r1, s16 *, 0x2C) = 0x37AC;
    *(s8 *)0x0300485C = 0x14;
    *(u8 *)0x0300485B += 1;
}

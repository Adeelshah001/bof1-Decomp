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

M2C_UNK sub_080379D4(s32);                          /* extern */
void *sub_0803ED98();                               /* extern */

void sub_0800BA48(void) {
    void *temp_r0;
    void *temp_r1;

    sub_080379D4(6);
    temp_r0 = sub_0803ED98();
    *(void **)0x03004154 = temp_r0;
    M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
    M2C_FIELD(*(void **)0x03004154, s8 *, 0x40) = 1;
    temp_r1 = *(void **)0x03004154;
    M2C_FIELD(temp_r1, s16 *, 2) = 0xE18;
    M2C_FIELD(temp_r1, s16 *, 6) = 0xFD88;
    M2C_FIELD(temp_r1, s16 *, 0x2C) = 0xFDA8;
    M2C_FIELD(temp_r1, s8 *, 0x61) = 8;
    M2C_FIELD(*(void **)0x03004154, s8 *, 0x3C) = 0xB;
    M2C_FIELD(*(void **)0x03004154, s8 *, 0x3B) = 0;
    M2C_FIELD(*(void **)0x03004154, s8 *, 0x54) = 0x2A;
    *(s8 *)0x0300485C = 0x28;
    *(u8 *)0x0300485B += 1;
}

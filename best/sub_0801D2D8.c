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

void sub_0801D2D8(void) {
    void *temp_r0;
    void *temp_r2;

    temp_r0 = sub_0803ED98();
    *(void **)0x03004154 = temp_r0;
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
        M2C_FIELD(*(void **)0x03004154, s8 *, 0x3C) = 0x14;
        M2C_FIELD(*(void **)0x03004154, s8 *, 0x3B) = 8;
        temp_r2 = *(void **)0x03004154;
        M2C_FIELD(temp_r2, s32 *, 0x10) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x10) & 0xFF000000) | 0x90000);
        M2C_FIELD(temp_r2, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x14) & 0xFF000000) | 0xE9F000);
        *(void **)0x03004448 = temp_r2;
        *(u8 *)0x0300485B += 1;
    }
}

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

void sub_08005A38(void) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    if ((u32) *(u16 *)0x030040E0 <= 0x212BU) {
        temp_r0 = sub_0803ED98();
        *(void **)0x03000840 = temp_r0;
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s8 *, 0x3B) = 0xE;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3E) = 0;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3A) = 1;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3C) = 0x12;
            M2C_FIELD(*(void **)0x03000840, s32 *, 0xD4) = 0;
        }
        temp_r0_2 = sub_0803ED98();
        *(void **)0x03000840 = temp_r0_2;
        if (temp_r0_2 != NULL) {
            M2C_FIELD(temp_r0_2, s8 *, 0x3B) = 0xF;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3E) = 0;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3A) = 1;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3C) = 0x12;
            M2C_FIELD(*(void **)0x03000840, s32 *, 0xD4) = 0;
        }
        temp_r0_3 = sub_0803ED98();
        *(void **)0x03000840 = temp_r0_3;
        if (temp_r0_3 != NULL) {
            M2C_FIELD(temp_r0_3, s8 *, 0x3B) = 0x10;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3E) = 0;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3A) = 1;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3C) = 0x12;
            M2C_FIELD(*(void **)0x03000840, s32 *, 0xD4) = 0;
        }
        *(u8 *)0x0300485B += 1;
    }
}

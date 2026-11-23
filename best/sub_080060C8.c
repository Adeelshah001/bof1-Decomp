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

M2C_UNK sub_0803ADA8(s32);                          /* extern */
void *sub_0803ED98();                               /* extern */
M2C_UNK sub_0803EE88(s32);                          /* extern */
M2C_UNK sub_08072CC4(s32);                          /* extern */

void sub_080060C8(void) {
    u8 temp_r4;
    void *temp_r0;

    sub_08072CC4(0x801);
    temp_r4 = *(u8 *)0x03004584;
    if (temp_r4 == 0) {
        sub_0803EE88(0x03003420);
        sub_0803ADA8(1);
        temp_r0 = sub_0803ED98();
        *(void **)0x03000840 = temp_r0;
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, u8 *, 0x3B) = temp_r4;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3C) = 7;
            M2C_FIELD(*(void **)0x03000840, s8 *, 0x3A) = 1;
        }
        *(s32 *)0x03002B44 = 0x80CD;
        *(s32 *)0x03002B40 = 0x80CD;
        *(s8 *)0x030023D0 = 2;
        *(s16 *)0x03004114 = 1;
        *(u8 *)0x0300485B += 1;
    }
}

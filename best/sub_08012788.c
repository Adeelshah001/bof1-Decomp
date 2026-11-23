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

u8 sub_08001770(s32);                               /* extern */
M2C_UNK sub_08001888(s32);                          /* extern */
M2C_UNK sub_080073C8(s32);                          /* extern */
M2C_UNK sub_0803EE88(s32);                          /* extern */

void sub_08012788(void) {
    u8 temp_r4;

    temp_r4 = sub_08001770(0x8E);
    if (temp_r4 != 0) {
        if (((sub_08001770(0x9C) << 0x18) != 0) && ((sub_08001770(0x94) << 0x18) == 0)) {
            sub_080073C8(0x2D);
        }
    } else if ((sub_08001770(0x8A) << 0x18) != 0) {
        *(u8 *)0x0300485A = temp_r4;
        *(u8 *)0x0300485B = temp_r4;
        if (*(u16 *)0x03002488 != 0x9B) {
            sub_08001888(0x8D);
            goto block_8;
        }
        if ((sub_08001770(0x8D) << 0x18) == 0) {
block_8:
            sub_0803EE88(0x03003420);
            return;
        }
        if (M2C_FIELD((void *)0x03002AB0, u16 *, 6) != 0xCBC) {
            sub_08001888(0x8D);
            sub_0803EE88(0x03003420);
        }
    }
}

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

void sub_0809177C(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;
    u8 temp_r0_4;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if (temp_r0 & 0x80) {
        M2C_FIELD(arg0, u8 *, 0x54) = 3U;
        temp_r0_2 = *(s32 *)0x030040F0 + 1;
        if ((u32) temp_r0_2 > 0x18U) {
            M2C_FIELD(arg0, s8 *, 0x4C) = 6;
            M2C_FIELD(arg0, u8 *, 0x54) = 0x94U;
            M2C_FIELD((arg0 + 0x4C), s8 *, 9) = 2;
            return;
        }
        *(s32 *)0x030040F0 = (s32) temp_r0_2;
        temp_r0_3 = *(s32 *)0x03003FB0 + 1;
        if ((u32) temp_r0_3 <= 0x10U) {
            *(s32 *)0x03003FB0 = (s32) temp_r0_3;
            temp_r0_4 = *(s32 *)0x03002500 + 1;
            if ((u32) temp_r0_4 <= 4U) {
                *(s32 *)0x03002500 = (s32) temp_r0_4;
            }
        }
    }
}

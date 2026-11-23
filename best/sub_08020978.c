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

void sub_08020978(void) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;

    *(s8 *)0x030033D8 = 2;
    M2C_FIELD((void *)0x0300485A, s8 *, 0) = 0;
    temp_r0 = (void *)0x0300485A + 1;
    M2C_FIELD((void *)0x0300485A, s8 *, 1) = 0;
    temp_r0_2 = temp_r0 + 1;
    M2C_FIELD(temp_r0, s8 *, 1) = 0;
    temp_r0_3 = temp_r0_2 + 1;
    M2C_FIELD(temp_r0_2, s8 *, 1) = 0;
    temp_r0_4 = temp_r0_3 + 0x12;
    M2C_FIELD(temp_r0_3, s8 *, 0x12) = 0;
    temp_r0_5 = temp_r0_4 + 1;
    M2C_FIELD(temp_r0_4, s8 *, 1) = 0;
    M2C_FIELD(temp_r0_5, s8 *, 1) = 0;
    M2C_FIELD((temp_r0_5 + 1), s8 *, 1) = 0;
    *(s8 *)0x0202DE7E = 0;
    *(s8 *)0x0202DE7F = 0;
    *(s8 *)0x0202DE80 = 0;
    *(s8 *)0x0202DE81 = 0;
    *(s8 *)0x0202E066 = 0;
    *(s8 *)0x0202E067 = 0;
    *(s8 *)0x0202E068 = 0;
    *(s8 *)0x0202E069 = 0;
    *(s16 *)0x03001670 = 0;
    *(s8 *)0x03004861 = 0;
    *(s16 *)0x03002508 = 0;
    **(s8 **)0x0300340C = 0;
    *(u8 *)0x030016E0 -= 1;
    *(s32 *)0x03002B38 = 0;
}

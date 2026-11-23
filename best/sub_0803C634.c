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

void sub_0803C634(void) {
    u8 temp_r1;

    temp_r1 = *(u8 *)0x030040EC;
    if (temp_r1 == 0) {
        *(s16 *)0x0300168C = (s16) temp_r1;
    }
    *(s16 *)0x030016A8 = 0;
    *(s16 *)0x03001620 = 0x4405;
    *(s16 *)0x03001640 = 0x4605;
    *(s16 *)0x030016D0 = 0x4007;
    *(s16 *)0x03001678 = 0x4207;
    *(s16 *)0x03001670 = 0;
}

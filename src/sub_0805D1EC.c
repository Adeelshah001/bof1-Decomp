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

void sub_0805D1EC(void *arg0) {
    u16 temp_r1;
    u16 temp_r1_2;
    u16 temp_r1_3;
    u16 temp_r1_4;
    u16 temp_r1_5;
    u16 temp_r1_6;

    temp_r1 = 0xF00 & M2C_FIELD(arg0, u16 *, 0x112);
    if (temp_r1 == 0) {
        M2C_FIELD(arg0, u16 *, 0x112) = temp_r1;
    }
    temp_r1_2 = 0xF00 & M2C_FIELD(arg0, u16 *, 0x114);
    if (temp_r1_2 == 0) {
        M2C_FIELD(arg0, u16 *, 0x114) = temp_r1_2;
    }
    temp_r1_3 = 0xF00 & M2C_FIELD(arg0, u16 *, 0x116);
    if (temp_r1_3 == 0) {
        M2C_FIELD(arg0, u16 *, 0x116) = temp_r1_3;
    }
    temp_r1_4 = 0xF00 & M2C_FIELD(arg0, u16 *, 0x118);
    if (temp_r1_4 == 0) {
        M2C_FIELD(arg0, u16 *, 0x118) = temp_r1_4;
    }
    temp_r1_5 = 0xF00 & M2C_FIELD(arg0, u16 *, 0xEC);
    if (temp_r1_5 == 0) {
        M2C_FIELD(arg0, u16 *, 0xEC) = temp_r1_5;
    }
    temp_r1_6 = 0xF00 & M2C_FIELD(arg0, u16 *, 0xEE);
    if (temp_r1_6 == 0) {
        M2C_FIELD(arg0, u16 *, 0xEE) = temp_r1_6;
    }
}

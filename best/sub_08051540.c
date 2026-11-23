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

extern M2C_UNK sub_080532B0;

void sub_08051540(void *arg0) {
    s32 temp_r1_2;
    s32 temp_r1_3;
    u8 temp_r1;
    u8 temp_r2;

    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s16 *, 0x16) = 0;
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x61);
    temp_r2 = 0x40 & temp_r1;
    if (temp_r2 != 0) {
        M2C_FIELD(arg0, s16 *, 0x10) = (s16) ((0x3F & temp_r1) << 8);
        M2C_FIELD(arg0, s16 *, 0x14) = 0;
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_080532B0;
        if (0x80 & M2C_FIELD(arg0, u8 *, 0x61)) {
            goto block_4;
        }
    } else {
        M2C_FIELD(arg0, s16 *, 0x14) = (s16) ((0x3F & temp_r1) << 8);
        M2C_FIELD(arg0, s16 *, 0x10) = (s16) temp_r2;
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_080532B0;
        if (!(0x80 & M2C_FIELD(arg0, u8 *, 0x61))) {
block_4:
            temp_r1_2 = (s32) M2C_FIELD(arg0, s16 *, 0x10);
            M2C_FIELD(arg0, s16 *, 0x10) = (s32) ((temp_r1_2 & 0xFF000000) | (((u32) (~((u32) (temp_r1_2 & 0xFFFFFF) >> 8) << 0x10) >> 8) + 0x100));
            temp_r1_3 = (s32) M2C_FIELD(arg0, s16 *, 0x14);
            M2C_FIELD(arg0, s16 *, 0x14) = (s32) ((temp_r1_3 & 0xFF000000) | (((u32) (~((u32) (temp_r1_3 & 0xFFFFFF) >> 8) << 0x10) >> 8) + 0x100));
        }
    }
}

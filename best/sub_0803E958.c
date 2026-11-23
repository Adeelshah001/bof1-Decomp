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

void *sub_0803EDDC(u16);                            /* extern */
extern M2C_UNK sub_080447CC;

void sub_0803E958(u16 arg0, u16 arg1) {
    s16 temp_r0_2;
    u16 temp_r6;
    u8 temp_r1;
    void *temp_r0;
    void *temp_r1_2;

    temp_r6 = arg1;
    temp_r0 = sub_0803EDDC(*(u16 *)0x03002480);
    if (temp_r0 != NULL) {
        temp_r1 = arg0 & 0x1F;
        M2C_FIELD(temp_r0, u8 *, 0x3B) = temp_r1;
        if (0x10 & temp_r1) {
            *(u8 *)0x03001850 += 1;
            M2C_FIELD(temp_r0, u8 *, 0x3B) = (u8) (0xF & M2C_FIELD(temp_r0, u8 *, 0x3B));
        }
        M2C_FIELD(temp_r0, u8 *, 0x5C) = (u8) *(u8 *)0x03001850;
        M2C_FIELD(temp_r0, s8 *, 0x3C) = 1;
        temp_r1_2 = (temp_r0 + 0x3C) - 2;
        M2C_FIELD(temp_r1_2, s8 *, 0) = 1;
        M2C_FIELD(temp_r0, M2C_UNK **, 0x64) = &sub_080447CC;
        M2C_FIELD(temp_r1_2, s8 *, 6) = (s8) (temp_r6 & 1);
        M2C_FIELD(temp_r0, s16 *, 2) = (s16) ((((u32) (arg0 << 0x10) >> 0x12) & 0x1FF0) | 8);
        temp_r0_2 = (0xFFF0 & temp_r6) | 8;
        M2C_FIELD(temp_r0, s16 *, 6) = temp_r0_2;
        M2C_FIELD(temp_r0, s16 *, 0x2C) = temp_r0_2;
    }
}

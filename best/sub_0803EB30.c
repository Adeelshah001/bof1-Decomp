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
extern M2C_UNK sub_08048778;
extern M2C_UNK sub_08050748;

void sub_0803EB30(u16 arg0, u16 arg1) {
    M2C_UNK *var_r0;
    s16 temp_r0_3;
    s8 temp_r0_2;
    u16 temp_r5;
    u16 temp_r6;
    void *temp_r0;

    temp_r5 = arg0;
    temp_r6 = arg1;
    temp_r0 = sub_0803ED98();
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
        M2C_FIELD(temp_r0, s8 *, 0x3B) = (s8) (temp_r5 & 0x1F);
        temp_r0_2 = ((u32) (arg1 << 0x10) >> 0x11) & 7;
        M2C_FIELD(temp_r0, s8 *, 0x3C) = temp_r0_2;
        if (temp_r0_2 != 2) {
            M2C_FIELD(temp_r0, s8 *, 0x3C) = 0x19;
            var_r0 = &sub_08050748;
        } else {
            var_r0 = &sub_08048778;
        }
        M2C_FIELD(temp_r0, M2C_UNK **, 0x64) = var_r0;
        M2C_FIELD(temp_r0, s8 *, 0x40) = (s8) (temp_r6 & 1);
        M2C_FIELD(temp_r0, s16 *, 2) = (s16) (((temp_r5 >> 2) & 0x1FF0) | 8);
        temp_r0_3 = (0xFFF0 & temp_r6) | 8;
        M2C_FIELD(temp_r0, s16 *, 6) = temp_r0_3;
        M2C_FIELD(temp_r0, s16 *, 0x2C) = temp_r0_3;
    }
}

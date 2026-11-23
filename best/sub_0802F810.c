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

s32 sub_08001770(s32);                              /* extern */
M2C_UNK sub_0803238C(M2C_UNK *, void *);            /* extern */
s32 sub_08032714(s32, s32, u16, u16);               /* extern */

s32 sub_0802F810(void *arg0, s8 *arg1, s16 *arg2) {
    M2C_UNK sp0;
    s16 var_r1;
    s32 var_r8;
    u16 temp_r1;

    var_r8 = 1;
    M2C_FIELD(&sp0, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(&sp0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 6);
    sub_0803238C(&sp0, &sp0 + 2);
    temp_r1 = *(u16 *)0x03002484;
    switch (temp_r1) {                              /* irregular */
    case 0x180:
        if (((sub_08001770(0xB2) << 0x18) != 0) && (((sub_08032714(0xBC8, 0xCBFC, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0) || ((sub_08032714(0xBC8, 0xCC0C, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0))) {
            *arg1 = 7;
            *arg2 = 0x218B;
            return 0;
        }
    default:
        return 1;
    case 0x0:
        if ((sub_08032714(0x5F8, 0x6FC, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0) {
            *arg1 = 8;
            var_r1 = 0x2154;
            goto block_18;
        }
        if ((sub_08032714(0x898, 0x57C, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0) {
            *arg1 = 9;
            var_r1 = 0x1105;
            goto block_18;
        }
        if ((sub_08032714(0xE18, 0x6DC, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0) {
            *arg1 = 0xA;
            var_r1 = 0x12C;
            goto block_18;
        }
        if ((sub_08032714(0xF98, 0x119C, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0) {
            *arg1 = 0xB;
            var_r1 = 0x218A;
            goto block_18;
        }
        if (((sub_08032714(0x3E8, 0x12AC, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0) || ((sub_08032714(0x3F8, 0x12AC, M2C_FIELD(&sp0, u16 *, 0), M2C_FIELD(&sp0, u16 *, 2)) << 0x18) == 0)) {
            *arg1 = 0xFF;
            var_r1 = 0x175;
block_18:
            *arg2 = var_r1;
            var_r8 = 0;
        }
        return var_r8;
    }
}

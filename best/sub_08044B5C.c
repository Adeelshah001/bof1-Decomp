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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0803EE38(void *);                       /* extern */
s32 sub_080448A4(void *, s32);                      /* extern */
extern M2C_UNK sub_08044D68;
extern M2C_UNK sub_08045504;

void sub_08044B5C(void *arg0) {
    u8 temp_r0;

    M2C_FIELD(arg0, s8 *, 0x3A) = 1;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0xC0;
    if ((sub_080448A4(arg0, 3) << 0x18) != 0) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 0x60);
        switch (temp_r0) {                          /* irregular */
        case 0:
            M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08045504;
            return;
        case 1:
            M2C_FIELD(arg0, u16 *, 2) = 0xFB8U;
            M2C_FIELD(arg0, u16 *, 6) = 0x5E8U;
block_13:
            M2C_FIELD(arg0, u16 *, 0x46) = (u16) M2C_FIELD(arg0, u16 *, 2);
            M2C_FIELD((arg0 + 0x46), s16 *, 4) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 4);
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
            M2C_FIELD(arg0, s8 *, 0x6C) = 0;
            goto block_14;
        case 2:
            M2C_FIELD(arg0, u16 *, 2) = 0xFF8U;
            M2C_FIELD(arg0, u16 *, 6) = 0x798U;
            goto block_13;
        case 3:
            M2C_FIELD(arg0, u16 *, 2) = 0xFE8U;
            M2C_FIELD(arg0, u16 *, 6) = 0x848U;
            goto block_13;
        default:
            sub_0803EE38(arg0);
            goto block_13;
        }
    } else {
block_14:
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08044D68;
        sub_0803A8EC(arg0);
    }
}

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

M2C_UNK sub_0807B248(void *);                       /* extern */
M2C_UNK sub_0807C814(void *);                       /* extern */
M2C_UNK sub_0807CF2C(void *);                       /* extern */
M2C_UNK sub_0807D760(void *);                       /* extern */

void sub_0807D708(void *arg0) {
    u8 temp_r0;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0x6C);
    if (0x80 & M2C_FIELD(temp_r2, u8 *, 0xF1)) {
        sub_0807CF2C(arg0);
        return;
    }
    temp_r0 = M2C_FIELD(temp_r2, u8 *, 0x4D);
    if (temp_r0 == 6) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 3;
        sub_0807C814(arg0);
        return;
    }
    if ((u32) temp_r0 <= 5U) {
        sub_0807B248(arg0);
    }
    if ((u32) M2C_FIELD(arg0, u8 *, 0x70) > 2U) {
        sub_0807D760(arg0);
    }
}

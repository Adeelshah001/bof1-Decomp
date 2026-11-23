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
void *sub_0803EDDC(u16);                            /* extern */
extern M2C_UNK sub_080553E0;

void sub_0803F910(u16 arg0, s32 arg1, u16 arg2) {
    void *temp_r0;
    void *temp_r0_2;
    void *var_r4;

    var_r4 = NULL;
    if (((((u32) (arg1 << 0x10) >> 0x11) & 7) != 1) || ((7 & arg0) != 2)) {
        temp_r0 = sub_0803EDDC(*(u16 *)0x03002480);
        if (temp_r0 != NULL) {
            var_r4 = temp_r0;
            M2C_FIELD(var_r4, M2C_UNK **, 0x64) = &sub_080553E0;
            M2C_FIELD(var_r4, s8 *, 0x5D) = 0;
        }
    } else {
        temp_r0_2 = sub_0803ED98();
        if (temp_r0_2 != NULL) {
            var_r4 = temp_r0_2;
            M2C_FIELD(temp_r0_2, s8 *, 0x5D) = 0;
            M2C_FIELD(var_r4, M2C_UNK **, 0x64) = &sub_080553E0;
        }
    }
    M2C_FIELD(var_r4, s8 *, 0x3A) = 1;
    M2C_FIELD(var_r4, u16 *, 0x2A) = arg2;
}

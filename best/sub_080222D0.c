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

void sub_080222D0(void) {
    s8 var_r4;
    u16 temp_r1;
    void *temp_r0;
    void *temp_r1_2;
    void *temp_r1_3;

    var_r4 = 0;
    temp_r0 = sub_0803ED98();
    if (temp_r0 != NULL) {
        temp_r1 = M2C_FIELD((void *)0x03002AB0, u16 *, 2);
        if (temp_r1 != 0x1168) {
            if (temp_r1 == 0x11A8) {
                var_r4 = 2;
            } else {
                var_r4 = 3;
                if (M2C_FIELD((void *)0x03002AB0, u16 *, 6) == 0x108C) {
                    var_r4 = 1;
                }
            }
        }
    }
    M2C_FIELD(temp_r0, s8 *, 0x61) = var_r4;
    temp_r1_2 = temp_r0 + 0x3A;
    M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
    M2C_FIELD(temp_r1_2, s8 *, 2) = 0x14;
    temp_r1_3 = (temp_r1_2 + 2) - 1;
    M2C_FIELD(temp_r1_3, s8 *, 0) = 0x18;
    M2C_FIELD(temp_r1_3, s8 *, 0x19) = 0x10;
    *(u8 *)0x03004870 += 1;
}

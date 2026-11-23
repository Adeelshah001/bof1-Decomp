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

M2C_UNK sub_08038264(void *);                       /* extern */
M2C_UNK sub_0809A1B4(void *);                       /* extern */

void sub_08099EB4(void *arg0) {
    u8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u8 *, 0x7D);
    if (temp_r1 != 7) {
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), u8 *, 0x3A) != 0) {
            if (temp_r1 != 0) {
                sub_08038264(arg0);
            }
        } else {
            goto block_7;
        }
    } else {
        sub_08038264(arg0);
        if (((u32) ((u32) (M2C_FIELD(arg0, s32 *, 0x44) << 8) >> 0x10) < (u32) M2C_FIELD(arg0, u16 *, 2)) && (M2C_FIELD(arg0, u8 *, 0x7D) != 0)) {
            sub_08038264(arg0);
        }
block_7:
        sub_0809A1B4(arg0);
    }
}

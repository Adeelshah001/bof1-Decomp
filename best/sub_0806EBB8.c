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

M2C_UNK sub_08000248(s32);                          /* extern */
M2C_UNK sub_08003378(s32);                          /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_08074A00(void *, s32);                  /* extern */

void sub_0806EBB8(void *arg0) {
    u8 temp_r1;
    void *temp_r2;

    sub_080379D4(0xF0);
    sub_08000248(1);
    sub_08003378(0x25);
    sub_08000248(1);
    M2C_FIELD(arg0, u8 *, 0x61) = (u8) (0xF & M2C_FIELD(arg0, u8 *, 0x61));
loop_1:
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x61) - 1;
    if ((u32) temp_r1 <= 3U) {
        M2C_FIELD(arg0, s8 *, 0x5B) = 1;
        sub_08074A00(arg0, 0x72A);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x61) = temp_r1;
    temp_r2 = (temp_r1 * 0x124) + 0x03002AB0;
    if ((M2C_FIELD(temp_r2, u8 *, 0x3A) != 0) && !(M2C_FIELD(temp_r2, u8 *, 0xF0) & 0x40) && !(M2C_FIELD(temp_r2, u8 *, 0xF1) & 0x80)) {
        M2C_FIELD(arg0, s8 *, 0x5B) = 2;
        sub_08074A00(arg0, 0x77A);
        return;
    }
    goto loop_1;
}

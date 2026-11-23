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

M2C_UNK sub_080741B4(void *, void *);               /* extern */
M2C_UNK sub_08074210(void *);                       /* extern */
M2C_UNK sub_08074290(void *);                       /* extern */
M2C_UNK sub_080742F8(void *, void *);               /* extern */

void sub_0806DDFC(void *arg0, void *arg1) {
    s32 temp_r1;
    u32 var_r3;
    u8 temp_r3;

    M2C_FIELD(arg1, s8 *, 0x4D) = 2;
    M2C_FIELD(arg0, s8 *, 0x5D) = 2;
    M2C_FIELD(arg1, s8 *, 0xE3) = 0;
    if (!(M2C_FIELD(arg1, u8 *, 0x7D) & 0xF)) {
        sub_080741B4(arg0, arg1);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x58) = 2;
    var_r3 = 0xF & M2C_FIELD(arg1, u8 *, 0xE2);
    if (var_r3 > 3U) {
        var_r3 = 0;
    }
    temp_r1 = (var_r3 * 0x124) + 0x03002AB0;
    M2C_FIELD(arg0, s32 *, 0x54) = temp_r1;
    M2C_FIELD(arg1, s32 *, 0x78) = temp_r1;
    temp_r3 = M2C_FIELD(arg1, u8 *, 0xE0);
    if (temp_r3 == 8) {
        sub_08074210(arg0);
        return;
    }
    if (temp_r3 == 0xC) {
        sub_08074290(arg0);
        return;
    }
    sub_080742F8(arg0, arg1);
}

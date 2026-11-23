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

M2C_UNK sub_08005140(void *, s32);                  /* extern */
M2C_UNK sub_0800D2BC();                             /* extern */
M2C_UNK sub_0803EE88(s32);                          /* extern */

void sub_0800C454(void *arg0) {
    s32 var_r1;
    s8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    temp_r0 = (s8) *(u8 *)0x0300485C;
    if (temp_r0 == 0) {
        var_r1 = 0x8158;
        goto block_9;
    }
    if (temp_r0 != 1) {
        temp_r0_2 = 0x80 & *(u8 *)0x03004573;
        if (temp_r0_2 == 0) {
            *(u8 *)0x0300485C = temp_r0_2;
            *(s16 *)0x030040F8 = 8;
            sub_0800D2BC();
            sub_0803EE88(0x030037A0);
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 2);
            return;
        }
        temp_r0_3 = *(u8 *)0x0300485C + 1;
        *(u8 *)0x0300485C = temp_r0_3;
        if ((s8) temp_r0_3 == 5) {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 0x22);
            *(s32 *)0x03003708 += 0x1C;
            *(s32 *)0x03003788 += 7;
            *(s8 *)0x0300485A = 9;
            *(s8 *)0x0300485B = 0;
            *(u8 *)0x0300485C = 0;
            return;
        }
        sub_08005140(arg0, 0x8174);
        return;
    }
    var_r1 = 0x8174;
block_9:
    sub_08005140(arg0, var_r1);
    *(u8 *)0x0300485C += 1;
}

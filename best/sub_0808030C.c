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

M2C_UNK sub_0806EDD0(void *, s32);                  /* extern */

void sub_0808030C(void *arg0) {
    u16 var_r0;
    u8 temp_r0;
    u8 temp_r0_2;
    void *var_r2;

    var_r0 = 8;
    do {
        var_r0 -= 1;
    } while (var_r0 != 0);
    var_r2 = (void *)0x03003420;
    M2C_FIELD(arg0, u8 *, 8) = (u8) M2C_FIELD(arg0, u8 *, 0xC);
    if ((*(u8 *)0x0300345A == 0) || (*(u8 *)0x03003511 & 0x80) || (temp_r0 = M2C_FIELD(arg0, u8 *, 8) - 1, M2C_FIELD(arg0, u8 *, 8) = temp_r0, ((temp_r0 & 0x80) == 0))) {
        do {
loop_5:
            var_r2 += 0x124;
            if (M2C_FIELD(var_r2, u8 *, 0x3A) == 0) {
                goto loop_5;
            }
            if (M2C_FIELD(var_r2, u8 *, 0xF1) & 0x80) {
                goto loop_5;
            }
            temp_r0_2 = M2C_FIELD(arg0, u8 *, 8) - 1;
            M2C_FIELD(arg0, u8 *, 8) = temp_r0_2;
        } while (!(temp_r0_2 & 0x80));
    }
    M2C_FIELD(arg0, void **, 0x54) = var_r2;
    *(s8 *)0x0300457C = 0xF;
    sub_0806EDD0(var_r2, -1);
    *(s8 *)0x03004754 = 0x80;
}

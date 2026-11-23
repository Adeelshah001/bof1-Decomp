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

M2C_UNK sub_0806BD58(s32, s32, s32, s32);           /* extern */

void sub_0806C03C(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r4;

    temp_r6 = arg1 + 2;
    temp_r5 = arg0 + 3;
    sub_0806BD58(0, temp_r5, temp_r6, 0x08150D8C);
    if (*(u8 *)0x03004FAE != 0) {
        var_r4 = temp_r6 + 2;
        sub_0806BD58(2, temp_r5, var_r4, 0x08150D9B);
    } else {
        var_r4 = temp_r6 + 2;
        sub_0806BD58(0, temp_r5, var_r4, 0x08150D9B);
    }
    temp_r4 = arg0 + 3;
    temp_r0 = temp_r6 + 4;
    sub_0806BD58(0, temp_r4, temp_r0, 0x08150D91);
    temp_r0_2 = temp_r6 + 6;
    sub_0806BD58(0, temp_r4, temp_r0_2, 0x08150D96);
    temp_r4_2 = arg0 + 1;
    sub_0806BD58(0, temp_r4_2, temp_r6, 0x08150DA0);
    sub_0806BD58(0, temp_r4_2, var_r4, 0x08150DA2);
    sub_0806BD58(0, temp_r4_2, temp_r0, 0x08150DA4);
    sub_0806BD58(0, temp_r4_2, temp_r0_2, 0x08150DA6);
    if (*(s32 *)0x03000F98 != 0) {
        temp_r4_3 = temp_r4_2 + 7;
        sub_0806BD58(0, temp_r4_3, temp_r6, 0x08150DA8);
        sub_0806BD58(0, temp_r4_3, var_r4, 0x08150DA2);
        sub_0806BD58(0, temp_r4_3, temp_r0, 0x08150DAA);
        sub_0806BD58(0, temp_r4_3, temp_r0_2, 0x08150DAE);
        return;
    }
    temp_r4_4 = arg0 + 8;
    sub_0806BD58(0, temp_r4_4, temp_r6, 0x08150DA8);
    sub_0806BD58(0, temp_r4_4, var_r4, 0x08150DA2);
    sub_0806BD58(0, temp_r4_4, temp_r0, 0x08150DAA);
    sub_0806BD58(0, temp_r4_4, temp_r0_2, 0x08150DAC);
}

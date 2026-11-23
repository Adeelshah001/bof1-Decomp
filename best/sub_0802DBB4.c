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

s32 sub_08001770(s32);                              /* extern */
s32 sub_08003104();                                 /* extern */
M2C_UNK sub_0800764C(s32);                          /* extern */
M2C_UNK sub_0802CCEC(void *);                       /* extern */
M2C_UNK sub_080327A4(void *, M2C_UNK *, void *);    /* extern */
s32 sub_08032928(void *);                           /* extern */
M2C_UNK sub_08032968(void *);                       /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
s32 sub_08037C98(void *, s32);                      /* extern */
void *sub_0803EDDC(u16);                            /* extern */
M2C_UNK sub_0805561C(u8);                           /* extern */
s32 sub_0805CF40(s32, M2C_UNK *);                   /* extern */
extern M2C_UNK sub_08046610;

void sub_0802DBB4(void *arg0) {
    M2C_UNK sp0;
    M2C_UNK sp4;
    u16 temp_r1;
    u16 temp_r2;
    u8 temp_r0;
    u8 var_r3;
    void *temp_r0_2;
    void *temp_r5;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        sub_0800764C(4);
        sub_080379D4(8);
    }
    if ((sub_08037C98(arg0, 1) << 0x10) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, void **, 0x98) != NULL) {
        sub_0802CCEC(arg0);
        M2C_FIELD(arg0, s8 *, 0x50) = 8;
        M2C_FIELD(arg0, u8 *, 0x54) = 0x32U;
        temp_r5 = M2C_FIELD(arg0, void **, 0x98);
        temp_r1 = M2C_FIELD(temp_r5, u16 *, 0x2A);
        if (((temp_r1 == 0xCC) || (temp_r1 == 0x126)) && ((0xF & M2C_FIELD(temp_r5, u8 *, 0x3C)) == 3)) {
            sub_0805561C(M2C_FIELD(temp_r5, u8 *, 0x5C));
        }
    } else {
        if (((M2C_FIELD(arg0, u16 *, 2) != M2C_FIELD(arg0, u16 *, 0x9E)) || (M2C_FIELD(arg0, u16 *, 6) != M2C_FIELD(arg0, u16 *, 0xA2))) && (*(u16 *)0x03002480 == 0) && ((sub_08032928(arg0) << 0x18) != 0)) {
            sub_080327A4(arg0, &sp0, &sp0 + 2);
            temp_r0_2 = sub_0803EDDC(*(u16 *)0x03002480);
            if (temp_r0_2 != NULL) {
                M2C_FIELD(temp_r0_2, u16 *, 2) = (u16) M2C_FIELD(&sp0, u16 *, 0);
                temp_r2 = M2C_FIELD(&sp0, u16 *, 2);
                M2C_FIELD(temp_r0_2, u16 *, 6) = temp_r2;
                var_r3 = M2C_FIELD(arg0, u8 *, 0x51);
                if ((M2C_FIELD(&sp0, u16 *, 0) == 0x348) && ((temp_r2 << 0x10) == 0x0E8C0000)) {
                    if (((sub_0805CF40(0x174, &sp4) << 0x18) != 0) && ((sub_08001770(0xBD) << 0x18) == 0)) {
                        var_r3 = 1;
                        goto block_19;
                    }
                    goto block_21;
                }
block_19:
                M2C_FIELD(temp_r0_2, u8 *, 0x3B) = var_r3;
                if ((var_r3 != 1) && !(3 & sub_08003104())) {
                    goto block_21;
                }
                M2C_FIELD(temp_r0_2, s8 *, 0x3A) = 1;
                M2C_FIELD(temp_r0_2, M2C_UNK **, 0x64) = &sub_08046610;
                M2C_FIELD(arg0, u16 *, 0x9E) = (u16) M2C_FIELD(arg0, u16 *, 2);
                M2C_FIELD(arg0, u16 *, 0xA2) = (u16) M2C_FIELD(arg0, u16 *, 6);
                goto block_23;
            }
block_23:
            M2C_FIELD(arg0, s8 *, 0x50) = 6;
            return;
        }
block_21:
        sub_08032968(arg0);
    }
}

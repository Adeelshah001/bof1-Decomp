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

M2C_UNK sub_080379D4(s32);                          /* extern */
u16 sub_08037C98(void *, s32);                      /* extern */
M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
extern M2C_UNK sub_0804FF90;

void sub_0804EE98(void *arg0) {
    s32 var_r2;
    u16 temp_r1;
    u16 temp_r5;
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r5 = sub_08037C98(arg0, 1);
    if (temp_r5 == 0) {
        sub_08037FC4(arg0, 8);
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804FF90;
        if (M2C_FIELD(arg0, u8 *, 0x54) != 0) {
            M2C_FIELD(arg0, u8 *, 0x54) = (u8) temp_r5;
            goto block_5;
        }
        goto block_10;
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54);
    if ((temp_r0 != 0) && (temp_r0_2 = temp_r0 - 1, M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2, ((temp_r0_2 << 0x18) == 0))) {
block_5:
        var_r2 = 0x2E;
        temp_r1 = *(u16 *)0x03002484;
        switch (temp_r1) {                          /* irregular */
        case 0x1A0:
            if (!(2 & M2C_FIELD(arg0, u8 *, 0x3A))) {
                goto block_10;
            }
        case 0x13C:
        case 0x11B:
        case 0x16B:
block_13:
            sub_080379D4(var_r2);
            sub_0803A8EC(arg0);
            return;
        default:
            var_r2 = 0x25;
            goto block_13;
        }
    } else {
block_10:
        sub_0803A8EC(arg0);
    }
}

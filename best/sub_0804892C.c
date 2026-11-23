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
u8 sub_08003104();                                  /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */
M2C_UNK sub_08049C40(void *, s32, s32);             /* extern */
M2C_UNK sub_08049E88(void *);                       /* extern */
extern M2C_UNK sub_08048EF4;

void sub_0804892C(void *arg0) {
    u8 temp_r2;
    u8 var_r1;

    if (((sub_08001770(0x75) << 0x18) != 0) || ((sub_08001770(0x60) << 0x18) == 0)) {
        temp_r2 = M2C_FIELD(arg0, u8 *, 2);
        M2C_FIELD(arg0, s16 *, 0x58) = (s16) temp_r2;
        if (0xFF00 & (u16) M2C_FIELD(arg0, u8 *, 2)) {
            M2C_FIELD(arg0, s16 *, 0x58) = (s16) (temp_r2 | 0xFF);
        }
        M2C_FIELD(arg0, u16 *, 0x5A) = (u16) M2C_FIELD(arg0, u16 *, 6);
        sub_08049E88(arg0);
        var_r1 = sub_08003104();
        if (var_r1 == 0) {
            var_r1 = 0xFF;
        }
        M2C_FIELD(arg0, u8 *, 0x54) = var_r1;
        M2C_FIELD((arg0 + 0x54), u8 *, 1) = var_r1;
        M2C_FIELD(arg0, s8 *, 0x3B) = 1;
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08048EF4;
        sub_08049C40(arg0, 0x40, 0x3E);
        return;
    }
    sub_0803EE6C(arg0);
}

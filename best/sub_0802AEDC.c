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

M2C_UNK sub_0802AFAC(void *, void *);               /* extern */

void sub_0802AEDC(void *arg0, void *arg1) {
    u16 temp_r1;
    u32 var_r1;
    u32 var_r2;

    temp_r1 = *(u16 *)0x03002484;
    switch (temp_r1) {                              /* irregular */
    case 0xB3:
        M2C_FIELD(arg0, u16 *, 6) = 0x7414U;
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + ((u32) M2C_FIELD(arg1, u32 *, 0x10) >> 1));
        return;
    case 0x188:
        if ((u32) M2C_FIELD((void *)0x03002AB0, u16 *, 6) > 0xC3FFU) {
            M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
            M2C_FIELD(arg0, s16 *, 2) = (s16) (M2C_FIELD(arg1, u16 *, 2) + 0x1000);
        } else {
            var_r1 = (u32) M2C_FIELD(arg1, u32 *, 0x10) >> 1;
            var_r2 = (u32) M2C_FIELD(arg1, u32 *, 0x14) >> 1;
            if (var_r1 & 0x40000000) {
                var_r1 |= 0x80000000;
            }
            if (var_r2 & 0x40000000) {
                var_r2 |= 0x80000000;
            }
            M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + var_r1);
            M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + var_r2);
            sub_0802AFAC(arg1, arg0);
        }
        M2C_FIELD(arg0, u8 *, 0x4B) = (u8) M2C_FIELD(arg1, u8 *, 0x4B);
        M2C_FIELD(arg0, u8 *, 0x4A) = (u8) M2C_FIELD(arg1, u8 *, 0x4A);
        return;
    }
}

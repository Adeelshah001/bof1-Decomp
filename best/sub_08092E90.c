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

M2C_UNK sub_08038128(void *, void *, s32, s32);     /* extern */
M2C_UNK sub_08038264();                             /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_080734EC(void *);                       /* extern */
void *sub_080969C8(void *);                         /* extern */
M2C_UNK sub_08096CD4(void *);                       /* extern */
M2C_UNK sub_08098294(void *, s32);                  /* extern */

void sub_08092E90(void *arg0) {
    s32 var_r2;
    u16 var_r0;
    u8 temp_r0;
    void *var_r1;

    sub_08038264();
    temp_r0 = 1 ^ M2C_FIELD(arg0, u8 *, 0x54);
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 != 0) || (sub_08038128(arg0, M2C_FIELD(arg0, void **, 0x6C), 0, 0x10), ((0xF0 & M2C_FIELD(arg0, u8 *, 0x61)) == ((u16) M2C_FIELD(arg0, u16 *, 0x44) >> 8)))) {
        var_r2 = 0x50;
        if (M2C_FIELD(arg0, u16 *, 0x2A) == 0x18E) {
            var_r2 = 0x70;
        }
        M2C_FIELD(arg0, s16 *, 0x2C) = (s16) (var_r2 + M2C_FIELD(arg0, u16 *, 6));
        sub_0803A8EC(arg0);
        return;
    }
    sub_08098294(arg0, M2C_FIELD(arg0, s32 *, 0x78));
    if (*(u16 *)0x03004F90 != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x3B) == 0x2D) {
            var_r1 = sub_080969C8(arg0);
        } else {
            var_r1 = M2C_FIELD(arg0, void **, 0x6C);
            var_r0 = M2C_FIELD(var_r1, u16 *, 0xF6) + *(u16 *)0x03004F90;
            if ((u32) var_r0 >= (u32) M2C_FIELD(var_r1, u16 *, 0xF4)) {
                var_r0 = M2C_FIELD(var_r1, u16 *, 0xF4);
            }
            M2C_FIELD(var_r1, u16 *, 0xF6) = var_r0;
        }
        sub_080734EC(var_r1);
        *(s8 *)0x03004754 = 1;
    }
    sub_08096CD4(arg0);
}

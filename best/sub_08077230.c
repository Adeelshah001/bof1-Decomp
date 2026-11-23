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

M2C_UNK sub_08075D58(void *);                       /* extern */
M2C_UNK sub_080762E4(void *);                       /* extern */
M2C_UNK sub_080764B0(void *);                       /* extern */
M2C_UNK sub_08076520(void *);                       /* extern */
M2C_UNK sub_080770A8(void *);                       /* extern */
M2C_UNK sub_0807B454(void *);                       /* extern */
M2C_UNK sub_0807B46C(void *);                       /* extern */

void sub_08077230(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x50);
    switch (temp_r0) {                              /* irregular */
    case 0:
        sub_08075D58(arg0);
        return;
    case 2:
        sub_080762E4(arg0);
        return;
    case 4:
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
        if ((temp_r0_2 << 0x18) != 0) {
            sub_08076520(arg0);
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x50) = 6U;
        temp_r0_3 = M2C_FIELD(arg0, u8 *, 0xD8);
        if ((temp_r0_3 != 1) && (temp_r0_3 != 9)) {
            if (temp_r0_3 == 0x15) {
                sub_0807B454(arg0);
                return;
            }
            if ((u32) temp_r0_3 <= 0xAU) {
                sub_0807B46C(arg0);
                return;
            }
            goto block_17;
        }
block_17:
        sub_080764B0(arg0);
        return;
    case 6:
        sub_080770A8(arg0);
        return;
    }
}

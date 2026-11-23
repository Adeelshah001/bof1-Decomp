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

M2C_UNK sub_0801943C();                             /* extern */
M2C_UNK sub_080194A4();                             /* extern */
s32 sub_08038058(s32);                              /* extern */
void *sub_0803ED98();                               /* extern */

void sub_08022B98(void) {
    s8 temp_r0_2;
    s8 temp_r1;
    u8 temp_r2;
    void *temp_r0;

    if (*(u16 *)0x03002484 == 0x1A7) {
        if (((u32) (0x7F & *(u8 *)0x03004871) <= 2U) && ((sub_08038058(2) << 0x18) != 0)) {
            *(u8 *)0x03004871 += 1;
            temp_r0 = sub_0803ED98();
            if (temp_r0 != NULL) {
                M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
                M2C_FIELD(temp_r0, s8 *, 0x3C) = 0;
                temp_r0_2 = 7 & M2C_FIELD((void *)0x03004830, u8 *, 0x10);
                M2C_FIELD(temp_r0, s8 *, 0x80) = temp_r0_2;
                temp_r1 = temp_r0_2 & 1;
                M2C_FIELD(temp_r0, s8 *, 0x3B) = temp_r1;
                if (temp_r1 == 0) {
                    temp_r2 = *(u8 *)0x03004871;
                    if (0x80 & temp_r2) {
                        M2C_FIELD(temp_r0, s8 *, 0x3B) = (s8) (temp_r1 + 1);
                    } else {
                        *(u8 *)0x03004871 = 0x80 | temp_r2;
                    }
                }
            }
            if (((u32) M2C_FIELD((void *)0x03002AB0, u16 *, 6) <= 0x3EDBU) || ((u32) M2C_FIELD(((void *)0x03002AB0 + 0x36C), u16 *, 6) <= 0x3EDBU)) {
                sub_0801943C();
                return;
            }
            sub_080194A4();
        }
    } else {
        sub_080194A4();
        *(s8 *)0x0300486F = 0;
        *(s8 *)0x03004870 = 0;
    }
}

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
void *sub_0803ED98();                               /* extern */

void sub_08057410(void *arg0) {
    void *temp_r0;
    void *temp_r1;

    if ((s8) *(u8 *)0x03004861 == 3) {
        if (((sub_08001770(0x8F) << 0x18) == 0) && ((u32) M2C_FIELD((void *)0x03002AB0, u16 *, 6) <= 0x920FU)) {
            if (M2C_FIELD(arg0, u8 *, 0x4C) == 0) {
                temp_r0 = sub_0803ED98();
                if (temp_r0 != NULL) {
                    M2C_FIELD(arg0, void **, 0x18) = temp_r0;
                    M2C_FIELD(temp_r0, s8 *, 0x3C) = 0x14;
                    temp_r1 = (temp_r0 + 0x3C) - 1;
                    M2C_FIELD(temp_r1, s8 *, 0) = 2;
                    M2C_FIELD(temp_r1, s16 *, 0x7B) = 0x91A9;
                    M2C_FIELD(arg0, u8 *, 0x4C) = 1U;
                }
            }
        } else if (M2C_FIELD(arg0, u8 *, 0x4C) != 0) {
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), s8 *, 0x3B) = 0;
            M2C_FIELD(arg0, u8 *, 0x4C) = 0U;
        }
    }
    *(s8 *)0x0300487D = 0x20;
    if (((u32) M2C_FIELD((void *)0x03002AB0, u16 *, 6) <= 0x91DBU) && ((u32) M2C_FIELD((void *)0x03002AB0, u16 *, 2) <= 0x91CBU)) {
        *(s8 *)0x0300487D = 0x30;
    }
}

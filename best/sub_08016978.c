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

u8 sub_08001770(s32);                               /* extern */
M2C_UNK sub_08019B78(s32);                          /* extern */

void sub_08016978(void) {
    u8 temp_r2;

    if (((sub_08001770(0xA5) << 0x18) != 0) && ((sub_08001770(0xA6) << 0x18) != 0) && ((sub_08001770(0x100) << 0x18) == 0)) {
        M2C_FIELD((void *)0x030034A0, u16 *, 2) = (u16) (M2C_FIELD((void *)0x030034A0, u16 *, 2) - 0x10);
        M2C_FIELD((void *)0x030034A0, u16 *, 6) = (u16) (M2C_FIELD((void *)0x030034A0, u16 *, 6) + 0x10);
        M2C_FIELD((void *)0x030034A0, u8 *, 0x41) = (u8) ((0xF & M2C_FIELD((void *)0x030034A0, u8 *, 0x41)) | 0x20);
        return;
    }
    if (((sub_08001770(0xA5) << 0x18) != 0) && ((sub_08001770(0xA6) << 0x18) == 0)) {
        if ((sub_08001770(0xA5) << 0x18) != 0) {
            temp_r2 = sub_08001770(0xA6);
            if (temp_r2 == 0) {
                *(s8 *)0x03001698 = 8;
                *(s8 *)0x03001674 = 8;
                *(u8 *)0x0300166C = temp_r2;
                *(u8 *)0x030016A4 = temp_r2;
            }
        }
        sub_08019B78(7);
    }
}

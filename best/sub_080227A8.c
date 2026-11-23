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

void sub_080227A8(void) {
    u16 *var_r0;
    u16 var_r1;
    void *temp_r0;

    *(u8 *)0x03002B68 &= 0x7B;
    *(s8 *)0x0300486F = 0;
    *(s8 *)0x03004870 = 0;
    if (*(u16 *)0x03002484 == 0x1B2) {
        *(u16 *)0x03002676 = M2C_FIELD((void *)0x03002630, u16 *, 2);
        *(u16 *)0x03002706 = M2C_FIELD((void *)0x030026C0, u16 *, 2);
        *(s16 *)0x0300267A = (0xFFF0 & M2C_FIELD((void *)0x03002630, u16 *, 6)) | 0xC;
        var_r0 = (u16 *)0x0300270A;
        var_r1 = (0xFFF0 & M2C_FIELD((void *)0x030026C0, u16 *, 6)) | 0xC;
    } else {
        M2C_FIELD((void *)0x03002510, u16 *, 0x46) = (u16) M2C_FIELD((void *)0x03002510, u16 *, 2);
        temp_r0 = (void *)0x03002510 + 0x90;
        var_r1 = M2C_FIELD(temp_r0, u16 *, 2);
        var_r0 = temp_r0 + 0x46;
    }
    *var_r0 = var_r1;
}

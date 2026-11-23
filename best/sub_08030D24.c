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

M2C_UNK sub_08001F80(s32, s32, s32);                /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08030068(void *);                       /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */

s32 sub_08030D24(void *arg0) {
    void *temp_r2;

    if (*(u8 *)0x030023DC != 1) {
        M2C_FIELD(arg0, s8 *, 0xC5) = 0;
        *(s8 *)0x030033D8 = 0;
        sub_08030068(arg0);
        sub_0800312C(0x10, 0);
        sub_08001F80(0, 0, 0);
        temp_r2 = *(void **)0x0300458C;
        *(u16 *)0x030023D4 = M2C_FIELD(temp_r2, u16 *, 2);
        *(u16 *)0x030040E0 = M2C_FIELD(temp_r2, u16 *, 6);
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
        if (!(8 & M2C_FIELD(arg0, u8 *, 0xB8))) {
            sub_0803A8EC(arg0);
        }
    }
    return 0;
}

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

M2C_UNK sub_08001F80(s32, M2C_UNK *, s32);          /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
s32 sub_0802C0D0(void *, u16);                      /* extern */
extern M2C_UNK sub_08028400;

s32 sub_08036F68(void) {
    u16 temp_r5;
    u16 temp_r6;
    void *temp_r1;

    temp_r6 = *(u16 *)0x03002484;
    if ((sub_0802C0D0(*(void **)0x0300458C, temp_r6) << 0x18) != 0) {
        *(u8 *)0x030041A8 &= 0xFE;
        temp_r5 = *(u16 *)0x03002484;
        *(u16 *)0x03002484 = temp_r6;
        *(s8 *)0x030033D8 = 0;
        sub_0800312C(0x10, 0);
        sub_08001F80(1, &sub_08028400, 0x030023E0);
        *(u16 *)0x03002484 = temp_r5;
        *(s8 *)0x03001698 = 8;
        temp_r1 = *(void **)0x0300458C;
        M2C_FIELD((void *)0x03002AB0, s32 *, 0) = (s32) M2C_FIELD(temp_r1, s32 *, 0);
        M2C_FIELD((void *)0x03002AB0, s32 *, 4) = (s32) M2C_FIELD(temp_r1, s32 *, 4);
        *(s8 *)0x030040E4 = 0;
        *(u8 *)0x030041A8 |= 1;
        return 1;
    }
    return 0;
}

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

M2C_UNK sub_0802A02C(u16 *, u16);                   /* extern */
s32 sub_0802AA0C(void *, u8);                       /* extern */
M2C_UNK sub_0802ABCC(void *, u32);                  /* extern */
M2C_UNK sub_080575B8(void *);                       /* extern */

void sub_0802A96C(void *arg0, u8 arg1) {
    u16 *temp_r0;

    M2C_FIELD(arg0, s8 *, 0x47) = 0;
    sub_080575B8(arg0);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 4);
    if (((sub_0802AA0C(arg0, arg1) << 0x18) != 0) && (*(u8 *)0x030040E4 == 0)) {
        sub_0802ABCC(arg0, (u32) (M2C_FIELD(arg0, u8 *, 0x4B) + M2C_FIELD(arg0, u8 *, 0x4A)) >> 2);
        *(s16 *)0x03004180 = *(u16 *)0x03004194 - 1;
        if ((*(u8 *)0x03002476 != 0) && (*(u8 *)0x0300419C == 0)) {
            sub_0802ABCC((void *)0x03002430, (u32) (M2C_FIELD(arg0, u8 *, 0x4B) + M2C_FIELD(arg0, u8 *, 0x4A)) >> 2);
        }
        temp_r0 = *(u16 **)0x03004190;
        sub_0802A02C(temp_r0, *temp_r0);
    }
}

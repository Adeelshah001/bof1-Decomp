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

s32 sub_080003D8(M2C_UNK *, s32, s32);              /* extern */
M2C_UNK sub_08002728();                             /* extern */
M2C_UNK sub_0802AD94(u8);                           /* extern */
M2C_UNK sub_08039420();                             /* extern */
M2C_UNK sub_0803A9AC();                             /* extern */
M2C_UNK sub_08044740();                             /* extern */
M2C_UNK sub_080482EC();                             /* extern */
M2C_UNK sub_08058728(s32, s32);                     /* extern */
extern M2C_UNK sub_08057BB0;

void sub_08002820(void) {
    void *temp_r2;

    temp_r2 = *(void **)0x0300458C;
    *(u16 *)0x030023D4 = M2C_FIELD(temp_r2, u16 *, 2);
    *(u16 *)0x030040E0 = M2C_FIELD(temp_r2, u16 *, 6);
    *(s32 *)0x03004190 = 0x02005810;
    sub_08002728();
    sub_0803A9AC();
    sub_0802AD94(*(u8 *)0x03002B11);
    sub_080482EC();
    sub_08044740();
    sub_08039420();
    *(s16 *)0x03001864 = 0x17;
    *(s8 *)0x030023DC = 0;
    *(s32 *)0x03001694 |= 1;
    sub_08058728(2, sub_080003D8(&sub_08057BB0, 0x030016E0, 0xFF));
}

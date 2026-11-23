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

M2C_UNK _0803E7DC(u16);                             /* extern */
M2C_UNK sub_08000248(s32);                          /* extern */
M2C_UNK sub_080284C0(s32);                          /* extern */
M2C_UNK sub_08028770(s32);                          /* extern */
M2C_UNK sub_080291F4(u16);                          /* extern */
M2C_UNK sub_0802B648(s32);                          /* extern */
M2C_UNK sub_0802B700();                             /* extern */
M2C_UNK sub_0802B7B0();                             /* extern */
M2C_UNK sub_080358D4();                             /* extern */
u8 sub_08037754(u16);                               /* extern */
M2C_UNK sub_0803A80C();                             /* extern */
M2C_UNK sub_0803D454(u16);                          /* extern */
M2C_UNK sub_08040AA0();                             /* extern */
M2C_UNK sub_080446F4();                             /* extern */
M2C_UNK sub_08048228();                             /* extern */
M2C_UNK sub_080591F8();                             /* extern */
M2C_UNK sub_08069088();                             /* extern */

void sub_08002728(void) {
    s32 sp0;
    u8 temp_r1;

    *(s32 *)0x03004190 = 0x02005810;
    *(u8 *)0x030040E4 = 0;
    *(s8 *)0x030043F8 = 0;
    if (sub_08037754(*(u16 *)0x03002484) != 0xFF) {
        *(s8 *)0x030043F8 = 1;
    }
    sub_080284C0(0x030023E0);
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85004000;
    sub_0802B648(M2C_FIELD((void *)0x040000D4, s32 *, 8));
    sub_08000248(1);
    *(u8 *)0x030041A8 &= 0xFE;
    sub_0802B700();
    sub_08028770(0x030023E0);
    sub_080291F4(*(u16 *)0x03002484);
    sub_0802B7B0();
    sub_08069088();
    sub_0803A80C();
    sub_080591F8();
    if (*(u16 *)0x03002480 != 4) {
        sub_0803D454(*(u16 *)0x03002484);
    }
    sub_08048228();
    if (!(0x20 & *(u8 *)0x03003418)) {
        sub_080446F4();
    }
    sub_08040AA0();
    sub_080358D4();
    _0803E7DC(*(u16 *)0x03002484);
    *(u8 *)0x030041A8 |= 1;
    temp_r1 = *(u8 *)0x030040E4;
    if (temp_r1 == 0) {
        *(s16 *)0x03001864 = (s16) temp_r1;
    }
    sub_08000248(1);
}

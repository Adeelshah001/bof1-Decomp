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

M2C_UNK sub_0805D1EC();                             /* extern */
M2C_UNK sub_0805D264(s32);                          /* extern */
M2C_UNK sub_0805D2C8(s32);                          /* extern */
M2C_UNK sub_0805D32C(s32);                          /* extern */
M2C_UNK sub_0805DC84(s32);                          /* extern */
M2C_UNK sub_0805DCC8(s32);                          /* extern */
M2C_UNK sub_0805DD0C(s32);                          /* extern */
M2C_UNK sub_0805DD30(s32);                          /* extern */
M2C_UNK sub_0805DD54(s32);                          /* extern */
M2C_UNK sub_0805DD78(s32);                          /* extern */
M2C_UNK sub_0805DDA8(s32);                          /* extern */

void sub_0805DA14(s32 arg0) {
    sub_0805D1EC();
    sub_0805D264(arg0);
    sub_0805DDA8(arg0);
    sub_0805DC84(arg0);
    sub_0805DCC8(arg0);
    sub_0805D2C8(arg0);
    sub_0805DD0C(arg0);
    sub_0805D32C(arg0);
    sub_0805DD30(arg0);
    sub_0805DD54(arg0);
    sub_0805DD78(arg0);
}

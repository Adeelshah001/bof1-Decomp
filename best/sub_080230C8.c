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

M2C_UNK sub_08005140(void *, s32);                  /* extern */
M2C_UNK sub_0807E3CC(s32, u8);                      /* extern */

void sub_080230C8(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x68);
    sub_08005140(arg0, M2C_FIELD(temp_r0, u8 *, 2) | (M2C_FIELD(temp_r0, u8 *, 3) << 8));
    *(u8 *)0x03002D59 = *(u8 *)0x103002B11;
    *(u8 *)0x03002E7D = *(u8 *)0x103002B11;
    *(u8 *)0x03002FA1 = *(u8 *)0x103002B11;
    sub_0807E3CC(0x103002BD4, *(u8 *)0x103002B11);
    sub_0807E3CC(0x03002CF8, *(u8 *)0x103002B11);
    sub_0807E3CC(0x03002E1C, *(u8 *)0x103002B11);
    M2C_FIELD(arg0, void **, 0x68) = (void *) (M2C_FIELD(arg0, void **, 0x68) + 4);
}

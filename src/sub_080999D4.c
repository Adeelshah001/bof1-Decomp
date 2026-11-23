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

M2C_UNK sub_08038128(void *, void *, s32, s32);     /* extern */
M2C_UNK sub_08038264(void *);                       /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0809A1B4(void *);                       /* extern */

void sub_080999D4(void *arg0) {
    sub_08038128(arg0, M2C_FIELD(arg0, void **, 0x78), 0xA, 0xA);
    sub_08038264(arg0);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
    if ((u32) (u8) (M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), u8 *, 2) - 0xC) < (u32) M2C_FIELD(arg0, u8 *, 2)) {
        sub_0809A1B4(arg0);
        return;
    }
    if ((u32) (u8) (*(u8 *)0x03001864 - 0x10) > 1U) {
        sub_0803A8EC(arg0);
    }
}

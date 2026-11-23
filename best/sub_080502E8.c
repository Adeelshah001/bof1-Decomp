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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
extern M2C_UNK sub_0805033C;

void sub_080502E8(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
    M2C_FIELD(arg0, u8 *, 0x54) = temp_r0;
    if ((temp_r0 << 0x18) != 0) {
        sub_08037C98(arg0, 0);
        sub_0803A8EC(arg0);
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x41) = 0xC;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0x170;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0xEA;
    sub_08037FC4(arg0, 0);
    sub_080379D4(0xB);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0805033C;
}

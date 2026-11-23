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

M2C_UNK sub_080002EC(s32);                          /* extern */
M2C_UNK sub_0800039C(s32);                          /* extern */
M2C_UNK sub_080003D8(M2C_UNK *, s32, s32);          /* extern */
M2C_UNK sub_08000BC4();                             /* extern */
M2C_UNK sub_0809ED18();                             /* extern */
extern M2C_UNK sub_08001038;
extern M2C_UNK sub_0800331C;

void sub_080001D0(void) {
    s32 sp0;

    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85010000;
    sp0 = 0;
    M2C_FIELD((void *)0x040000D4, s32 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x03000000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x85001F80;
    sub_0800039C(0x030016E0);
    sub_080003D8(&sub_08001038, 0x030016E0, 0xFF);
    sub_080003D8(&sub_0800331C, 0x030016E0, 3);
    sub_08000BC4();
    sub_0809ED18();
    sub_080002EC(0x030016E0);
}

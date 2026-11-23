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

M2C_UNK _0805ABF4(s32, s32, s32);                   /* extern */
M2C_UNK sub_08000248(s32);                          /* extern */
M2C_UNK sub_08001F80(s32, M2C_UNK *, s32);          /* extern */
M2C_UNK sub_0800312C(s32, s32);                     /* extern */
M2C_UNK sub_08068818(s32);                          /* extern */
extern M2C_UNK sub_08004098;

void sub_08003B4C(void) {
    s16 sp0;

    *(s8 *)0x03001698 = 0;
    *(s8 *)0x03001674 = 0;
    *(s8 *)0x0300166C = 0;
    *(s8 *)0x030016A4 = 0;
    *(s16 *)0x03001670 = 0x100;
    *(s16 *)0x03001620 = 4;
    *(s16 *)0x030016CC = 0;
    *(s16 *)0x03001654 = 0;
    *(s16 *)0x0300164C = 0;
    *(s16 *)0x03001680 = 0;
    *(s16 *)0x03001668 = 0;
    *(s16 *)0x03001684 = 0;
    *(s16 *)0x03001664 = 0;
    *(s16 *)0x030016C0 = 0;
    sub_08068818(1);
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *)0x0814B9D4;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02020FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000080;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = (s16 *)0x0814B9D4;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x020211C0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000080;
    sp0 = 0x140;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02019FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000400;
    *(s16 *)0x03001620 = 8;
    *(s32 *)0x03001694 |= 0x10000;
    _0805ABF4(0x125, 0, 0x080F4A7C);
    *(s16 *)0x03002484 = 0;
    *(u16 *)0x04000050 = 0xFF;
    *(u16 *)0x0300168C = *(u16 *)0x04000050;
    *(s16 *)0x03001644 = 0x10;
    *(s16 *)0x04000054 = 0x10;
    *(s32 *)0x03001694 |= 1;
    *(s32 *)0x03004758 = 0x020211C0;
    sub_08000248(2);
    *(s8 *)0x03003FA8 = 0;
    sub_08000248(1);
    sub_0800312C(0x10, 2);
    sub_08001F80(0, &sub_08004098, 0);
    sub_08000248(0x64);
    sub_0800312C(0x10, 0);
    sub_08001F80(0, &sub_08004098, 0);
}

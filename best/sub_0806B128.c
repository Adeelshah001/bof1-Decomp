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

M2C_UNK sub_08056C8C(u8, s32);                      /* extern */
M2C_UNK sub_08059978();                             /* extern */
M2C_UNK sub_08059D68(s32);                          /* extern */
M2C_UNK sub_0805B284();                             /* extern */
M2C_UNK sub_0805B404(s32);                          /* extern */
M2C_UNK sub_0805B428(s32, s32, s32, s32);           /* extern */
M2C_UNK sub_08068938(s32, s32);                     /* extern */

s32 sub_0806B128(void) {
    s16 sp0;

    sub_08056C8C(*(u8 *)0x030046D6, 0x03002AB0);
    sub_08068938(4, 0x12);
    sp0 = 0x140;
    M2C_FIELD((void *)0x040000D4, s16 **, 0) = &sp0;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x0201AB00;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x81000120;
    sub_0805B428(0x30, 0x58, 0xF0, 0x98);
    sub_0805B284();
    if ((u32) *(u8 *)0x030046D2 > 7U) {
        sub_0805B404(1);
    }
    sub_08059978();
    sub_08059D68(0x6AC);
    M2C_FIELD((void *)0x03004620, s8 *, 7) = 0;
    M2C_FIELD((void *)0x03004620, s8 *, 3) = 0x10;
    return 0;
}

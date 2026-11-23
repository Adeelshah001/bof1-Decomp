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

s32 sub_08020AF0(s32, s16);                         /* extern */

void sub_080201B0(void) {
    void *temp_r2;

    if ((s8) *(u8 *)0x0300485D != 0) {
        if (sub_08020AF0(0x11, *(s16 *)0x03004138) != 0) {
            *(s8 *)0x030043DC = 1;
            temp_r2 = *(void **)0x03004154;
            M2C_FIELD(temp_r2, u16 *, 2) = (u16) M2C_FIELD((void *)0x03002AB0, u16 *, 2);
            M2C_FIELD(temp_r2, u16 *, 6) = (u16) M2C_FIELD((void *)0x03002AB0, u16 *, 6);
            M2C_FIELD(temp_r2, u16 *, 0x2C) = (u16) M2C_FIELD((void *)0x03002AB0, u16 *, 6);
        }
        *(s8 *)0x0300485C = 0x10;
        *(u8 *)0x0300485B += 1;
    }
}

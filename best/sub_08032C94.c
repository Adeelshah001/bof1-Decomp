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

M2C_UNK sub_0803238C(M2C_UNK *);                    /* extern */

void sub_08032C94(void *arg0) {
    M2C_UNK sp0;

    if ((*(u16 *)0x03002484 == 0) && !(2 & *(u8 *)0x0202DE88)) {
        M2C_FIELD(&sp0, u16 *, 0) = (u16) M2C_FIELD(arg0, u16 *, 2);
        M2C_FIELD(&sp0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 6);
        sub_0803238C(&sp0);
        if (!(2 & M2C_FIELD(arg0, u8 *, 0xBA))) {
            *(u8 *)0x030043B8 &= ~(1 << M2C_FIELD(arg0, u8 *, 0x3B));
        }
    }
}

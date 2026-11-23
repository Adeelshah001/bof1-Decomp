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

M2C_UNK sub_080A0774(void *);                       /* extern */
extern M2C_UNK sub_0804F484;

void sub_08050360(void *arg0) {
    if (!(0x40 & M2C_FIELD(M2C_FIELD(arg0, void **, 0xD4), u8 *, 0x3A))) {
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804F484;
        sub_080A0774(arg0);
    }
}

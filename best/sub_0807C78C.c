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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_080380F4(void *, s32, s32, s32);        /* extern */
M2C_UNK sub_0803815C(void *);                       /* extern */
M2C_UNK sub_08038278(void *);                       /* extern */
M2C_UNK sub_0807B248(void *);                       /* extern */
M2C_UNK sub_0807D708(void *);                       /* extern */
M2C_UNK sub_0807D760(void *);                       /* extern */

void sub_0807C78C(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x70) != 5) {
        sub_0803815C(arg0);
        sub_08038278(arg0);
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
        sub_0807B248(arg0);
        sub_0807D760(arg0);
    } else {
        sub_080380F4(arg0, M2C_FIELD(arg0, s32 *, 0x78), 0x10, 0x10);
        sub_08038278(arg0);
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
        sub_0807B248(arg0);
        sub_0807D760(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) (M2C_FIELD(arg0, u16 *, 2) << 8);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, u16 *, 6) << 8);
    sub_08037FC4(arg0, 8);
    if (1 & M2C_FIELD(arg0, u8 *, 0x70)) {
        M2C_FIELD(arg0, s16 *, 0x20) = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x4D) = 2;
    sub_0807D708(arg0);
}

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
M2C_UNK sub_0807D760(void *);                       /* extern */
M2C_UNK sub_0807D7B0(void *);                       /* extern */

void sub_0807C86C(void *arg0) {
    u32 temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x6C), u8 *, 0x4D) == 0x16) {
        sub_0807D7B0(arg0);
        return;
    }
    M2C_FIELD(arg0, s16 *, 2) = (s16) ((u32) M2C_FIELD(arg0, u32 *, 0x44) >> 8);
    temp_r0 = (u32) M2C_FIELD(arg0, u32 *, 0x48) >> 8;
    M2C_FIELD(arg0, s16 *, 6) = (s16) temp_r0;
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) temp_r0;
    sub_08037FC4(arg0, 8);
    if (1 & M2C_FIELD(arg0, u8 *, 0x70)) {
        M2C_FIELD(arg0, s16 *, 0x20) = 1;
    }
    M2C_FIELD(arg0, s8 *, 0x4D) = 2;
    sub_0807D760(arg0);
}

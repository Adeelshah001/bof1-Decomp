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
M2C_UNK sub_0803A974(void *);                       /* extern */
M2C_UNK sub_08048250(void *);                       /* extern */
M2C_UNK sub_08050638(void *);                       /* extern */
extern M2C_UNK sub_080508B0;
extern M2C_UNK sub_080508D0;

void sub_080506C0(void *arg0) {
    u8 temp_r0;
    u8 temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55);
    if (temp_r0 == 0) {
        temp_r1 = M2C_FIELD(arg0, u8 *, 0x3B);
        if (temp_r1 != 0) {
            sub_08050638(arg0);
            M2C_FIELD(arg0, u8 *, 0x40) = temp_r0;
            return;
        }
        M2C_FIELD(arg0, u8 *, 0x40) = temp_r1;
        sub_08037FC4(arg0, 2);
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_080508D0;
        sub_0803A974(arg0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x55) = (u8) (temp_r0 - 1);
    M2C_FIELD(arg0, u8 *, 0x40) = 1U;
    M2C_FIELD(arg0, u8 *, 0x61) = (u8) (0xEF & M2C_FIELD(arg0, u8 *, 0x61));
    if (M2C_FIELD(arg0, u8 *, 0x3B) != 0) {
        M2C_FIELD(arg0, u8 *, 0x3B) = 2U;
    }
    sub_08048250(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_080508B0;
    sub_0803A974(arg0);
}

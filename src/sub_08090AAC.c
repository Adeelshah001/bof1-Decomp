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

M2C_UNK sub_08038278(void *);                       /* extern */
M2C_UNK sub_0807B248();                             /* extern */
s32 sub_0807CDB8(void *);                           /* extern */
M2C_UNK sub_08083484(void *);                       /* extern */
M2C_UNK sub_08083BB4(void *);                       /* extern */

void sub_08090AAC(void *arg0) {
    sub_0807B248();
    sub_08038278(arg0);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
    if (sub_0807CDB8(arg0) == 0) {
        if (M2C_FIELD(arg0, u8 *, 0xE0) == 6) {
            sub_08083484(arg0);
        } else {
            sub_08083BB4(arg0);
        }
        M2C_FIELD(arg0, s8 *, 0x4D) = 0xA;
    }
}

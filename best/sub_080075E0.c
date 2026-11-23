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

M2C_UNK sub_080A0770(s32);                          /* extern */

void sub_080075E0(s16 *arg0) {
    void *temp_r1;

    *(s16 *)0x030040F8 = 0;
    if (!(*arg0 & 0x8000)) {
loop_2:
        temp_r1 = (*(s16 *)0x030040F8 * 8) + arg0;
        if (M2C_FIELD(temp_r1, s16 *, 0) == *(u16 *)0x03002484) {
            sub_080A0770(M2C_FIELD(temp_r1, s32 *, 4));
            return;
        }
        *(s16 *)0x030040F8 = (u16) *(s16 *)0x030040F8 + 1;
        if (*((*(s16 *)0x030040F8 * 8) + arg0) & 0x8000) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    *(s16 *)0x03004114 = 0;
}

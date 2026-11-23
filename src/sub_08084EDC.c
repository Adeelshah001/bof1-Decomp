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

M2C_UNK sub_08084FC4(u16);                          /* extern */
M2C_UNK sub_08084FF8(u16, s32);                     /* extern */
M2C_UNK sub_0808500C(u16, s32, s32);                /* extern */
M2C_UNK sub_08085028(u16, s32);                     /* extern */

void sub_08084EDC(void *arg0, u16 arg1) {
    u16 temp_r4;

    temp_r4 = arg1;
    if (M2C_FIELD(arg0, u8 *, 0x3B) == 3) {
        sub_08084FC4(temp_r4);
        return;
    }
    sub_08085028(temp_r4, 4);
    sub_0808500C(temp_r4, 4, 0x40);
    sub_08084FF8(temp_r4, 5);
}

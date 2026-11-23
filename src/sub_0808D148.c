/* machine draft (m2c) for agbcc -mthumb-interwork -O2, tried by autopilot */
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

s32 sub_0807C638(void *, s32);                      /* extern */

void sub_0808D148(void *arg0, u8 arg1) {
    void *temp_r1;

    if (sub_0807C638(arg0, 0xB) != 0) {
        temp_r1 = M2C_FIELD(arg0, void **, 0x6C);
        M2C_FIELD(temp_r1, u8 *, 0x70) = arg1;
        M2C_FIELD(temp_r1, void **, 0x78) = arg0;
    }
}

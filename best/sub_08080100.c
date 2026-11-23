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

s32 sub_08003104();                                 /* extern */

void *sub_08080100(void *arg0) {
    void *sp0;
    void *sp4;
    u8 temp_r0;
    u8 temp_r0_2;
    void *temp_r2;

    if (8 & sub_08003104()) {
        return NULL;
    }
    sp0 = (void *)0x03002AB0;
loop_3:
    temp_r2 = sp0;
    if ((M2C_FIELD(temp_r2, u8 *, 0xF0) & 0x50) || (M2C_FIELD(temp_r2, u8 *, 0xF1) & 0x80)) {
        temp_r0 = M2C_FIELD(arg0, u8 *, 8) - 1;
        M2C_FIELD(arg0, u8 *, 8) = temp_r0;
        if ((temp_r0 << 0x18) != 0) {
            sp0 = temp_r2 + 0x124;
            goto loop_3;
        }
        return sp0;
    }
    sp4 = temp_r2;
    sp0 += 0x124;
loop_8:
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 8) - 1;
    M2C_FIELD(arg0, u8 *, 8) = temp_r0_2;
    if ((temp_r0_2 << 0x18) != 0) {
        if (!(M2C_FIELD(sp0, u8 *, 0xF0) & 0x50) && !(M2C_FIELD(sp0, u8 *, 0xF1) & 0x80) && ((u32) M2C_FIELD(sp4, u16 *, 0xF6) >= (u32) M2C_FIELD(sp0, u16 *, 0xF6))) {
            sp4 = sp0;
        }
        sp0 += 0x124;
        goto loop_8;
    }
    sp0 = sp4;
    return sp4;
}

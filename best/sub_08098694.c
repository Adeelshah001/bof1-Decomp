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

s32 sub_08098694(void *arg0, void **arg1) {
    u8 temp_r1;
    void *temp_r0;
    void *temp_r2;

    temp_r1 = M2C_FIELD(arg0, u8 *, 8);
    if (1 & temp_r1) {
        if (!(2 & temp_r1)) {
            *arg1 = (void *)0x03003420;
            goto block_14;
        }
        if (temp_r1 & 4) {
            *arg1 = (void *)0x03002AB0;
loop_5:
            temp_r2 = *arg1;
            if (M2C_FIELD(temp_r2, u8 *, 0xF0) & 0x10) {
                temp_r0 = temp_r2 + 0x124;
                *arg1 = temp_r0;
                if ((u32) temp_r0 >= 0x03002F40U) {
                    goto block_7;
                }
                goto loop_5;
            }
            goto block_14;
        }
        *arg1 = (void *)0x03002AB0;
        goto block_14;
    }
    if (!(4 & temp_r1)) {
        if (!(M2C_FIELD(*arg1, u8 *, 0xF1) & 0x80)) {
            goto block_14;
        }
        goto block_7;
    }
    if (!(temp_r1 & 8) || (M2C_FIELD(*arg1, u8 *, 0xF1) & 0x80)) {
block_14:
        return 0;
    }
block_7:
    return 1;
}

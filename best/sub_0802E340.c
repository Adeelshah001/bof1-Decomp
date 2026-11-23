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

u8 sub_0802E284(void *);                            /* extern */

u8 sub_0802E340(void *arg0) {
    s32 temp_r1;
    u8 temp_r0;
    u8 temp_r4;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x94);
    temp_r4 = 0xFFFF0000 & temp_r1;
    if (temp_r4 == 0) {
        *(u8 *)0x030023D0 = M2C_FIELD(arg0, u8 *, 0xBE);
        M2C_FIELD(arg0, u8 *, 0xBE) = temp_r4;
        M2C_FIELD(arg0, u8 *, 0x4D) = temp_r4;
        M2C_FIELD((arg0 + 0x4D), u8 *, 3) = temp_r4;
        goto block_6;
    }
    if (((M2C_FIELD(temp_r1, u16 *, 2) == M2C_FIELD(temp_r1, u16 *, 0x46)) && (M2C_FIELD(temp_r1, u16 *, 6) == M2C_FIELD(temp_r1, u16 *, 0x4A))) || (temp_r0 = M2C_FIELD(arg0, u8 *, 0x54) - 1, M2C_FIELD(arg0, u8 *, 0x54) = temp_r0, ((temp_r0 << 0x18) == 0))) {
        return sub_0802E284(arg0);
    }
block_6:
    return 0U;
}

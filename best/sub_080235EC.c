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

s32 sub_080235EC(void) {
    s8 *var_r2;
    s8 var_r1;

    if (((u32) (u16) (M2C_FIELD((void *)0x03002AB0, u16 *, 2) + 0xFFFFF3B8) <= 0x70U) && ((u32) (u16) (M2C_FIELD((void *)0x03002AB0, u16 *, 6) + 0x68C4) <= 0x40U)) {
        M2C_FIELD((void *)0x03002AB0, u8 *, 0x41) = (u8) (M2C_FIELD((void *)0x03002AB0, u8 *, 0x41) | 0x30);
        M2C_FIELD((void *)0x03002AB0, u8 *, 0x165) = (u8) (M2C_FIELD((void *)0x03002AB0, u8 *, 0x165) | 0x30);
        M2C_FIELD((void *)0x03002AB0, u8 *, 0x289) = (u8) (M2C_FIELD((void *)0x03002AB0, u8 *, 0x289) | 0x30);
        var_r2 = (void *)0x03002AB0 + 0x3AD;
        var_r1 = 0x30 | M2C_FIELD((void *)0x03002AB0, u8 *, 0x3AD);
    } else {
        M2C_FIELD((void *)0x03002AB0, u8 *, 0x41) = (u8) (0xCF & M2C_FIELD((void *)0x03002AB0, u8 *, 0x41));
        M2C_FIELD((void *)0x03002AB0, u8 *, 0x165) = (u8) (0xCF & M2C_FIELD((void *)0x03002AB0, u8 *, 0x165));
        M2C_FIELD((void *)0x03002AB0, u8 *, 0x289) = (u8) (0xCF & M2C_FIELD((void *)0x03002AB0, u8 *, 0x289));
        var_r2 = (void *)0x03002AB0 + 0x3AD;
        var_r1 = 0xCF & M2C_FIELD((void *)0x03002AB0, u8 *, 0x3AD);
    }
    *var_r2 = var_r1;
    return 0;
}

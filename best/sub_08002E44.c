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

s32 sub_08002E44(s32 arg0) {
    s32 var_r1;
    u16 temp_r2;
    u16 temp_r3;
    u32 temp_r1;
    u32 temp_r1_2;

    temp_r3 = *(u16 *)0x03000806;
    temp_r1 = (u32) (temp_r3 << 0x10) >> 0x18;
    temp_r2 = *(u16 *)0x03003FAC;
    temp_r1_2 = (u32) (temp_r2 << 0x10) >> 0x18;
    if ((arg0 << 0x18) == 0) {
        if ((u32) temp_r3 <= 0x77FFU) {
            *(u16 *)0x03000806 = temp_r3 + 0x300;
            var_r1 = 0x200;
            goto block_6;
        }
        goto block_4;
    }
    if (temp_r2 == 0xFE00) {
block_4:
        return 1;
    }
    *(u16 *)0x03000806 = temp_r3 + 0xFFFFFD00;
    var_r1 = 0xFFFFFE00;
block_6:
    *(u16 *)0x03003FAC = temp_r2 + var_r1;
    *(s16 *)0x03001624 = (temp_r1 << 8) | (u8) (~temp_r1 - 0xF);
    *(s16 *)0x030016AC = (temp_r1_2 << 8) | (u8) (~temp_r1_2 - 0x5F);
    return 0;
}

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

void sub_0809707C(void *arg0, u32 arg1) {
    u8 temp_r0;
    u8 temp_r1;
    u8 var_r1;
    void *var_r3;

    if ((arg1 >= 0x03003420U) && (arg1 < 0x03003F88U)) {
        var_r3 = (void *)0x03003420;
        var_r1 = 0xF & *(u8 *)0x03004FAF;
    } else {
        var_r3 = (void *)0x03002AB0;
        var_r1 = *(u8 *)0x03004FB0;
    }
    M2C_FIELD(arg0, u8 *, 0x55) = var_r1;
loop_5:
    if (!(0x40 & M2C_FIELD(var_r3, u8 *, 0xF1))) {
        temp_r1 = M2C_FIELD(var_r3, u8 *, 0xDC);
        if (!(1 & temp_r1)) {
            M2C_FIELD(var_r3, u8 *, 0xDC) = (u8) (temp_r1 | 1);
            M2C_FIELD(var_r3, u16 *, 0x108) = (u16) (M2C_FIELD(var_r3, u16 *, 0x108) + 0x14);
        }
    }
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    if ((temp_r0 << 0x18) != 0) {
        var_r3 += 0x124;
        goto loop_5;
    }
}

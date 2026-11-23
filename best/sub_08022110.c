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

void sub_08022110(void) {
    s32 temp_r1;
    s32 var_r2;
    u8 temp_r0;
    u8 temp_r3;
    u8 temp_r5;

    temp_r0 = *(u8 *)0x03004871 - 1;
    *(u8 *)0x03004871 = temp_r0;
    temp_r5 = temp_r0;
    if (temp_r5 == 0) {
        temp_r3 = *(u8 *)0x03004872;
        temp_r1 = *(s32 *)0x03002B38 + ((u32) (0x7F & temp_r3) >> 1);
        *(s32 *)0x03002B38 = temp_r1;
        *(s32 *)0x03002C5C = temp_r1;
        *(s32 *)0x03002D80 = temp_r1;
        *(s32 *)0x03002EA4 = temp_r1;
        *(u8 *)0x03002AEA |= 0x80;
        *(u8 *)0x03002C0E |= 0x80;
        *(u8 *)0x03002D32 |= 0x80;
        *(u8 *)0x03002E56 |= 0x80;
        var_r2 = 8;
        if (0x80 & temp_r3) {
            var_r2 = 4;
        }
        *(u8 *)0x03003F98 |= var_r2;
        M2C_FIELD((void *)0x0300486F, u8 *, 0) = temp_r5;
        M2C_FIELD((void *)0x0300486F, u8 *, 1) = temp_r5;
    }
}

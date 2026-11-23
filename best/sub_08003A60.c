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

void sub_08003A60(void) {
    s32 var_r1;
    u16 *var_r2;
    u16 *var_r3;

    *(s8 *)0x03001698 = 0;
    *(s8 *)0x03001674 = 0;
    *(s8 *)0x0300166C = 0;
    *(s8 *)0x030016A4 = 0;
    *(s16 *)0x03001670 = 0x100;
    *(s16 *)0x03001620 = 4;
    *(s16 *)0x030016CC = 0;
    *(s16 *)0x03001654 = 0;
    *(s16 *)0x0300164C = 0;
    *(s16 *)0x03001680 = 0;
    *(s16 *)0x03001668 = 0;
    *(s16 *)0x03001684 = 0;
    *(s16 *)0x03001664 = 0;
    *(s16 *)0x030016C0 = 0;
    var_r3 = (u16 *)0x080F4A5C;
    var_r2 = (u16 *)0x02020FC0;
    var_r1 = 0xF;
    do {
        *var_r2 = *var_r3;
        var_r3 += 2;
        var_r2 += 2;
        var_r1 -= 1;
    } while (var_r1 >= 0);
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x08246268;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x06004000;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80002800;
    M2C_FIELD((void *)0x040000D4, s32 *, 0) = 0x0824B268;
    M2C_FIELD((void *)0x040000D4, s32 *, 4) = 0x02019FC0;
    M2C_FIELD((void *)0x040000D4, s32 *, 8) = 0x80000280;
    *(s32 *)0x03001694 |= 0x10000;
}

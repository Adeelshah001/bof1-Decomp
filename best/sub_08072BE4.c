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

void sub_08072BE4(void) {
    *(s16 *)0x03002BA4 = 0x378;
    *(s16 *)0x03002BA6 = 0x378;
    *(s16 *)0x03002BB8 = 0x378;
    if (M2C_FIELD((void *)0x03002AEA, u8 *, 0) == 0) {
        M2C_FIELD((void *)0x03002AEA, u8 *, 0) = 1U;
        M2C_FIELD((void *)0x03002AEA, s8 *, 2) = 0;
        *(s16 *)0x03002BA4 = 0xC8;
        *(s16 *)0x03002BA6 = 0xC8;
        M2C_FIELD((void *)0x03002BA8, s16 *, 0) = 0x7B;
        M2C_FIELD((void *)0x03002BA8, s16 *, 2) = 0x7B;
        *(s16 *)0x03002BB6 = 0xC8;
        *(s8 *)0x03002BA2 = 0x63;
        *(s16 *)0x03002BB8 = 0x4D;
        M2C_FIELD((void *)0x03002B98, s8 *, 0) = 0xC0;
        *(s8 *)0x03002B99 = 0xC8;
        M2C_FIELD((void *)0x03002B98, s8 *, 2) = 0x9B;
        M2C_FIELD(((void *)0x03002B98 + 2), s8 *, 1) = 0x9B;
        *(s16 *)0x03002BC2 = 0x5E;
        *(s8 *)0x03002BBB = 0xA;
    }
    *(s16 *)0x03002CC8 = 0x378;
    *(s16 *)0x03002CCA = 0x378;
    *(s16 *)0x03002CDC = 0x378;
    if (M2C_FIELD((void *)0x03002C0E, u8 *, 0) == 0) {
        M2C_FIELD((void *)0x03002C0E, u8 *, 0) = 1U;
        M2C_FIELD((void *)0x03002C0E, s8 *, 2) = 2;
        *(s16 *)0x03002CC8 = 0x64;
        *(s16 *)0x03002CCA = 0x64;
        M2C_FIELD((void *)0x03002CCC, s16 *, 0) = 0x64;
        M2C_FIELD((void *)0x03002CCC, s16 *, 2) = 0x64;
        *(s16 *)0x03002CDA = 0xA;
        *(s8 *)0x03002CC6 = 0x63;
        *(s16 *)0x03002CDC = 0x4D;
        *(s8 *)0x03002CDF = 0x14;
    }
}

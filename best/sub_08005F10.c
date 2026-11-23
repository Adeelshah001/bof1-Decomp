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

void sub_08005F10(void) {
    void *temp_r0;
    void *temp_r5;
    void *temp_r5_2;

    M2C_FIELD((void *)0x03003420, s16 *, 2) = 0x5D8;
    M2C_FIELD((void *)0x03003420, s16 *, 0x46) = 0x5D8;
    M2C_FIELD((void *)0x03003420, u16 *, 6) = 0x317CU;
    M2C_FIELD((void *)0x03003420, u16 *, 0x2C) = 0x317CU;
    M2C_FIELD(((void *)0x03003420 + 0x46), s16 *, 4) = 0x317C;
    sub_080547DC((void *)0x03003420, 2);
    M2C_FIELD((void *)0x03003420, u16 *, 0x2C) = (u16) M2C_FIELD((void *)0x03003420, u16 *, 6);
    temp_r0 = (void *)0x03003420 + 0x80;
    M2C_FIELD(temp_r0, s16 *, 6) = 0x319C;
    M2C_FIELD(temp_r0, s16 *, 0x2C) = 0x319C;
    M2C_FIELD((void *)0x03003420, s16 *, 0xCA) = 0x319C;
    sub_080547DC(temp_r0, 2);
    M2C_FIELD((void *)0x03003420, s16 *, 0x102) = 0x5E8;
    M2C_FIELD((void *)0x03003420, s16 *, 0x146) = 0x5E8;
    M2C_FIELD((void *)0x03003420, u16 *, 0x106) = 0x318CU;
    M2C_FIELD((void *)0x03003420, u16 *, 0x12C) = 0x318CU;
    M2C_FIELD((void *)0x03003420, s16 *, 0x14A) = 0x318C;
    sub_080547DC((void *)0x03003420 + 0x100, 2);
    M2C_FIELD((void *)0x03003420, u16 *, 0x12C) = (u16) M2C_FIELD((void *)0x03003420, u16 *, 0x106);
    M2C_FIELD((void *)0x03003420, s16 *, 0x202) = 0x618;
    M2C_FIELD((void *)0x03003420, s16 *, 0x246) = 0x618;
    M2C_FIELD((void *)0x03003420, u16 *, 0x206) = 0x319CU;
    M2C_FIELD((void *)0x03003420, u16 *, 0x22C) = 0x319CU;
    M2C_FIELD((void *)0x03003420, s16 *, 0x24A) = 0x319C;
    sub_080547DC((void *)0x03003420 + 0x200, 2);
    M2C_FIELD((void *)0x03003420, u16 *, 0x22C) = (u16) M2C_FIELD((void *)0x03003420, u16 *, 0x206);
    temp_r5 = (void *)0x03003420 + 0x280;
    M2C_FIELD(temp_r5, s16 *, 2) = 0x5C8;
    M2C_FIELD((void *)0x03003420, s16 *, 0x2C6) = 0x5C8;
    M2C_FIELD(temp_r5, u16 *, 6) = 0x31BCU;
    M2C_FIELD(temp_r5, u16 *, 0x2C) = 0x31BCU;
    M2C_FIELD((void *)0x03003420, s16 *, 0x2CA) = 0x31BC;
    sub_080547DC(temp_r5, 2);
    M2C_FIELD(temp_r5, u16 *, 0x2C) = (u16) M2C_FIELD(temp_r5, u16 *, 6);
    M2C_FIELD((void *)0x03003420, s16 *, 0x302) = 0x5D8;
    M2C_FIELD((void *)0x03003420, s16 *, 0x346) = 0x5D8;
    M2C_FIELD((void *)0x03003420, u16 *, 0x306) = 0x319CU;
    M2C_FIELD((void *)0x03003420, u16 *, 0x32C) = 0x319CU;
    M2C_FIELD((void *)0x03003420, s16 *, 0x34A) = 0x319C;
    sub_080547DC((void *)0x03003420 + 0x300, 2);
    M2C_FIELD((void *)0x03003420, u16 *, 0x32C) = (u16) M2C_FIELD((void *)0x03003420, u16 *, 0x306);
    temp_r5_2 = (void *)0x03003420 + 0x380;
    M2C_FIELD(temp_r5_2, s16 *, 2) = 0x628;
    M2C_FIELD((void *)0x03003420, s16 *, 0x3C6) = 0x628;
    M2C_FIELD(temp_r5_2, u16 *, 6) = 0x31BCU;
    M2C_FIELD(temp_r5_2, u16 *, 0x2C) = 0x31BCU;
    M2C_FIELD((void *)0x03003420, s16 *, 0x3CA) = 0x31BC;
    sub_080547DC(temp_r5_2, 2);
    M2C_FIELD(temp_r5_2, u16 *, 0x2C) = (u16) M2C_FIELD(temp_r5_2, u16 *, 6);
    M2C_FIELD((void *)0x03003420, s16 *, 0x406) = 0x318C;
    M2C_FIELD((void *)0x03003420, s16 *, 0x42C) = 0x318C;
    M2C_FIELD((void *)0x03003420, s16 *, 0x44A) = 0x318C;
    sub_080547DC((void *)0x03003420 + 0x400, 2);
}

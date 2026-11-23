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

void sub_0806A318(void *arg0) {
    u8 temp_r3;

    *(u16 *)0x030045A0 = 0;
    if ((4 & M2C_FIELD(arg0, u8 *, 0xF1)) || ((u32) M2C_FIELD(arg0, u16 *, 0xF6) < (u32) ((u16) M2C_FIELD(arg0, u16 *, 0xF4) >> 2))) {
        *(u16 *)0x030045A0 = 0x40;
    }
    if (0x8010 & M2C_FIELD(arg0, u16 *, 0xF0)) {
        *(u16 *)0x030045A0 |= 0x80;
    }
    if (0x70 & M2C_FIELD(arg0, u8 *, 0xF1)) {
        *(u16 *)0x030045A0 |= 0x20;
    }
    temp_r3 = (u8) M2C_FIELD(arg0, u16 *, 0xF0);
    if (0x10 & temp_r3) {
        *(u16 *)0x030045A0 |= 0x10;
    }
    if (0x20 & temp_r3) {
        *(u16 *)0x030045A0 |= 8;
    }
}

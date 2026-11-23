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

void *sub_0803EDDC(u16);                            /* extern */
M2C_UNK sub_08072CC4(s32);                          /* extern */
extern M2C_UNK sub_08046784;

void sub_080129E8(void) {
    void *temp_r0;

    sub_08072CC4(0x17);
    if (*(u8 *)0x03004584 == 0) {
        temp_r0 = sub_0803EDDC(*(u16 *)0x03002480);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
            M2C_FIELD(temp_r0, M2C_UNK **, 0x64) = &sub_08046784;
            M2C_FIELD(temp_r0, s16 *, 2) = 0xD98;
            M2C_FIELD(temp_r0, s16 *, 6) = 0x5C7C;
        }
        *(u8 *)0x0300485B += 1;
        *(u8 *)0x03002B68 &= 0xFB;
    }
}

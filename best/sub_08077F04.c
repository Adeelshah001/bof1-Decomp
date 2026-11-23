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

M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
void *sub_0803ED98();                               /* extern */
M2C_UNK sub_0809B440(void *);                       /* extern */

void sub_08077F04(void *arg0) {
    void *temp_r0;

    temp_r0 = sub_0803ED98();
    if (temp_r0 != NULL) {
        sub_080379D4(0x2D);
        M2C_FIELD(temp_r0, s8 *, 0x3B) = (s8) (((u8) M2C_FIELD(arg0, u8 *, 0xE1) >> 4) - 7);
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
        sub_0809B440(temp_r0);
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 0;
        *(u16 *)0x03001670 |= 0x2000;
        M2C_FIELD(arg0, s8 *, 0x50) = 6;
        if (0x80 & M2C_FIELD(arg0, u8 *, 0xF1)) {
            M2C_FIELD(arg0, s8 *, 0x2C) = 0;
        } else {
            M2C_FIELD(arg0, s8 *, 0x2C) = (s16) (M2C_FIELD(arg0, u16 *, 6) + 0x18);
        }
        if ((u32) (u16) (*(u16 *)0x03001864 - 0x10) > 1U) {
            sub_0803A8EC(arg0);
        }
    }
}

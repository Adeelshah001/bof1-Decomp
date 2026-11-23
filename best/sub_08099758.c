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
M2C_UNK sub_080381B4(void *, u32, u32);             /* extern */
M2C_UNK sub_08038264(void *);                       /* extern */
M2C_UNK sub_0803EE6C(void *);                       /* extern */
s32 sub_08083AF8(void *, s32);                      /* extern */

void sub_08099758(void *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;
    u8 temp_r4;
    void *temp_r1;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        M2C_FIELD(arg0, u8 *, 0x55) = 6U;
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0x54) - 1;
        M2C_FIELD(arg0, u8 *, 0x54) = temp_r0_2;
        temp_r4 = 0xFF & temp_r0_2;
        if (temp_r4 == 0) {
            sub_0803EE6C(arg0);
            M2C_FIELD(arg0, u8 *, 0x54) = temp_r4;
            M2C_FIELD(arg0, u8 *, 0x55) = temp_r4;
            return;
        }
        if (sub_08083AF8(arg0, 0x34) == 0) {
            temp_r1 = M2C_FIELD(arg0, void **, 0x74);
            M2C_FIELD(temp_r1, u8 *, 0x54) = (u8) M2C_FIELD(arg0, u8 *, 0x54);
            M2C_FIELD(temp_r1, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
            M2C_FIELD(temp_r1, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
        }
        goto block_5;
    }
block_5:
    sub_080381B4(arg0, (u32) (M2C_FIELD(arg0, s32 *, 0x44) << 8) >> 0x10, (u32) (M2C_FIELD(arg0, s32 *, 0x48) << 8) >> 0x10);
    M2C_FIELD(arg0, u8 *, 0x61) = (u8) ((M2C_FIELD(arg0, u8 *, 0x61) + 7) & 0x1F);
    sub_08038264(arg0);
    sub_080379D4(0x1A);
}

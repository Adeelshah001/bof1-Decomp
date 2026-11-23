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

M2C_UNK sub_08037C98(void *, s32);                  /* extern */
M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0803EE38(void *);                       /* extern */
M2C_UNK sub_080470B4(void *);                       /* extern */
extern M2C_UNK sub_08047588;

void sub_080466F0(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r1;
    void *temp_r2;

    sub_08037C98(arg0, 0);
    sub_080470B4(arg0);
    temp_r0 = M2C_FIELD(arg0, u16 *, 0x2C);
    if ((u32) temp_r0 < (u32) M2C_FIELD(arg0, u16 *, 6)) {
        M2C_FIELD(arg0, u16 *, 6) = temp_r0;
        if (M2C_FIELD(arg0, u8 *, 0x3E) == 9) {
            sub_0803EE38(arg0);
            return;
        }
        temp_r0_2 = (0xFFF0 & M2C_FIELD(arg0, u16 *, 2)) | 8;
        M2C_FIELD(arg0, u16 *, 2) = temp_r0_2;
        M2C_FIELD(arg0, u16 *, 0x46) = temp_r0_2;
        temp_r1 = (0xFFF0 & M2C_FIELD(arg0, u16 *, 6)) | 0xC;
        M2C_FIELD(arg0, u16 *, 6) = temp_r1;
        M2C_FIELD(arg0, u16 *, 0x4A) = temp_r1;
        M2C_FIELD(arg0, s8 *, 0x3F) = 1;
        temp_r2 = (arg0 + 0x46) - 0xC;
        M2C_FIELD(temp_r2, u8 *, 0) = (u8) (0xDF & M2C_FIELD(temp_r2, u8 *, 0));
        M2C_FIELD(temp_r2, u8 *, 7) = (u8) (0xF & M2C_FIELD(temp_r2, u8 *, 7));
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08047588;
        M2C_FIELD(arg0, s16 *, 0) = 0;
        M2C_FIELD(arg0, s16 *, 4) = 0;
        M2C_FIELD(arg0, s16 *, 0x54) = 0x1E0;
        goto block_4;
    }
block_4:
    sub_0803A8EC(arg0);
}

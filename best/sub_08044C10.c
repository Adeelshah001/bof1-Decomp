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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
s32 sub_080448A4(void *, s32);                      /* extern */
extern M2C_UNK sub_08044E94;
extern M2C_UNK sub_08044FA8;
extern M2C_UNK sub_08045504;

void sub_08044C10(void *arg0) {
    s8 *temp_r1;

    M2C_FIELD(arg0, s16 *, 0x1C) = 0xC0;
    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) + 8);
    M2C_FIELD(arg0, s8 *, 0x6C) = 0;
    if ((sub_080448A4(arg0, 5) << 0x18) != 0) {
        if (M2C_FIELD(arg0, u8 *, 0x60) != 0) {
            M2C_FIELD(arg0, s16 *, 0x38) = 0;
            *(s16 *)0x03004890 = 0x200;
            M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08044FA8;
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
            M2C_FIELD(arg0, s8 *, 0x61) = 0x10;
            temp_r1 = (arg0 + 0x61) - 0xC;
            *temp_r1 = 0x58;
            *(temp_r1 - 1) = 4;
            return;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08044E94;
        M2C_FIELD(arg0, u8 *, 0x41) = (u8) ((0xCF & M2C_FIELD(arg0, u8 *, 0x41)) | 0x10);
        M2C_FIELD(arg0, s8 *, 0x54) = 0x30;
        M2C_FIELD((arg0 + 0x54), s8 *, 1) = 3;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08045504;
    sub_0803A8EC(arg0);
}

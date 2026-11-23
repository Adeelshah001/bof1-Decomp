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

M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_08049C40(void *, s32, s32);             /* extern */
M2C_UNK sub_08049E88(void *);                       /* extern */
extern M2C_UNK sub_08049EC4;

void sub_08048A80(void *arg0) {
    u8 temp_r0;

    M2C_FIELD(arg0, u16 *, 0x58) = (u16) M2C_FIELD(arg0, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x5A) = (u16) M2C_FIELD(arg0, u16 *, 6);
    M2C_FIELD((arg0 + 0x5A), s8 *, 7) = 0x14;
    M2C_FIELD(arg0, s16 *, 0x38) = 0x80;
    temp_r0 = *(u8 *)0x03001850 + 1;
    *(u8 *)0x03001850 = temp_r0;
    M2C_FIELD(arg0, u8 *, 0x5F) = temp_r0;
    M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_08049EC4;
    sub_08049C40(arg0, 0x1A0, 0xC);
    sub_08049E88(arg0);
    sub_08037FC4(arg0, 0);
}

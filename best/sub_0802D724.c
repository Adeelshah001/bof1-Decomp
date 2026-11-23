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
void *sub_0803EDDC(u16);                            /* extern */
extern M2C_UNK sub_08046E28;

void sub_0802D724(void *arg0) {
    s8 temp_r4;
    void *temp_r0;

    temp_r4 = 1 & M2C_FIELD((void *)0x030016E0, u16 *, 4);
    if (temp_r4 == 0) {
        sub_080379D4(6);
        temp_r0 = sub_0803EDDC(*(u16 *)0x03002480);
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
            M2C_FIELD(temp_r0, s8 *, 0x3B) = temp_r4;
            if (0xF0 & *(u8 *)0x0202DE88) {
                M2C_FIELD(temp_r0, s8 *, 0x3B) = 1;
            }
            M2C_FIELD(temp_r0, u8 *, 0x61) = (u8) M2C_FIELD(arg0, u8 *, 0x61);
            M2C_FIELD(temp_r0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
            M2C_FIELD(temp_r0, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
            M2C_FIELD(temp_r0, M2C_UNK **, 0x64) = &sub_08046E28;
        }
        M2C_FIELD(arg0, s16 *, 0x50) = 6;
    }
}

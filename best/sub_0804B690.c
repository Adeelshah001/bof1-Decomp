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
void *sub_0803ED98();                               /* extern */
M2C_UNK sub_08048284(void *, s32, s32, s32);        /* extern */
extern M2C_UNK sub_0804B7D8;

void sub_0804B690(void *arg0) {
    u8 temp_r0;
    u8 var_r2;
    void *temp_r0_2;
    void *temp_r1;
    void *temp_r1_2;
    void *temp_r1_3;

    temp_r1 = arg0 + 0x55;
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x55) - 1;
    M2C_FIELD(arg0, u8 *, 0x55) = temp_r0;
    if ((temp_r0 << 0x18) == 0) {
        M2C_FIELD(arg0, u8 *, 0x55) = 4U;
        var_r2 = 0;
        if (M2C_FIELD(temp_r1, u8 *, 0x2B) == 0) {
            var_r2 = 1;
        }
        M2C_FIELD(temp_r1, u8 *, 0x2B) = var_r2;
        temp_r0_2 = sub_0803ED98();
        if (temp_r0_2 != NULL) {
            M2C_FIELD(temp_r0_2, u16 *, 6) = (u16) M2C_FIELD(arg0, u16 *, 6);
            M2C_FIELD(temp_r0_2, u16 *, 0x2C) = (u16) M2C_FIELD(arg0, u16 *, 6);
            M2C_FIELD(temp_r0_2, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 2);
            M2C_FIELD(temp_r0_2, s16 *, 0x38) = 0x20;
            temp_r1_2 = temp_r0_2 + 0x3A;
            M2C_FIELD(temp_r0_2, s8 *, 0x3A) = 3;
            temp_r1_3 = temp_r1_2 + 3;
            M2C_FIELD(temp_r1_2, s8 *, 3) = 2;
            M2C_FIELD(temp_r1_3, s8 *, 0x17) = 6;
            M2C_FIELD((temp_r1_3 + 0x17), s8 *, 0xD) = 0x10;
            M2C_FIELD(temp_r0_2, M2C_UNK **, 0x64) = &sub_0804B7D8;
            M2C_FIELD(temp_r0_2, s16 *, 0x2A) = 0x74;
            sub_08048284(temp_r0_2, 0xE, 0x3A, 0);
            sub_08037FC4(temp_r0_2, 2);
        }
    }
}

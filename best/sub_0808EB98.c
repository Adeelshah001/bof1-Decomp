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

M2C_UNK sub_0807B248(void *);                       /* extern */
M2C_UNK sub_0807CD94(void *);                       /* extern */
s32 sub_0807CDB8();                                 /* extern */
M2C_UNK sub_08083484(void *);                       /* extern */
M2C_UNK sub_08083BB4(void *);                       /* extern */
M2C_UNK sub_08091590(void *);                       /* extern */

void sub_0808EB98(void *arg0) {
    u16 temp_r0;
    u16 temp_r0_3;
    u8 temp_r0_2;

    if (sub_0807CDB8() == 0) {
        M2C_FIELD(arg0, s8 *, 0x4D) = 0xC;
        if (M2C_FIELD(arg0, u8 *, 0xE0) == 6) {
            sub_08083484(arg0);
            M2C_FIELD(arg0, s8 *, 0x4D) = 0xE;
            M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0xE4);
            temp_r0 = M2C_FIELD(arg0, u16 *, 0xE6);
            M2C_FIELD(arg0, u16 *, 6) = temp_r0;
            M2C_FIELD(arg0, u16 *, 0x2C) = temp_r0;
            goto block_4;
        }
        sub_08083BB4(arg0);
        M2C_FIELD(arg0, u8 *, 0x61) = (u8) ((M2C_FIELD(arg0, u8 *, 0x61) + 0x10) & 0x1F);
        sub_08091590(arg0);
        temp_r0_2 = (0x7F & M2C_FIELD(arg0, u8 *, 0x55)) - 1;
        M2C_FIELD(arg0, u8 *, 0x55) = temp_r0_2;
        if ((temp_r0_2 << 0x18) != 0) {
            goto block_4;
        }
        sub_0807CD94(arg0);
        M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(arg0, u16 *, 0xE4);
        temp_r0_3 = M2C_FIELD(arg0, u16 *, 0xE6);
        M2C_FIELD(arg0, u16 *, 6) = temp_r0_3;
        M2C_FIELD(arg0, u16 *, 0x2C) = temp_r0_3;
        sub_0807B248(arg0);
        return;
    }
block_4:
    sub_0807B248(arg0);
}

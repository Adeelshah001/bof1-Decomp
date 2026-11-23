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

M2C_UNK sub_0803EE6C(void *);                       /* extern */

void sub_08052538(void *arg0) {
    u16 temp_r5;
    u8 temp_r2;
    u8 temp_r7;

    temp_r7 = *(u8 *)0x03004872;
    if (temp_r7 == 0) {
        M2C_FIELD(arg0, u16 *, 0xBC) = (u16) (M2C_FIELD(arg0, u16 *, 0xBC) - M2C_FIELD(arg0, u8 *, 0x55));
        M2C_FIELD(arg0, s32 *, 0x48) = (s32) (M2C_FIELD(arg0, s32 *, 0x48) - M2C_FIELD(arg0, s32 *, 0x44));
        temp_r5 = M2C_FIELD(arg0, u16 *, 0xBC);
        temp_r2 = M2C_FIELD(arg0, u8 *, 0x4A);
        *(s16 *)0x03001624 = (u16) (temp_r5 << 8) | (u8) ~temp_r5;
        *(s16 *)0x030016AC = (temp_r2 << 8) | (u8) ~temp_r2;
        if ((u32) temp_r5 < (u32) M2C_FIELD(arg0, u8 *, 0x54)) {
            *(u16 *)0x03001670 &= 0xBFFF;
            *(s16 *)0x03001688 = (s16) temp_r7;
            *(s16 *)0x030016C4 = (s16) temp_r7;
            M2C_FIELD(arg0, u16 *, 0xBC) = (u16) temp_r7;
            M2C_FIELD(arg0, s8 *, 0xC9) = 0;
            *(u8 *)0x03004870 += 1;
            *(s32 *)0x03001694 &= ~3;
            sub_0803EE6C(arg0);
        }
    }
}

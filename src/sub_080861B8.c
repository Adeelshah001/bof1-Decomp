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
M2C_UNK sub_0807B248(void *);                       /* extern */
s32 sub_0807B288(void *);                           /* extern */
M2C_UNK sub_08083300(void *, s32);                  /* extern */
M2C_UNK sub_08083BB4(void *);                       /* extern */
M2C_UNK sub_080866C4(void *);                       /* extern */

void sub_080861B8(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0x50);
    if (temp_r0 == 0) {
        if ((sub_0807B288(arg0) << 0x10) == 0) {
            M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
            sub_08037FC4(arg0, 0xA);
            sub_08083300(arg0, 0);
        }
    } else {
        if (temp_r0 != 2) {
            if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), u8 *, 0x4C) == 6) {
                sub_08083BB4(arg0);
                M2C_FIELD(arg0, u8 *, 0x50) = (u8) (M2C_FIELD(arg0, u8 *, 0x50) + 1);
            }
            goto block_7;
        }
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x74), u8 *, 0x3A) != 0) {
block_7:
            sub_0807B248(arg0);
            return;
        }
        sub_080866C4(arg0);
    }
}

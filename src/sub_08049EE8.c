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

u16 sub_08037C98(void *, s32);                      /* extern */
M2C_UNK sub_08037FC4(void *, s32);                  /* extern */
M2C_UNK sub_0803A974(void *);                       /* extern */
void sub_0804A2B8(void *arg0);                      /* extern */

void sub_08049EE8(void *arg0) {
    u16 temp_r1;

    if (0x80 & *(u8 *)0x03003F98) {
        M2C_FIELD(arg0, void (**)(void *), 0x64) = sub_0804A2B8;
        sub_08037FC4(arg0, 0);
        temp_r1 = sub_08037C98(arg0, 1);
        if (temp_r1 == 0) {
            M2C_FIELD(arg0, void (**)(void *), 0x64) = sub_08049EE8;
            *(u8 *)0x03003F98 = (u8) temp_r1;
        }
        sub_0803A974(arg0);
    }
}

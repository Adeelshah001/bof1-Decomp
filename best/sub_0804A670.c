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
M2C_UNK sub_0803A8EC(void *);                       /* extern */
u16 sub_0804A830(void *, void *);                   /* extern */

void sub_0804A670(void *arg0) {
    u16 temp_r3;
    u8 temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0xD4);
    if (!(8 & *(u8 *)0x03002B68) && (temp_r1 = *(u8 *)0x0202DE88, ((2 & temp_r1) == 0)) && (!(0x40 & temp_r1) || (M2C_FIELD(temp_r2, u8 *, 0x3C) != 5)) && (0xB & M2C_FIELD(temp_r2, u8 *, 0xBA))) {
        M2C_FIELD(arg0, u16 *, 2) = (u16) M2C_FIELD(temp_r2, u16 *, 2);
        M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(temp_r2, u16 *, 6);
        temp_r3 = M2C_FIELD(temp_r2, u16 *, 6);
        M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (temp_r3 - 1);
        if ((M2C_FIELD(temp_r2, u16 *, 2) != M2C_FIELD(temp_r2, u16 *, 0x82)) || (M2C_FIELD(temp_r2, u16 *, 6) != M2C_FIELD(temp_r2, u16 *, 0x86))) {
            if (2 & M2C_FIELD(temp_r2, u8 *, 0xBA)) {
                M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (temp_r3 + 1);
            }
            sub_08037FC4(arg0, sub_0804A830(arg0, temp_r2) + 2);
            sub_0803A8EC(arg0);
            M2C_FIELD(arg0, s8 *, 0x50) = 4;
            return;
        }
        sub_08037FC4(arg0, sub_0804A830(arg0, temp_r2) + 2);
        if (2 & M2C_FIELD(temp_r2, u8 *, 0xBA)) {
            M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C) + 2);
        }
        sub_0803A8EC(arg0);
    }
}

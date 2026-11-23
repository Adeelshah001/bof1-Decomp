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

M2C_UNK sub_0806B028(void *, u16);                  /* extern */
M2C_UNK sub_0806E090(void *);                       /* extern */
u16 sub_080734EC(void *);                           /* extern */
M2C_UNK sub_0807462C();                             /* extern */
M2C_UNK sub_08084EDC(void *, s32);                  /* extern */

void sub_080745A4(void *arg0) {
    u16 temp_r1;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x54);
    if ((u32) M2C_FIELD(temp_r4, u8 *, 0x3B) <= 3U) {
        temp_r1 = sub_080734EC(temp_r4);
        *(s8 *)0x0300457C = 0x15;
        sub_0806B028(temp_r4, temp_r1);
        sub_08084EDC(temp_r4, 0);
    }
    sub_0807462C();
    sub_0806E090(arg0);
}

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

M2C_UNK sub_08003378(s32);                          /* extern */
void *sub_0803ED98();                               /* extern */

void sub_0801D5BC(void) {
    u8 *temp_r1;
    void *temp_r0;

    temp_r0 = sub_0803ED98();
    *(void **)0x03004154 = temp_r0;
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
        M2C_FIELD(*(void **)0x03004154, s8 *, 0x3C) = 0x14;
        M2C_FIELD(*(void **)0x03004154, s8 *, 0x3B) = 0x16;
        *(s8 *)0x03004E90 = 1;
        sub_08003378(0x44);
        M2C_FIELD((void *)0x0300485C, s8 *, 0) = 0x40;
        M2C_FIELD((void *)0x0300485C, s8 *, 1) = 0x15;
        temp_r1 = ((void *)0x0300485C + 1) - 2;
        *temp_r1 += 1;
    }
}

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
M2C_UNK sub_080587D8();                             /* extern */

void sub_0801D1E0(void) {
    void *temp_r0;

    if (*(u16 *)0x03000854 == 1) {
        *(s8 *)0x0300485C = 0;
        sub_080587D8();
        *(u16 *)0x03000854 = 0;
    }
    if (*(u8 *)0x030023DC != 1) {
        temp_r0 = sub_0803ED98();
        *(void **)0x03004154 = temp_r0;
        *(s16 *)0x03001670 = 0x1100;
        if (temp_r0 != NULL) {
            M2C_FIELD(temp_r0, s8 *, 0x3A) = 1;
            M2C_FIELD(*(void **)0x03004154, s8 *, 0x3C) = 0x14;
            M2C_FIELD(*(void **)0x03004154, s8 *, 0x3B) = 0x15;
            sub_08003378(0x44);
            *(u8 *)0x0300485B += 1;
        }
    }
}

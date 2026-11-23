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

M2C_UNK sub_08017DB8(s32, s32);                     /* extern */
void *sub_0803ED98();                               /* extern */
M2C_UNK sub_0803FE44(s32, s32);                     /* extern */

void sub_08017D30(void) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0 = sub_0803ED98();
    *(void **)0x03004154 = temp_r0;
    if (temp_r0 != NULL) {
        sub_08017DB8(0x7E8, 0xFFFFCD90);
        *(s8 *)0x030033F0 = 0;
        temp_r0_2 = sub_0803ED98();
        *(void **)0x03004154 = temp_r0_2;
        if (temp_r0_2 != NULL) {
            M2C_FIELD(temp_r0_2, s8 *, 0x3A) = 1;
            M2C_FIELD(*(void **)0x03004154, s8 *, 0x3C) = 0x14;
            M2C_FIELD(*(void **)0x03004154, s8 *, 0x3B) = 3;
            sub_0803FE44(0, 6);
            *(s8 *)0x0300485C = 2;
            *(s8 *)0x0300485D = 0;
            *(s16 *)0x03004164 = 0x200;
            *(u8 *)0x0300485B += 1;
        }
    }
}

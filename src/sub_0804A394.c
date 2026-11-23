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

M2C_UNK sub_0803A8EC(void *);                       /* extern */
M2C_UNK sub_0804A2E8(void *);                       /* extern */
s32 sub_0804A444();                                 /* extern */
s32 sub_0804A470(void *);                           /* extern */
s32 sub_0804A48C(void *);                           /* extern */
M2C_UNK sub_0804A4B4(void *);                       /* extern */
M2C_UNK sub_0804A4E0(void *);                       /* extern */
extern M2C_UNK sub_0804A3E8;

void sub_0804A394(void *arg0) {
    if ((sub_0804A444() << 0x18) == 0) {
        if ((sub_0804A48C(arg0) << 0x18) == 0) {
            if ((sub_0804A470(arg0) << 0x18) != 0) {
                sub_0804A2E8(arg0);
                sub_0804A4B4(arg0);
            }
        } else {
            sub_0804A2E8(arg0);
            sub_0804A4E0(arg0);
            M2C_FIELD(arg0, M2C_UNK **, 0x64) = &sub_0804A3E8;
        }
        sub_0803A8EC(arg0);
    }
}

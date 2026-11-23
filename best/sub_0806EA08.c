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

M2C_UNK sub_08000248(s32);                          /* extern */
M2C_UNK sub_08003378(s32);                          /* extern */
M2C_UNK sub_080379D4(s32);                          /* extern */
M2C_UNK sub_08059978();                             /* extern */
M2C_UNK sub_08059D68(s32);                          /* extern */
M2C_UNK sub_0805B15C();                             /* extern */
M2C_UNK sub_0806C1A0(s32, s32, s32, s32, s32);      /* extern */
M2C_UNK sub_0806C810();                             /* extern */
M2C_UNK sub_0806EDD0(s32, s32);                     /* extern */
M2C_UNK sub_080721A0(s32);                          /* extern */
M2C_UNK sub_08073B50();                             /* extern */
M2C_UNK sub_0807496C(void *);                       /* extern */
M2C_UNK sub_0807497C(void *);                       /* extern */
M2C_UNK sub_080749A0(void *);                       /* extern */
M2C_UNK sub_08081F84(void *);                       /* extern */
M2C_UNK sub_08082038(void *);                       /* extern */
M2C_UNK sub_0809B534(s32);                          /* extern */

void sub_0806EA08(void *arg0) {
    s32 var_r0_2;
    u8 temp_r0;
    u8 var_r0;
    void *temp_r1;
    void *temp_r1_2;

    if (M2C_FIELD(arg0, u8 *, 0) == 3) {
        sub_080721A0(2);
        sub_0806C810();
        sub_0805B15C();
        sub_08073B50();
        sub_0806EDD0(0, -1);
        sub_0806C1A0(1, 0x10, 0x1C, 3, 1);
        sub_08059978();
        var_r0 = M2C_FIELD(arg0, u8 *, 0);
        if ((u32) var_r0 > 0x4FU) {
            var_r0 = 0;
        }
        if (var_r0 != 1) {
            if (var_r0 != 3) {
                var_r0_2 = 0;
            } else {
                var_r0_2 = 0x80E3;
            }
        } else {
            var_r0_2 = 0x42;
        }
        if (!(0x8000 & var_r0_2)) {
            sub_08059D68(var_r0_2);
        } else {
            sub_08059D68(var_r0_2);
        }
        M2C_FIELD(arg0, s8 *, 2) = 0xC;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x5B) = 0;
    if (M2C_FIELD((void *)0x03004F30, u16 *, 2) == 0) {
        sub_080749A0(arg0);
        return;
    }
    sub_080721A0(2);
    sub_0806C810();
    sub_0805B15C();
    sub_08073B50();
    sub_0806EDD0(0, -1);
    sub_0806C1A0(1, 0x10, 0x1C, 3, 1);
    sub_08059978();
    sub_080379D4(0xF0);
    sub_08000248(1);
    sub_08003378(0x26);
    sub_08000248(1);
    sub_08081F84(arg0);
    sub_0809B534(0x729);
    temp_r1 = *(void **)0x03004550;
    M2C_FIELD(arg0, void **, 0x1C) = (void *) (temp_r1 + 3);
    if (M2C_FIELD(temp_r1, u8 *, 3) != 0) {
        do {
            temp_r1_2 = M2C_FIELD(arg0, void **, 0x1C);
            M2C_FIELD(arg0, void **, 0x1C) = (void *) (temp_r1_2 + 1);
        } while (M2C_FIELD(temp_r1_2, u8 *, 1) != 0);
    }
    sub_08082038(arg0);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x68) & 0x80;
    if (temp_r0 != 0) {
        sub_0807497C(arg0);
        return;
    }
    M2C_FIELD(arg0, u8 *, 9) = temp_r0;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), s8 *, 0) = 9;
    M2C_FIELD(arg0, void **, 0x1C) = (void *) (M2C_FIELD(arg0, void **, 0x1C) + 1);
    sub_0807496C(arg0);
}

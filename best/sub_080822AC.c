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

u16 sub_08037974(u8, s32);                          /* extern */
M2C_UNK sub_080827C8(void *, s32);                  /* extern */
s8 sub_08082A18(s32, u16);                          /* extern */
s32 sub_08082A98(void *);                           /* extern */
u16 sub_08082AE8(void *);                           /* extern */
M2C_UNK sub_08082B30(void *);                       /* extern */
M2C_UNK sub_080847E4(void *, void *);               /* extern */

u8 sub_080822AC(void *arg0) {
    u16 temp_r1_2;
    u16 temp_r3;
    u16 temp_r3_2;
    u16 temp_r3_3;
    u16 temp_r3_4;
    u16 temp_r3_5;
    u16 temp_r3_6;
    u16 var_r3_10;
    u16 var_r3_2;
    u16 var_r3_3;
    u16 var_r3_4;
    u16 var_r3_5;
    u16 var_r3_6;
    u16 var_r3_7;
    u16 var_r3_8;
    u16 var_r3_9;
    u32 temp_r1;
    u8 var_r3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;
    void *temp_r5_4;
    void *temp_r5_5;
    void *temp_r5_6;
    void *temp_r5_7;

    temp_r5 = M2C_FIELD(arg0, void **, 0x4C);
    temp_r1 = 0xF80000 & ((M2C_FIELD(temp_r5, u8 *, 0xF2) - 1) << 0x10);
    M2C_FIELD(arg0, s16 *, 0x54) = (s16) ((u16) ((temp_r1 >> 0x10) - (temp_r1 >> 0x13)) + sub_08037974(M2C_FIELD(temp_r5, u8 *, 0x3C), 0x5B));
    if ((sub_08082A98(temp_r5) == 0) && (sub_08082AE8(arg0) != 0)) {
        if (0x28 & M2C_FIELD(temp_r5, u8 *, 0xF0)) {
            sub_080847E4(arg0, temp_r5);
        }
        temp_r1_2 = 0xFF & M2C_FIELD(arg0, u16 *, 0x24);
        M2C_FIELD(arg0, u16 *, 0x24) = temp_r1_2;
        var_r3_2 = M2C_FIELD(temp_r5, u16 *, 0xF4) + temp_r1_2;
        if ((u32) var_r3_2 > 0x3E6U) {
            M2C_FIELD(arg0, u16 *, 0x24) = (u16) (var_r3_2 + 0xFFFFFC19);
            var_r3_2 = 0x3E7;
        }
        M2C_FIELD(temp_r5, u16 *, 0xF4) = var_r3_2;
        if (!(0x80 & M2C_FIELD(temp_r5, u8 *, 0xF1))) {
            var_r3_3 = M2C_FIELD(arg0, u16 *, 0x24) + M2C_FIELD(temp_r5, u16 *, 0xF6);
            if ((u32) var_r3_3 >= (u32) var_r3_2) {
                var_r3_3 = M2C_FIELD(temp_r5, u16 *, 0xF4);
            }
            M2C_FIELD(temp_r5, u16 *, 0xF6) = var_r3_3;
        }
        M2C_FIELD(arg0, s8 **, 0x18) = (s8 *)0x0200BBA0;
        sub_08082B30(arg0);
        *M2C_FIELD(arg0, s8 **, 0x18) = sub_08082A18(M2C_FIELD(arg0, s8 **, 0x18) + 1, M2C_FIELD(arg0, u16 *, 0x24));
        sub_080827C8(arg0, 0x62C);
    }
    M2C_FIELD(arg0, s16 *, 0x54) = (s8) ((u8) M2C_FIELD(arg0, s16 *, 0x54) + 1);
    temp_r5_2 = M2C_FIELD(arg0, void **, 0x4C);
    if ((u32) M2C_FIELD(temp_r5_2, u16 *, 0xF8) <= 0x3E6U) {
        temp_r3 = sub_08082AE8(arg0);
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, u16 *, 0x24) = temp_r3;
            var_r3_4 = M2C_FIELD(temp_r5_2, u16 *, 0xF8) + temp_r3;
            if ((u32) var_r3_4 > 0x3E6U) {
                M2C_FIELD(arg0, u16 *, 0x24) = (u16) (var_r3_4 + 0xFFFFFC19);
                var_r3_4 = 0x3E7;
            }
            M2C_FIELD(temp_r5_2, u16 *, 0xF8) = var_r3_4;
            var_r3_5 = M2C_FIELD(arg0, u16 *, 0x24) + M2C_FIELD(temp_r5_2, u16 *, 0xFA);
            if ((u32) var_r3_5 >= (u32) var_r3_4) {
                var_r3_5 = M2C_FIELD(temp_r5_2, u16 *, 0xF8);
            }
            M2C_FIELD(temp_r5_2, u16 *, 0xFA) = var_r3_5;
            sub_08082B30(arg0);
            M2C_FIELD(arg0, s8 **, 0x18) = (s8 *)0x0200BBE0;
            *M2C_FIELD(arg0, s8 **, 0x18) = sub_08082A18(0x0200BBE1, M2C_FIELD(arg0, u16 *, 0x24));
            sub_080827C8(arg0, 0x62D);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x54) = (s8) ((u8) M2C_FIELD(arg0, s16 *, 0x54) + 1);
    temp_r5_3 = M2C_FIELD(arg0, void **, 0x4C);
    if ((u8) (M2C_FIELD(temp_r5_3, u8 *, 0x100) + 1) != 0) {
        temp_r3_2 = sub_08082AE8(arg0);
        if (temp_r3_2 != 0) {
            var_r3_6 = temp_r3_2 + M2C_FIELD(temp_r5_3, u8 *, 0x100);
            if ((u32) var_r3_6 > 0xFFU) {
                M2C_FIELD(arg0, u16 *, 0x24) = (u16) (u8) var_r3_6;
                var_r3_6 = 0xFF;
            }
            M2C_FIELD(temp_r5_3, u8 *, 0x100) = (u8) var_r3_6;
            sub_08082B30(arg0);
            M2C_FIELD(arg0, s8 **, 0x18) = (s8 *)0x0200BC20;
            *M2C_FIELD(arg0, s8 **, 0x18) = sub_08082A18(0x0200BC21, M2C_FIELD(arg0, u16 *, 0x24));
            sub_080827C8(arg0, 0x62E);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x54) = (s8) ((u8) M2C_FIELD(arg0, s16 *, 0x54) + 1);
    temp_r5_4 = M2C_FIELD(arg0, void **, 0x4C);
    if ((u8) (M2C_FIELD(temp_r5_4, u8 *, 0x101) + 1) != 0) {
        temp_r3_3 = sub_08082AE8(arg0);
        if (temp_r3_3 != 0) {
            var_r3_7 = temp_r3_3 + M2C_FIELD(temp_r5_4, u8 *, 0x101);
            if ((u32) var_r3_7 > 0xFFU) {
                M2C_FIELD(arg0, u16 *, 0x24) = (u16) (u8) var_r3_7;
                var_r3_7 = 0xFF;
            }
            M2C_FIELD(temp_r5_4, u8 *, 0x101) = (u8) var_r3_7;
            sub_08082B30(arg0);
            M2C_FIELD(arg0, s8 **, 0x18) = (s8 *)0x0200BC60;
            *M2C_FIELD(arg0, s8 **, 0x18) = sub_08082A18(0x0200BC61, M2C_FIELD(arg0, u16 *, 0x24));
            sub_080827C8(arg0, 0x62F);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x54) = (s8) ((u8) M2C_FIELD(arg0, s16 *, 0x54) + 1);
    temp_r5_5 = M2C_FIELD(arg0, void **, 0x4C);
    if ((u8) (M2C_FIELD(temp_r5_5, u8 *, 0x103) + 1) != 0) {
        temp_r3_4 = sub_08082AE8(arg0);
        if (temp_r3_4 != 0) {
            var_r3_8 = temp_r3_4 + M2C_FIELD(temp_r5_5, u8 *, 0x103);
            if ((u32) var_r3_8 > 0xFFU) {
                M2C_FIELD(arg0, u16 *, 0x24) = (u16) (u8) var_r3_8;
                var_r3_8 = 0xFF;
            }
            M2C_FIELD(temp_r5_5, u8 *, 0x103) = (u8) var_r3_8;
            sub_08082B30(arg0);
            M2C_FIELD(arg0, s8 **, 0x18) = (s8 *)0x0200BCA0;
            *M2C_FIELD(arg0, s8 **, 0x18) = sub_08082A18(0x0200BCA1, M2C_FIELD(arg0, u16 *, 0x24));
            sub_080827C8(arg0, 0x630);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x54) = (s8) ((u8) M2C_FIELD(arg0, s16 *, 0x54) + 1);
    temp_r5_6 = M2C_FIELD(arg0, void **, 0x4C);
    if ((u8) (M2C_FIELD(temp_r5_6, u8 *, 0x102) + 1) != 0) {
        temp_r3_5 = sub_08082AE8(arg0);
        if (temp_r3_5 != 0) {
            var_r3_9 = temp_r3_5 + M2C_FIELD(temp_r5_6, u8 *, 0x102);
            if ((u32) var_r3_9 > 0xFFU) {
                M2C_FIELD(arg0, u16 *, 0x24) = (u16) (u8) var_r3_9;
                var_r3_9 = 0xFF;
            }
            M2C_FIELD(temp_r5_6, u8 *, 0x102) = (u8) var_r3_9;
            sub_08082B30(arg0);
            M2C_FIELD(arg0, s8 **, 0x18) = (s8 *)0x0200BCE0;
            *M2C_FIELD(arg0, s8 **, 0x18) = sub_08082A18(0x0200BCE1, M2C_FIELD(arg0, u16 *, 0x24));
            sub_080827C8(arg0, 0x631);
        }
    }
    M2C_FIELD(arg0, s16 *, 0x54) = (s8) ((u8) M2C_FIELD(arg0, s16 *, 0x54) + 1);
    temp_r5_7 = M2C_FIELD(arg0, void **, 0x4C);
    if ((u8) (M2C_FIELD(temp_r5_7, u8 *, 0x105) + 1) != 0) {
        temp_r3_6 = sub_08082AE8(arg0);
        if (temp_r3_6 != 0) {
            var_r3_10 = temp_r3_6 + M2C_FIELD(temp_r5_7, u8 *, 0x105);
            if ((u32) var_r3_10 > 0xFFU) {
                M2C_FIELD(arg0, u16 *, 0x24) = (u16) (u8) var_r3_10;
                var_r3_10 = 0xFF;
            }
            M2C_FIELD(temp_r5_7, u8 *, 0x105) = (u8) var_r3_10;
            sub_08082B30(arg0);
            M2C_FIELD(arg0, s8 **, 0x18) = (s8 *)0x0200BD20;
            *M2C_FIELD(arg0, s8 **, 0x18) = sub_08082A18(0x0200BD21, M2C_FIELD(arg0, u16 *, 0x24));
            sub_080827C8(arg0, 0x632);
        }
    }
    var_r3 = M2C_FIELD(arg0, u8 *, 0x26);
    if (var_r3 != 0) {
        sub_080827C8(arg0, 0x8681);
        M2C_FIELD(arg0, u8 *, 0x26) = 0U;
        var_r3 = 1;
    }
    return var_r3;
}

extern u8 D_03004830[];
extern u8 D_03001850[];
extern s32 sub_080017EC(s32);
extern s32 sub_0800764C(s32);
extern s32 sub_0805CE34(s32);
extern s32 sub_0805D704(u8, u8 *);

void sub_0805BB50(u8 arg0, s16 *arg1, u16 *arg2) {
    u8 sp0;
    u16 var_r0;

    if ((arg0 & 0x80) == 0) {
        sp0 = 0;
        if ((u8)sub_0805D704(arg0, &sp0) != 0) {
            D_03004830[0x2A] = 5;
            D_03004830[0x2B] = 5;
            sub_080017EC(0x2A);
            sub_0805CE34(0x12E);
            sub_0800764C(1);
            D_03001850[0] = 1;
            var_r0 = 0x3A;
        } else {
            var_r0 = 0x735;
        }
    } else {
        var_r0 = 0x3A;
    }
    *arg1 = var_r0;
    *arg2 = 0xFFFF;
}

extern vu16 * const D_04000204;
extern u16 D_09FE20F8[];

extern void sub_080A02B4(u8);
extern void sub_080A0578(void);

void sub_080A03A0(u8 c) {
    vu16 *reg;
    u16 saved;
    u16 *ptr;

    reg = (vu16 *)0x04000204;
    saved = *reg;
    *reg = 0x1800;
    sub_080A02B4(c);
    *reg = saved;
    
    ptr = D_09FE20F8;
    if (ptr[3] == (u16)(ptr[2] - 1)) {
        sub_080A0578();
    }
}

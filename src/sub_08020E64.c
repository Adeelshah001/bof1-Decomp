
extern u8 D_03004830[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u16 D_0300413C;

void sub_080201B0(void);
void sub_08020E64(u16 arg0);

void sub_08020DF8(void) {
    u8 *p = D_03004830 + 0x2C;
    p[0] = 8;
    p[1] = 3;
    p[0]++;
}

void sub_08020E18(void) {
    u16 *p = (u16*)D_0300413C; /* Wait, D_0300413C is u16 */
    /* Let's match the draft closely */
    s16 temp_r1;
    s16 temp_r0;

    temp_r1 = D_02020FC0[0] | (D_02020FC0[1] << 8);
    *(u16*)0x0300413C = temp_r1;
    if (temp_r1 == 0) {
        sub_08020E64(0);
    } else {
        temp_r0 = temp_r1 + (s16)0xFFFFEB5B;
        *(u16*)0x0300413C = temp_r0;
        if ((s32)(temp_r0 << 0x10) >= 0) {
            sub_08020E64(*(u16*)0x0300413C);
        } else {
            sub_08020E64(0);
        }
    }
}

void sub_08020E64(u16 arg0) {
    u16 temp_r0 = arg0;
    s32 temp_r1;

    D_02020FC0[0] = (s8)temp_r0;
    temp_r1 = (s32)(temp_r0 << 0x10) >> 0x18;
    D_02020FC0[1] = (s8)temp_r1;
    D_020211C0[0] = (s8)temp_r0;
    D_020211C0[1] = (s8)temp_r1;
}

/* identical to sub_08020DC8 (matched), with its names changed by decompdecomp */

extern u8 D_03004830[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u16 D_0300413C;

void sub_08020978(void);
void sub_08020E64(u16 arg0);

void sub_08021938(void) {
    u8 *p = D_03004830;
    u8 temp;
    
    temp = --p[0x2C];
    if (temp == 0) {
        sub_08020978();
    }
}

void sub_08020DF8(void) {
    u8 *p = D_03004830;
    p[0x2C] = 8;
    p[0x2D] = 3;
    p[0x2C]++;
}

void sub_08020E18(void) {
    u16 val;
    
    val = D_02020FC0[0] | (D_02020FC0[1] << 8);
    D_0300413C = val;
    if (val == 0) {
        sub_08020E64(0);
    } else {
        val += 0xEB5B;
        D_0300413C = val;
        if ((s16)val >= 0) {
            sub_08020E64(D_0300413C);
        } else {
            sub_08020E64(0);
        }
    }
}

void sub_08020E64(u16 arg0) {
    u8 val = arg0;
    s8 val_s = (s8)(arg0 & 0xFF);
    D_02020FC0[0] = val;
    D_02020FC0[1] = val_s;
    D_020211C0[0] = val;
    D_020211C0[1] = val_s;
}

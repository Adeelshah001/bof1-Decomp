extern u8 D_03004F50[];
extern u8 D_03004584[];
extern u8 D_03004830[];
extern u8 D_03002AB0[];
extern u8 D_0202DBD0[];
void sub_08002BBC(u8);
void sub_080017EC(s32);

void sub_0807E8B0(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_03004584[0] = 1;
        sub_08002BBC(D_03004F50[0x5B]);
        return;
    }
    D_03004830[0x2D] |= (u8)(0 - 0x80);
    {
        u16 *p = (u16 *)D_0202DBD0;
        p[3] = 0x1038;
        p[5] = 0x59BC;
    }
}

void sub_0807ECE8(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_03004584[0] = 1;
        sub_08002BBC(D_03004F50[0x5B]);
        return;
    }
    {
        u16 *p = (u16 *)D_0202DBD0;
        p[3] = 0x1678;
        p[5] = 0x676C;
    }
    sub_080017EC(0x9D);
}

void sub_0807ED2C(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_03002AB0[0xB8] &= 0xFB;
        D_03004584[0] = 1;
        sub_08002BBC(D_03004F50[0x5B]);
    } else {
        sub_080017EC(0xD7);
    }
}

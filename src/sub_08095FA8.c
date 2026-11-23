extern u8 D_03004F50[];
void sub_08095FCC(void *obj, s32 dx, s32 dy);
u8 sub_080957BC(void *obj);
void sub_08096CD4(void *obj);
void sub_08083AC8(s32 arg0);
void sub_080960B4(void *obj);

void sub_08095FA8(void *obj) {
    s32 dx = 0;
    s32 dy = 0x10;
    if (D_03004F50[0x58] != 0) {
        dx = -0x10;
        dy = 0;
    }
    sub_08095FCC(obj, dx, dy);
}

void sub_08095F6C(u8 *obj) {
    s32 dx, dy;
    if (--obj[0x54] == 0) {
        if (D_03004F50[0x58] != 0) {
            dy = -8;
            dx = -8;
        } else {
            dy = 8;
            dx = 8;
        }
        sub_08095FCC(obj, dx, dy);
    }
}

void sub_08095F38(u8 *obj) {
    s32 dx, dy;
    if (--obj[0x54] == 0) {
        dx = 0x10;
        dy = 0;
        if (D_03004F50[0x58] != 0) {
            dx = 0;
            dy = -0x10;
        }
        sub_08095FCC(obj, dx, dy);
    }
}

void sub_0809607C(void *obj) {
    u8 r;
    while (1) {
        r = sub_080957BC(obj);
        if (r == 0)
            return;
        if (r != 2)
            break;
    }
    if (r == 3) {
        sub_08096CD4(obj);
    } else {
        sub_08083AC8(0x5680);
        sub_080960B4(obj);
    }
}

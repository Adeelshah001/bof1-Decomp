extern u8 D_03004550[];
void sub_08019B78(s32);
void sub_080017EC(s32);

void sub_0801C980(void) {
    sub_080017EC(0xB);
}

void sub_0801C9C4(void) {
    u8 *base = D_03004830;
    s8 *ptr = (s8 *)(base + 0x2D);
    if (*ptr == 0) {
        (*(u8 *)ptr)++;
        ptr[-3] = 0xD;
        base[0x2B] = 0;
    }
}

void sub_0801C9EC(void) {
    if (!(D_03004550[0x23] & 0x80)) {
        D_03004830[0x2C] = 0x20;
        sub_08019B78(0xE);
    }
}

void sub_0801CA18(void) {
    u8 flag = D_03004550[0x23] & 0x80;
    if (flag != 0) {
        D_03004830[0x2D] = 0;
        sub_08019B78(0x10);
    } else {
        ((Entity *)D_03003420)->unk68 += 0x11;
        D_03004830[0x2D] = flag;
        sub_08019B78(0xF);
    }
}

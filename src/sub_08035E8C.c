void sub_080A0A68(void *dst, const void *src, s32 n);
void sub_08035F90(u8 c);
void sub_08035F40(void);
u8 sub_08001770(s32 arg0);

extern u8 D_080A64A4[];
extern u8 D_080A64A8[];
extern u8 D_03002490[];

void sub_08035E00(void) {
    u8 buf[2];
    u8 i;

    sub_080A0A68(buf, D_080A64A4, 2);
    i = 0;
    do {
        sub_08035F90(buf[i]);
        i++;
    } while (i <= 1);
    sub_08035F40();
}

void sub_08035E8C(void) {
    u8 buf[2];
    u8 i;

    sub_080A0A68(buf, D_080A64A8, 2);
    if (sub_08001770(0xB2) == 0) {
        i = 0;
        do {
            sub_08035F90(buf[i]);
            i++;
        } while (i <= 1);
        D_03002490[0x18] = 0;
        sub_08035F40();
    } else {
        sub_08035F90(4);
        sub_08035F40();
    }
}

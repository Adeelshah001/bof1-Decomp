extern void sub_08099ACC(void *);
extern void sub_08099A84(void *);
extern void sub_08098F2C(void *);
extern void sub_08098FF0(void *);
extern void sub_080352D0(const char *, const char *, s32, u8);

extern const char D_080A7C44[];
extern const char D_080A7C18[];

void sub_08099A24(void *arg0) {
    u8 *p = (u8 *)arg0;
    switch (p[0x4C]) {
    case 0:
        sub_08099ACC(arg0);
        break;
    case 2:
        sub_08099A84(arg0);
        break;
    case 4:
        sub_08098F2C(arg0);
        break;
    case 6:
        sub_08098FF0(arg0);
        break;
    default:
        sub_080352D0(D_080A7C44, D_080A7C18, 0x1D1, p[0x4C]);
        break;
    }
}

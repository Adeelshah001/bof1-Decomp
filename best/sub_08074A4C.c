void sub_080721A0(s32 arg0);
void sub_0806C810(void);
void sub_0805B15C(void);
void sub_08073B50(void);
void sub_0806EDD0(s32 arg0, s32 arg1);
void sub_0806C1A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void sub_08059978(void);
void sub_08059D68(u16 arg0);
void sub_080749F0(s32 arg0);

void sub_08074A00(s32 arg0, u16 arg1) {
    sub_080721A0(2);
    sub_0806C810();
    sub_0805B15C();
    sub_08073B50();
    sub_0806EDD0(0, -1);
    sub_0806C1A0(1, 0x10, 0x1C, 3, 1);
    sub_08059978();
    sub_08059D68(arg1);
    sub_080749F0(arg0);
}

extern u8 D_0202DBD0[];

void sub_08074AA4(void *arg0);

void sub_08074A4C(void *arg0, s8 arg1, u16 arg2) {
    u8 *base = (u8 *)arg0 + 0x68;
    base[arg2 + 2] = arg1;
    base[arg2 + 3] = (u8)((*(u8 *)((u8 *)arg0 + 0x58) >> 1));
    if (base[arg2] == 0x0C) {
        u16 *ptr = (u16 *)(&D_0202DBD0[0x204 + base[arg2 + 1] * 2]);
        *ptr = (u16)(*ptr + 0xFFFFFF00);
    }
    sub_08074AA4(arg0);
}

void sub_08071C1C(void);

void sub_08074B50(void) {
    u16 *dst = (u16 *)0x050003A0;
    u16 *src = (u16 *)0x081511C8;
    s32 i = 15;
    do {
        *dst++ = *src++;
    } while (--i >= 0);
}

void sub_08073320(void);
void sub_08074C9C(void);
void sub_08074CC4(void);

void sub_08074C70(void *arg0) {
    u8 val = *(u8 *)((u8 *)arg0 + 1);
    if (val == 2) {
        sub_08073320();
    } else if (val > 2) {
        if (val == 4) {
            sub_08074CC4();
        }
    } else if (val == 0) {
        sub_08074C9C();
    }
}

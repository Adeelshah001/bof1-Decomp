void sub_080379D4(s32);
void sub_0803828C(void *, void *, u16, u8);
void sub_080482D8(void *);
void sub_0804B59C(void *);
void sub_0804B690(void *);
void sub_0803A974(void *);

void sub_0804B540(u8 *arg0) {
    u8 *e = arg0;
    *(u16 *)(arg0 + 0x38) = *(u16 *)(arg0 + 0xBE);
    sub_0803828C(arg0, arg0 + 4, *(u16 *)(arg0 + 0x38), arg0[0x61]);
    sub_080482D8(arg0);
    if (--arg0[0x54] == 0) {
        arg0[0x54] = 0x3C;
        arg0[0x55] = 4;
        sub_080379D4(0x11);
        *(u32 *)(arg0 + 0x64) = (u32)sub_0804B59C;
    }
    sub_0804B690(e);
    sub_0803A974(e);
}

extern u8 D_03002AB0[];

void *sub_0803F984(u8 arg0) {
    void *ret = NULL;
    u8 i = 0;

    do {
        if (D_03002AB0[0x3A] != 0) {
            u8 *p = D_03002AB0 + i * 0x124;
            if (p[0x3C] == arg0 && !(p[0xF0] & 0x40)) {
                ret = p;
                break;
            }
        }
        i++;
    } while (i <= 7);

    return ret;
}

void sub_0803E9EC(u16);
void sub_0803EB30(u16);

void sub_0803F8EC(u16 arg0, u16 arg1) {
    if ((arg0 & 7) > 3) {
        sub_0803E9EC(arg0);
    } else {
        sub_0803EB30(arg0);
    }
}

extern u8 D_030023E0[];
u8 *sub_0803EDDC(u16);
void sub_08046410(void);

void sub_0803F8B4(u16 arg0) {
    u8 *p = sub_0803EDDC(*(u16 *)(D_030023E0 + 0xA0));
    if (p != NULL) {
        p[0x3A] = 1;
        *(u32 *)(p + 0x64) = (u32)sub_08046410;
        p[0x3C] = 2;
        *(u16 *)(p + 0x2A) = arg0;
    }
}

typedef struct {
    u8 pad00[0xA0];
    u16 unkA0;
} Struct_030023E0;
extern Struct_030023E0 D_030023E0;
u8 *sub_0803EDDC(u16);
void sub_08046410(void);

void sub_0803F8B4(u16 arg0) {
    u8 *p = sub_0803EDDC(D_030023E0.unkA0);
    if (p != NULL) {
        p[0x3A] = 1;
        *(u32 *)(p + 0x64) = (u32)sub_08046410;
        p[0x3C] = 2;
        *(u16 *)(p + 0x2A) = arg0;
    }
}

void sub_0803E9EC(u16, u16);
void sub_0803EB30(u16, u16);

void sub_0803F8EC(u16 arg0, u16 arg1) {
    if ((arg0 & 7) > 3) {
        sub_0803E9EC(arg0, arg1);
    } else {
        sub_0803EB30(arg0, arg1);
    }
}

extern u8 D_03002AB0[];

void *sub_0803F984(u8 arg0) {
    void *ret = NULL;
    u8 i = 0;
    u8 *p;

    do {
        if (D_03002AB0[0x3A] != 0) {
            p = D_03002AB0 + i * 0x124;
            if (p[0x3C] == arg0 && !(p[0xF0] & 0x40)) {
                ret = p;
                goto done;
            }
        }
        i++;
    } while (i <= 7);

done:
    return ret;
}

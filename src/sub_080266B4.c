extern u8 D_030023E0[];
extern u16 D_03004114;
u8 sub_08023314(void);
u8 sub_08023374(void);

typedef struct {
    u8 pad[0xA8];
    u16 unkA8;
} Struct_030023E0;

void sub_0802644C(void) {
    if (((Struct_030023E0 *)D_030023E0)->unkA8 != 0xB4) {
        D_03004114 = sub_08023374();
    } else {
        D_03004114 = sub_08023314();
    }
}

u8 sub_08027E84(void *arg0);

u8 sub_080266B4(u8 *arg0) {
    if (arg0[0x3E] == 7) {
        u16 *out = (u16 *)0x03004114;
        u8 value = sub_08027E84(arg0);
        *out = value;
        return value;
    }
    return 0;
}

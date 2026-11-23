typedef struct {
    u8 pad00[0x3E];
    u8 unk3E;
    u8 pad3F[0xBA - 0x3F];
    u8 unkBA;
} Unk03002AB0;
extern Unk03002AB0 D_03002AB0;

extern u8 D_030033D8;
extern u8 D_030023DC;
extern u8 D_030023E0[];
void sub_08028400(void);
void sub_0802C248(s32, u16);
void sub_0800312C(s32, s32);
void sub_08001F80(s32, void (*)(void), void *);

s32 sub_08037304(void) {
    return D_03002AB0.unkBA & 1;
}

s32 sub_08037318(void) {
    s32 ret = 0;
    if ((D_03002AB0.unkBA & 1) || D_03002AB0.unk3E == 6) {
        ret = 1;
    }
    return ret;
}

s32 sub_08037344(void) {
    s32 ret = 1;
    if ((D_03002AB0.unkBA & 1) || D_03002AB0.unk3E == 0xD) {
        ret = 0;
    }
    return ret;
}

s32 sub_08037280(void) {
    u8 *p;
    D_030033D8 = 0;
    p = D_030023E0;
    sub_0802C248(0, *(u16 *)(p + 0xA4));
    if (D_030023DC != 0xFF) {
        sub_0800312C(0x10, 0);
        sub_08001F80(1, sub_08028400, p);
    }
    return 1;
}

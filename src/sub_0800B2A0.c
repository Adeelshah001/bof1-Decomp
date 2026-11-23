void sub_08007494(void);
void sub_080074A4(void);
void sub_080074B4(void);
void sub_080074C4(void);
void sub_080074D4(void);
void sub_080074E4(void);
void sub_080074F4(void);
void sub_08007504(void);
void sub_08007514(void);

void sub_0800B210(void) {
    sub_08007514();
    sub_080074A4();
    sub_08007494();
    sub_080074B4();
    sub_080074C4();
    sub_080074D4();
    sub_080074E4();
    sub_080074F4();
    sub_08007504();
}

typedef struct {
    u8 pad00[0x68];
    u32 unk68;
    u8 pad6C[0x268 - 0x6C];
    u32 unk268;
} Unk03003420;

void sub_0800B23C(void) {
    ((Unk03003420 *)D_03003420)->unk68++;
    ((Unk03003420 *)D_03003420)->unk268++;
}

void sub_0800B274(Entity *arg0, u16 arg1, s16 arg2) {
    u16 *p;
    *(u16 *)((u8 *)arg0 + 2) = arg1;
    p = (u16 *)((u8 *)arg0 + 0x46);
    *p = arg1;
    arg0->unk6 = arg2;
    arg0->unk2C = arg2;
    p += 2;
    *p = arg2;
    sub_080547DC(arg0, 2);
    arg0->unk2C = arg0->unk6;
}

void sub_080063B8(u16, u16);

void sub_0800B2A0(u16 arg0, u16 arg1) {
    u8 *base;
    sub_080063B8(arg0, arg1);
    base = D_03004830;
    base[0x2C] = 0x10;
    base[0x2B]++;
}

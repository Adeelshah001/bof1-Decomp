void sub_08067CD4(s32, s32, s32);
void sub_080689F4(s32, s32, s32, s32);

extern u16 D_030045A0;
extern u8 D_0300457C;

typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 unk3C;
} Actor6AC58;

void sub_0806AC58(Actor6AC58 *arg0, u16 arg1) {
    u16 flag = D_030045A0 & 0x80;
    s32 dim = flag != 0;
    s32 x;
    s32 y;

    sub_08067CD4(arg0->unk3B, arg0->unk3C, dim);
    x = (arg1 & 0x3E) << 2;
    y = (arg1 & 0x7C0) >> 3;
    if (D_0300457C == 0) {
        s32 tmp = y - 6;
        y = tmp - ((arg0->unk3B & 3) << 2);
    }
    sub_080689F4(x, y, arg0->unk3B, arg0->unk3C);
}

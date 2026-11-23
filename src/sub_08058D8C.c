extern u16 D_03000AD2;
extern u16 D_0300168C;
extern u16 D_03001644;
extern u8 D_030023DC;
extern u8 D_02020FC0[];
extern u8 D_0200D280[];
extern u8 *D_03004EA4;

void sub_080A0210(const void *src, void *dst, u32 control);

void sub_08058D8C(u8 *state)
{
    u8 *params = state + 3;
    u32 one = 1;
    u8 *src;
    u8 *dst;

    params[1] = one;
    state[3] = 0;
    params[2] = 2;

    D_03000AD2 = D_0300168C;
    D_0300168C = 0xDF;
    D_03001644 = 0x10;
    D_030023DC = one;

    src = D_02020FC0;
    dst = D_0200D280;
    sub_080A0210(src, dst, 0x40);
    src += 0x100;
    sub_080A0210(src, dst + 0x200, 0x40);
    D_03004EA4 = dst;
}

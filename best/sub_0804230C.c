extern u16 D_030016E0[];
extern u8 D_03004410[];

u8 sub_0805B040(s32);
void sub_080379D4(s32);
void sub_080675B8(s32);
void sub_0805B404(s32);

s32 sub_0804230C(void)
{
    u8 status = sub_0805B040(2);
    u16 *input = D_030016E0;
    u16 buttons = input[3];
    u8 nextState = 2;
    u32 pressed = 2;
    pressed &= buttons;
    if (pressed != 0) {
        sub_080379D4(0x15);
        goto close;
    }
    pressed = 1;
    pressed &= buttons;
    if (pressed != 0) {
        sub_080379D4(2);
        if (status == 1) {
close:
            sub_080675B8(2);
            sub_0805B404(2);
            D_03004410[0xE] = nextState;
        } else {
            D_03004410[0xE] = 8;
        }
    }
    return 0;
}

typedef struct {
    u8 pad00[2];
    u8 mode;
    u8 screen;
    u8 pad04[0xB2 - 4];
    u8 selection;
    u8 padB3[0xC0 - 0xB3];
    u8 page;
} MenuState;

extern MenuState D_03004620;
extern u8 D_0300169C;
extern const u8 D_08100704[];
void sub_080675B8(void);
void sub_08068938(s32, s32);
void sub_0805C7B8(s32);
/* The original call passes the page expression at its promoted width. */
void sub_0805B358();
void sub_0805B404(s32);

void sub_08061FBC(s32 index)
{
    MenuState *state = &D_03004620;
    u32 zero = 0;

    state->screen = 2;
    sub_080675B8();
    sub_08068938(2, index);
    state->selection = zero;
    if (D_0300169C == 0) {
        if (state->mode == 0x16)
            sub_0805C7B8(1);
        else
            sub_0805C7B8(0);
    }
    sub_0805B358((u32)D_08100704, 0, D_03004620.page - 1, 0, 1);
    sub_0805B404(0);
}

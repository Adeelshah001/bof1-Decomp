extern u8 D_03004F30[];
extern const char D_080A7250[];
extern const char D_080A7244[];

void sub_08037FC4(u8 *, s32);
void sub_080352D0(const char *, const char *, s32, ...);
void sub_0808DC14(u8 *);
void sub_0808DAE8(u8 *);
void sub_0808DB08(u8 *);
void sub_0807C484(u8 *);

void sub_0808DA44(u8 *arg0, s8 arg1)
{
    arg0[0x4C] = arg1;
    arg0[0x4D] = 0;
    arg0[0x50] = 0;
    sub_08037FC4(arg0, 0);
}

void sub_0808DA64(u8 *arg0)
{
    if (D_03004F30[0x0D] == 0) {
        arg0[0x41] = 8;
        arg0[0x4C] = 2;
        arg0[0x4D] = 0;
        arg0[0x50] = 0;
        sub_08037FC4(arg0, 0);
    }
}

void sub_0808DA98(u8 *arg0)
{
    switch (arg0[0x4D]) {
    case 0:
        sub_0808DC14(arg0);
        break;
    case 2:
        sub_0808DAE8(arg0);
        break;
    case 4:
        sub_0808DB08(arg0);
        break;
    default:
        sub_080352D0(D_080A7250, D_080A7244, 0xC5, arg0[0x4D]);
        break;
    }
}

void sub_0808DAE8(u8 *arg0)
{
    sub_0807C484(arg0);
    *(u16 *)(arg0 + 0x38) = 0xE0;
    arg0[0x54] = 0;
    arg0[0x4D] = 4;
}

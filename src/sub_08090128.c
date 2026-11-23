extern const char D_080A7520[];
extern const char D_080A7514[];

void D_0808FBB4(u8 *arg0);
void sub_080901F4(u8 *arg0);
void sub_08090194(u8 *arg0);
void sub_080901C4(u8 *arg0);
void sub_08090200(u8 *arg0);
void sub_080352D0(const char *arg0, const char *arg1, s32 arg2, s32 arg3);

void sub_08090128(u8 *arg0) {
    if (arg0[0xE0] != 2) {
        D_0808FBB4(arg0);
        return;
    }
    switch (arg0[0x4D]) {
    case 0:
        sub_080901F4(arg0);
        break;
    case 2:
        sub_08090194(arg0);
        break;
    case 4:
        sub_080901C4(arg0);
        break;
    case 6:
        sub_08090200(arg0);
        break;
    default:
        sub_080352D0(D_080A7520, D_080A7514, 0x5C, arg0[0x4D]);
        break;
    }
}

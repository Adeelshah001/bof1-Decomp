extern const char D_080A7600[];
extern const char D_080A760C[];

void D_0808FBB4(u8 *actor);
void sub_0809084C(u8 *actor);
void sub_08090820(u8 *actor);
void sub_0809069C(u8 *actor);
void sub_0809089C(u8 *actor);
void sub_080352D0(const char *format, ...);

void sub_080907B4(u8 *actor)
{
    if (actor[0xE0] != 2) {
        D_0808FBB4(actor);
        return;
    }

    switch (actor[0x4D]) {
    case 0:
        sub_0809084C(actor);
        break;
    case 2:
        sub_08090820(actor);
        break;
    case 4:
        sub_0809069C(actor);
        break;
    case 6:
        sub_0809089C(actor);
        break;
    default:
        sub_080352D0(D_080A760C, D_080A7600, 0x62, actor[0x4D]);
        break;
    }
}

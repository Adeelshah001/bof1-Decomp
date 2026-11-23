extern const char D_080A70AC[];
extern const char D_080A70A0[];

void sub_0808BA48(s32 arg0);
void sub_0808BA5C(s32 arg0);
void sub_0808BAC8(Entity *arg0);
void sub_0808B814(Entity *arg0);
void sub_0808BB18(Entity *arg0);
void sub_080352D0(const char *fmt, const char *file, s32 line, ...);

void sub_0808B9C4(Entity *arg0)
{
    switch (arg0->unk4D) {
    case 0:
        sub_0808BA48((s32)arg0);
        break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 2:
        sub_0808BA5C((s32)arg0);
        break;
    case 4:
        sub_0808BAC8(arg0);
        break;
    case 6:
        sub_0808B814(arg0);
        break;
    case 8:
        sub_0808BB18(arg0);
        break;
    default:
        sub_080352D0(D_080A70AC, D_080A70A0, 0x98, arg0->unk4D);
        break;
    }
}

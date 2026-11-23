extern const char D_080A6CFC[];
extern const char D_080A6CCC[];

void sub_0803EF2C(void *arg0);
void sub_080352D0(const char *, const char *, s32, u8);
void sub_0807CA08(void *arg0);
void sub_080889F8(void *arg0);
void sub_08088A34(void *arg0);

struct Obj8855C {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x4C - 0x2E];
    u8 unk4C;
};

void sub_0808855C(struct Obj8855C *arg0)
{
    switch (arg0->unk4C) {
    case 0:
        sub_080889F8(arg0);
        break;
    case 2:
        sub_08088A34(arg0);
        break;
    case 4:
        sub_0803EF2C(arg0);
        break;
    default:
        sub_080352D0(D_080A6CFC, D_080A6CCC, 0x245, arg0->unk4C);
        break;
    }
    arg0->unk2C = arg0->unk6 + 0x28;
    sub_0807CA08(arg0);
}

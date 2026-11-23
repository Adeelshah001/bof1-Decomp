typedef struct {
    u8 pad00[0x54];
    s32 unk54;
} Battle4F50;

extern Battle4F50 D_03004F50;

typedef struct Entity8C {
    u8 pad00[0x41];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x78 - 0x55];
    s32 unk78;
} Entity8C;

u8 sub_0807CAB8(Entity8C *arg0, s32 *out);
void sub_0808C478(Entity8C *arg0, s32 arg1);
void sub_0807C600(Entity8C *arg0, s32 arg1);
void sub_08037FC4(Entity8C *arg0, s32 arg1);
void sub_08083484(Entity8C *arg0);
void sub_0808C4D0(Entity8C *arg0);
void sub_0808C4E4(Entity8C *arg0);

void sub_0808C428(Entity8C *arg0)
{
    s32 sp0;
    u8 ret;
    do {
        ret = sub_0807CAB8(arg0, &sp0);
        if (ret == 0) {
            return;
        }
        arg0->unk78 = sp0;
        D_03004F50.unk54 = sp0;
        if (ret == 1) {
            sub_0808C478(arg0, 0xE);
            return;
        }
    } while (ret == 2);
    sub_0807C600(arg0, 2);
    sub_08037FC4(arg0, 2);
}

void sub_0808C480(Entity8C *arg0)
{
    arg0->unk54--;
    if (arg0->unk54 != 0) {
        if ((arg0->unk54 & 1) == 0) {
            sub_0808C4D0(arg0);
        } else {
            arg0->unk41 = 0xE;
            sub_0808C4E4(arg0);
        }
    } else {
        sub_08083484(arg0);
        arg0->unk4D = 0x14;
        sub_0808C4D0(arg0);
    }
}

typedef struct {
    u8 pad00[0x54];
    s32 unk54;
} Battle4F50;

extern Battle4F50 D_03004F50;

typedef struct Entity8A {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x10 - 0x08];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u8 pad18[0x2C - 0x18];
    u16 unk2C;
    u8 pad2E[0x44 - 0x2E];
    s32 unk44;
    s32 unk48;
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x74 - 0x56];
    struct Entity8A *unk74;
    struct Entity8A *unk78;
    u8 pad7C[0xE0 - 0x7C];
    u8 unkE0;
    u8 unkE1;
    u8 padE2[0xF1 - 0xE2];
    u8 unkF1;
} Entity8A;

s32 sub_0807CE30(Entity8A *);
void sub_0807CB08(void);
void sub_0808ABEC(Entity8A *, s32, s32);
void sub_0808AC04(Entity8A *);
u8 sub_0807CAB8(Entity8A *, s32 *);
void sub_0807C600(Entity8A *, s32);

void sub_0808A9B4(Entity8A *arg0)
{
    s32 res;
    u8 flags = arg0->unkF1;

    flags &= 4;
    if ((flags == 0 && arg0->unkE0 != 0xA) || (arg0->unkE1 = 0x1D, (res = sub_0807CE30(arg0)) != 0)) {
        sub_0808AC04(arg0);
    } else {
        arg0->unkE0 = 6;
        sub_0807CB08();
        arg0->unk54 = 0x38;
        arg0->unk55 = res;
        sub_0808ABEC(arg0, 6, 4);
    }
}

void sub_0808CF88(Entity8A *arg0)
{
    s32 sp0;
    u8 ret;

    do {
        ret = sub_0807CAB8(arg0, &sp0);
        if (ret == 0) {
            return;
        }
        arg0->unk78 = (Entity8A *)sp0;
        D_03004F50.unk54 = sp0;
        switch (ret) {
        case 1:
            arg0->unk4D = 0x10;
            return;
        case 2:
            break;
        default:
            sub_0807C600(arg0, 2);
            return;
        }
    } while (1);
}

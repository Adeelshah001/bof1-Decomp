extern u8 D_03004F50[];

typedef struct Entity8A {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x1C];
    u16 unk24;
    u8 pad26[0x06];
    u16 unk2C;
    u8 pad2E[0x0A];
    u16 unk38;
    u8 unk3A;
    u8 pad3B[0x05];
    u8 unk40;
    u8 pad41[0x0B];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x06];
    u8 unk54;
    u8 unk55;
    u8 pad56[0x1E];
    struct Entity8A *unk74;
    struct Entity8A *unk78;
    u8 pad7C[0x64];
    u8 unkE0;
    u8 unkE1;
    u8 padE2[0x02];
    u16 unkE4;
    u16 unkE6;
} Entity8A;

s32 sub_0807CE30(Entity8A *arg0);
void sub_0807C484(Entity8A *arg0);
void sub_0808A564(Entity8A *arg0, s32 arg1, s32 arg2);
void sub_0807CB08(void);
u16 sub_0807B2BC(void);
void sub_0808A5E0(Entity8A *arg0);
void sub_0808A5CC(Entity8A *arg0);
void sub_080380F4(Entity8A *arg0, Entity8A *arg1, s32 arg2, s32 arg3);
void sub_08037FC4(Entity8A *arg0, s32 arg1);
void sub_0807C600(Entity8A *arg0, s32 arg1);

void sub_0808A08C(Entity8A *arg0)
{
    arg0->unk40 = 0;
    arg0->unk54 = 8;
    arg0->unk6 = 0;
    D_03004F50[0x5F]--;
    arg0->unk4C = 2;
    arg0->unk4D = 8;
}

void sub_0808A510(Entity8A *arg0)
{
    s32 res;
    arg0->unkE1 = 0x22;
    res = sub_0807CE30(arg0);
    if (res != 0) {
        sub_0807C484(arg0);
        sub_0808A564(arg0, 4, 2);
    } else {
        arg0->unkE0 = 6;
        sub_0807CB08();
        arg0->unk54 = 0x38;
        arg0->unk55 = res;
        sub_0808A564(arg0, 8, 2);
    }
}

void sub_0808A57C(Entity8A *arg0)
{
    if (sub_0807B2BC() == 0) {
        sub_0808A5E0(arg0);
        return;
    }
    switch ((u8)arg0->unk24) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 14:
        break;
    case 12:
        sub_0808A5CC(arg0);
        break;
    default:
        sub_080380F4(arg0, arg0->unk78, 0x18, 0x20);
        arg0->unk4D = 6;
        arg0->unk38 = 0x160;
        break;
    }
}

void sub_0808A60C(Entity8A *arg0)
{
    sub_0807B2BC();
    if (arg0->unk74->unk3A == 0) {
        D_03004F50[0x5D] = 0;
        arg0->unk2 = arg0->unkE4;
        arg0->unk6 = arg0->unkE6;
        arg0->unk2C = arg0->unkE6;
        sub_08037FC4(arg0, 0);
        sub_0807C600(arg0, 2);
    }
}

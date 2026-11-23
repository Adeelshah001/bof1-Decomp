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

u16 sub_0807B2BC(void);
void sub_0808A5E0(Entity8A *arg0);
void sub_0808A5CC(Entity8A *arg0);
void sub_080380F4(Entity8A *arg0, Entity8A *arg1, s32 arg2, s32 arg3);
void sub_08037FC4(Entity8A *arg0, s32 arg1);
void sub_0807C600(Entity8A *arg0, s32 arg1);

void sub_0808A57C(Entity8A *arg0)
{
    u8 val;
    if (sub_0807B2BC() == 0) {
        sub_0808A5E0(arg0);
        return;
    }
    val = arg0->unk24;
    if (val > 3) {
        if (val == 12) {
            sub_0808A5CC(arg0);
        } else if (val != 14) {
            sub_080380F4(arg0, arg0->unk78, 0x18, 0x20);
            arg0->unk4D = 6;
            arg0->unk38 = 0x160;
        }
    }
}

void sub_0808A60C(Entity8A *arg0)
{
    sub_0807B2BC();
    if (arg0->unk74->unk3A == 0) {
        u16 y;
        D_03004F50[0x5D] = 0;
        arg0->unk2 = arg0->unkE4;
        y = arg0->unkE6;
        arg0->unk6 = y;
        arg0->unk2C = y;
        sub_08037FC4(arg0, 0);
        sub_0807C600(arg0, 2);
    }
}

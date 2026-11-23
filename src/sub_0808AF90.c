typedef struct EntityAF {
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
    u8 pad4E[0x74 - 0x4E];
    struct EntityAF *unk74;
    struct EntityAF *unk78;
    u8 pad7C[0xE4 - 0x7C];
    u16 unkE4;
} EntityAF;

void sub_0807B27C(EntityAF *);

void sub_0808AF90(EntityAF *arg0) {
    EntityAF *p;
    u8 state;
    arg0->unk2 = arg0->unkE4 + 0x0E;
    arg0->unk6 = 0x2E80;
    arg0->unk2C = 0x2E80;
    p = arg0->unk74;
    p->unk78 = arg0;
    p->unk4C = 6;
    arg0->unk12 = 0xFFFF;
    arg0->unk10 = 0x8000;
    arg0->unk44 = 0;
    arg0->unk16 = 8;
    arg0->unk14 = 0;
    arg0->unk48 = -0x800;
    state = 0x16;
    arg0->unk4D = state;
    sub_0807B27C(arg0);
}

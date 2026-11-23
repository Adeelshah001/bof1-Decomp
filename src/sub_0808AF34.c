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
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x61 - 0x55];
    u8 unk61;
    u8 pad62[0x74 - 0x62];
    struct EntityAF *unk74;
    struct EntityAF *unk78;
    u8 pad7C[0xE4 - 0x7C];
    u16 unkE4;
} EntityAF;

u16 sub_0807B2BC(EntityAF *);
void sub_08037FC4(EntityAF *, s32);
void sub_080382A4(EntityAF *);
void sub_0807B27C(EntityAF *);
void sub_0808B31C(EntityAF *, s32);

void sub_0808B3EC(EntityAF *arg0) {
    if (sub_0807B2BC(arg0) == 0) {
        EntityAF *p;
        sub_08037FC4(arg0, 8);
        p = arg0->unk74;
        p->unk78 = arg0;
        p->unk4C = 6;
        arg0->unk54 = 0x10;
        arg0->unk4D = 0x1E;
    }
}

void sub_0808AFE0(EntityAF *arg0) {
    sub_080382A4(arg0);
    if (--arg0->unk54 == 0) {
        EntityAF *p = arg0->unk74;
        p->unk78 = arg0;
        p->unk4C = 6;
        sub_08037FC4(p, 6);
        arg0->unk54 = 0x0F;
        arg0->unk61 = 0x10;
        arg0->unk4D = 0x20;
    }
}

void sub_0808AF90(EntityAF *arg0) {
    EntityAF *p;
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
    arg0->unk4D = 0x16;
    sub_0807B27C(arg0);
}

void sub_0808AF34(EntityAF *arg0) {
    if (sub_0807B2BC(arg0) == 0) {
        EntityAF *p;
        sub_08037FC4(arg0, 8);
        arg0->unk54 = 0x0A;
        arg0->unk12 = 0xFFFF;
        arg0->unk10 = 0x8000;
        arg0->unk44 = 0;
        arg0->unk16 = 0xFFF8;
        arg0->unk14 = 0;
        arg0->unk48 = 0x800;
        p = arg0->unk74;
        p->unk78 = arg0->unk78;
        p->unk4C = 4;
        sub_0808B31C(arg0, 0x12);
    }
}

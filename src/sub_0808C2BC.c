/* identical to sub_0808B258 (matched), with its names changed by decompdecomp */
typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x08];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    u16 unk16;
    u8 pad18[0x14];
    u16 unk2C;
    u8 pad2E[0x16];
    u32 unk44;
    u32 unk48;
    u8 pad4C[0x01];
    u8 unk4D;
    u8 pad4E[0x26];
    u32 unk74;
    u32 unk78;
    u8 pad7C[0x68];
    u16 unkE4;
    u16 unkE6;
} Ent;

void sub_080382A4(void);
void sub_08037FC4(Ent *arg0, s32 arg1);
void sub_0807B27C(Ent *arg0);
void sub_080380C0(u32 arg0);
void sub_0807C600(Ent *arg0, s32 arg1);
void sub_08083300(Ent *arg0, s32 arg1);
void sub_0808C2CC(Ent *arg0);

void sub_0808C2BC(Ent *arg0, s8 arg1) {
    arg0->unk4D = arg1;
    sub_0808C2CC(arg0);
}

void sub_0808B32C(Ent *arg0) {
    u16 a;
    u8 state;
    sub_080382A4();
    arg0->unk2C = arg0->unk6 + 0x10;
    a = arg0->unkE6 - 8;
    if ((u32)a != (u32)(u16)arg0->unk6 && (u32)a >= (u32)(u16)arg0->unk6) {
        sub_0807B27C(arg0);
        return;
    }
    sub_08037FC4(arg0, 0xA);
    state = 0x18;
    arg0->unk4D = state;
    sub_0807B27C(arg0);
}

void sub_0808B378(Ent *arg0) {
    sub_080380C0(arg0->unk74);
    arg0->unk2 = arg0->unkE4;
    arg0->unk6 = arg0->unkE6;
    arg0->unk2C = arg0->unkE6;
    sub_08037FC4(arg0, 0);
    sub_0807C600(arg0, 0);
    sub_0807B27C(arg0);
}

void sub_0808B3B4(Ent *arg0) {
    sub_08037FC4(arg0, 2);
    arg0->unk10 = 0;
    arg0->unk12 = 0;
    arg0->unk44 = 0;
    arg0->unk16 = 0xFFF8;
    arg0->unk14 = 0;
    arg0->unk48 = 0x8000;
    sub_08083300(arg0, 0x20);
    arg0->unk4D = 0x1C;
}

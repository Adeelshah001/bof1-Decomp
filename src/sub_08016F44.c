extern u8 D_03002AB0[];
extern u8 D_03001850[];
extern void *D_03004154;
extern u8 D_03004584[];
extern u8 D_03003520[];
extern u8 D_030036A0[];
extern u8 D_03004830[];

void sub_08019720(void);
void *sub_0803ED98(void);
void sub_08072CC4(s32);
void sub_0803EE88(s32);
void sub_08004EA0(s32);

typedef struct {
    u8 pad00[2];
    u16 unk02;
    u8 pad04[0x06 - 0x04];
    u16 unk06;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
} Unk2AB0;

typedef struct {
    u8 pad00[0x2B];
    u8 unk2B;
    u8 unk2C;
    u8 unk2D;
} Unk4830;

typedef struct {
    u8 pad00[6];
    u16 unk06;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
} Unk3520;

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[4];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
} Unk36A0;

void sub_08017214(void) {
    Unk2AB0 *base = (Unk2AB0 *)D_03002AB0;
    Unk4830 *state = (Unk4830 *)D_03004830;

    base->unk02 = 0xC78;
    D_03001850[0] = 1;
    base->unk06 = 0xB1AC;
    base->unk2C = 0xB1AC;
    sub_08019720();
    state->unk2C = 0x20;
    state->unk2B++;
}

void sub_080170AC(void) {
    void *ent;

    ent = sub_0803ED98();
    D_03004154 = ent;
    if (ent != NULL) {
        *(u8 *)((u8 *)ent + 0x3A) = 1;
        *(u8 *)((u8 *)D_03004154 + 0x3B) = 0;
        *(u8 *)((u8 *)D_03004154 + 0x3C) = 0x13;
        *(u8 *)((u8 *)D_03004154 + 0x41) = 0x38;
        *(u8 *)((u8 *)D_03004154 + 0x80) = 0x29;
        ((Unk4830 *)D_03004830)->unk2C = 0x80;
        ((Unk4830 *)D_03004830)->unk2B++;
    }
}

void sub_08016F44(void) {
    Unk3520 *base;
    Unk3520 *src;

    sub_08072CC4(0x381E);
    if (D_03004584[0] == 0) {
        base = (Unk3520 *)D_03003520;
        src = (Unk3520 *)((u8 *)base - 0x80);
        base->unk06 = src->unk06;
        base->unk2C = src->unk06;
        sub_0803EE88((s32)(u8 *)src);
        ((Unk4830 *)D_03004830)->unk2D++;
        ((Unk4830 *)D_03004830)->unk2B++;
    }
}

void sub_08016EF4(void) {
    Unk36A0 *base;

    sub_08004EA0(0x842E);
    base = (Unk36A0 *)D_030036A0;
    base->unk2 = ((Unk36A0 *)((u8 *)base - 0x100))->unk2;
    base->unk6 = ((Unk36A0 *)((u8 *)base - 0x100))->unk6;
    base->unk2C = ((Unk36A0 *)((u8 *)base - 0x100))->unk6;
    sub_0803EE88((s32)((u8 *)base - 0x100));
    base = (Unk36A0 *)((u8 *)base - 0x80);
    sub_0803EE88((s32)(u8 *)base);
    ((Unk4830 *)D_03004830)->unk2D++;
    ((Unk4830 *)D_03004830)->unk2B++;
}

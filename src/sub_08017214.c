extern u8 D_03002AB0[];
extern u8 D_03001850[];
extern void *D_03004154;
extern u8 D_03004830[];
extern u8 D_030036A0[];

void sub_08019720(void);
void *sub_0803ED98(void);
void sub_0803EE88();
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

void sub_08017214(void) {
    ((Unk2AB0 *)D_03002AB0)->unk02 = 0xC78;
    D_03001850[0] = 1;
    ((Unk2AB0 *)D_03002AB0)->unk06 = 0xB1AC;
    ((Unk2AB0 *)D_03002AB0)->unk2C = 0xB1AC;
    sub_08019720();
    ((Unk4830 *)D_03004830)->unk2C = 0x20;
    ((Unk4830 *)D_03004830)->unk2B++;
}

void sub_080170AC(void) {
    u8 *ent;

    ent = sub_0803ED98();
    D_03004154 = ent;
    if (ent != NULL) {
        ent[0x3A] = 1;
        ((u8 *)D_03004154)[0x3B] = 0;
        ((u8 *)D_03004154)[0x3C] = 0x13;
        ((u8 *)D_03004154)[0x41] = 0x38;
        ((u8 *)D_03004154)[0x80] = 0x29;
        D_03004830[0x2C] = 0x80;
        D_03004830[0x2B]++;
    }
}

void sub_08016EF4(void) {
    u8 *base = D_030036A0;

    sub_08004EA0(0x842E);
    *(u16 *)(base + 2) = *(u16 *)(base - 0x100 + 2);
    *(u16 *)(base + 6) = *(u16 *)(base - 0x100 + 6);
    *(u16 *)(base + 0x2C) = *(u16 *)(base - 0x100 + 6);
    sub_0803EE88();
    sub_0803EE88((s32)(base - 0x80));
    D_03004830[0x2D]++;
    D_03004830[0x2B]++;
}

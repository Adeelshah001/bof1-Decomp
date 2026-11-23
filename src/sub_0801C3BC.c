extern Entity *D_03004154;
extern void *D_03004448;
extern s16 D_030040F8;
extern u8 D_03004584[];

u8 sub_08019E04(s32);
Entity *sub_0803ED98(void);
void sub_0804A9B0(void);
void sub_080017EC(s32);
void sub_08072CC4(s32);
void sub_080030D4(void);
void sub_08004EA0(s32);

void sub_0801BC0C(void) {
    if (sub_08019E04(1) == 0) {
        D_03004448 = D_03004154;
        D_03004830[0x2B]++;
    }
}

void sub_0801BC3C(void) {
    u8 *base = D_03004830;
    D_030040F8 = (s8)base[0x2C];
    base[0x2D] = 0;
    D_03004154->unk6 = 0x48;
    base[0x2B]++;
}

void sub_0801C3BC(void) {
    D_03004154 = sub_0803ED98();
    if (D_03004154 != NULL) {
        D_03004154->unk3A = 1;
        D_03004154->unk64 = (u32)sub_0804A9B0;
        D_03004830[0x2B]++;
    }
}

void sub_0801C3F4(void) {
    sub_080017EC(0xB6);
    sub_08072CC4(0x663D);
    if (D_03004584[0] != 0) {
        sub_080030D4();
    } else {
        sub_08004EA0(0x87E6);
        D_03004830[0x2B]++;
    }
}

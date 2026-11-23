extern u8 D_03004584;

void sub_08072CC4(s32);
void sub_08004EA0(s32);
void sub_08054B60(void);
void sub_08037A74(s32);
u8 sub_08019DBC(s32);
void sub_0800518C(s32, s32, s32);

typedef struct {
    u8 pad00[0x78];
    void (*unk78)(void);
} Struct3420;

void sub_0801B6DC(void) {
    u8 *p;
    sub_08072CC4(0x5B43);
    if (D_03004584 == 0) {
        ((Struct3420 *)D_03003420)->unk78 = sub_08054B60;
        sub_08004EA0(0x849B);
        p = D_03004830;
        p[0x2D]++;
        p[0x2C] = 0x30;
        p[0x2B]++;
    }
}

void sub_0801B730(void) {
    u8 *p;
    sub_08037A74(0x100);
    if (sub_08019DBC(6) == 0) {
        p = D_03004830;
        p[0x2C] = 0xFF;
        p[0x2B]++;
    }
}

void sub_0801B760(void) {
    sub_0800518C(0x1CE, 0x5B8, -0x47C4);
    D_03004830[0x2B]++;
}

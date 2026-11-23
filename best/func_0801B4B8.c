typedef struct {
    u8 pad00[0x61];
    u8 unk61;
    u8 pad62[0x124 - 0x62];
} State2AB0Item;

extern State2AB0Item D_03002AB0[4];
extern u8 D_03004584;

void sub_0800312C(s32, s32);
void sub_08001F80(s32, s32, s32);
void sub_08037A74(s32);
void sub_08072CC4(s32);

void func_0801B4B8(void) {
}

void sub_0801B31C(void) {
    sub_0800312C(0x10, 6);
    sub_08001F80(0, 0, 0);
    D_03004830[0x2D]++;
    sub_08037A74(0x100);
    D_03004830[0x2C] = 0xDC;
    D_03004830[0x2B]++;
}

void sub_0801B840(void) {
    D_03002AB0[0].unk61 = 0;
    D_03002AB0[1].unk61 = 0;
    D_03002AB0[2].unk61 = 0;
    D_03002AB0[3].unk61 = 0;
    D_03004830[0x2B]++;
}

void sub_0801B87C(void) {
    sub_08072CC4(0x5A45);
    if (D_03004584 == 0) {
        D_03004830[0x2C] = 0x30;
        D_03004830[0x2B]++;
    }
}

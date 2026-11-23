extern u8 D_03004584[];
extern u8 D_03004830[];
extern void sub_080017EC(s32 arg0);
extern void sub_080030D4(void);
extern void sub_08072CC4(s32 arg0);

void sub_0801EA68(void) {
    sub_08072CC4(0x5328);
    if (*D_03004584 != 0) {
        sub_080030D4();
        return;
    }
    sub_080017EC(0xCF);
    D_03004830[0x2B] += 1;
}

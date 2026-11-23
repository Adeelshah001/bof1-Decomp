typedef struct {
    u8 pad00[0x2A];
    u8 mode;
    u8 tick;
} Ctl;

typedef struct {
    u8 pad00[0x3F4];
    u32 unk3F4;
} Big2AB0;

extern u8 gEntityPool[];
extern Big2AB0 D_03002AB0;

void sub_080017EC(s32);
void sub_0803EE88(void *);
void sub_0803AF58(s32, s32);
void sub_08019DA0(void);
void sub_080050B4(s32, s32, s32, s32);

void sub_0801A994(void) {
    sub_080017EC(0xA5);
    sub_0803EE88(D_03003420);
    D_03004830[0x2B]++;
}

void sub_0801A9B8(void) {
    Ctl *control = (Ctl *)D_03004830;
    u8 *mode = &control->mode;

    gEntityPool[0x80]++;
    *mode = 0x23;
    D_03004830[0x2B]++;
}

void sub_0801AA00(void) {
    sub_0803AF58(0xB6, 0xFFFF);
    D_03002AB0.unk3F4++;
    sub_08019DA0();
}

void sub_0801AA28(void) {
    sub_080050B4(0, 0x67, 0x278, 0x708C);
    D_03004830[0x2B]++;
}

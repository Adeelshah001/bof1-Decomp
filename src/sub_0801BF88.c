extern u8 D_030034A0[];
extern u8 D_03002510[];

void sub_08003378(s32);
void sub_08054C18(void);
void sub_08019F1C(void);

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[0x78 - 4];
    u32 unk78;
} Unk34A0;

typedef struct {
    u8 pad00[0x38];
    u16 unk38;
    u8 pad3A[0x54 - 0x3A];
    u8 unk54;
} Unk2510;

void sub_0801BFE0(void) {
    Unk34A0 *p;
    sub_08003378(0x40);
    p = (Unk34A0 *)D_030034A0;
    p->unk2 = 0x598;
    p->unk78 = (u32)sub_08054C18;
    D_03004830[0x2C] = 0xFF;
    D_03004830[0x2B]++;
}

void sub_0801BF88(void) {
    Unk2510 *p = (Unk2510 *)D_03002510;
    if (--p->unk54 != 0) {
        sub_08019F1C();
    } else {
        p->unk38 = 0x120;
        sub_08019F1C();
    }
}

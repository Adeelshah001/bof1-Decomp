typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} ActorCounterFields;

extern ActorCounterFields D_03002AB0;
extern Entity *D_03004154;

u8 sub_08019E04(s32);
void sub_08019720(void);
void sub_0800764C(s32);
void sub_08003528(s32, s32, s32, s32, s32);
void sub_08004EA0(s32);
void sub_0802FD60(s32);

void sub_0801C7A8(void) {
    if (sub_08019E04(4) == 0) {
        sub_08019720();
        D_03004830[0x2B]++;
    }
}

void sub_0801C7CC(void) {
    u8 *base;
    D_03004154->unk6 = 0x20;
    sub_0800764C(9);
    sub_08003528(0, 0x20, 0, 0x100, 2);
    base = D_03004830;
    base[0x2C] = 0xFF;
    base[0x2B]++;
}

void sub_0801C810(void) {
    u8 *base;
    sub_08004EA0(0x87F7);
    D_03002AB0.unk88++;
    base = D_03004830;
    base[0x2C] = 0x40;
    base[0x2B]++;
}

void sub_0801C844(void) {
    u8 *base;
    sub_0802FD60(0x8E);
    base = D_03004830;
    base[0x2D] = 0;
    base[0x2B]++;
}

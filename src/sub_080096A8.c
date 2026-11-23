typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} Unk03002AB0;
extern Unk03002AB0 D_03002AB0;

typedef struct {
    u8 pad00[0x68];
    u32 unk68;
} Unk03003420;

void sub_0800518C(s32 arg0, s32 arg1, s32 arg2);

void sub_08009780(void) {
    u8 *base = D_03004830;
    s8 *timer = (s8 *)(base + 0x2C);
    if (*timer < 0) {
        sub_0800B10C();
        *timer = 0x7F;
        base[0x2B]++;
    }
}

void sub_080097AC(void) {
    u8 *base = D_03004830;
    if ((s8)base[0x2C] < 0) {
        base[0x2B]++;
        ((Unk03003420 *)D_03003420)->unk68++;
    }
}

void sub_080096A8(void) {
    sub_0800518C(0, 0xA58, 0x52C);
    D_03002AB0.unk88++;
    D_03004830[0x2B]++;
}

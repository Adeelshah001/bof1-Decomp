extern s16 D_03001864;
extern u8 D_030045B0[];

void sub_08021958(void);
void sub_0802198C(void);
void sub_08020CF0(void);

typedef struct {
    u8 pad0[0x2B];
    s8 unk2B;
    u8 unk2C;
    u8 unk2D;
} State4830;

void sub_08020C90(void) {
    State4830 *state = (State4830 *)D_03004830;
    switch (state->unk2B) {
        case 0:
            state->unk2C = 0;
            state->unk2D = 0;
            state->unk2B++;
            sub_0802198C();
            break;
        default:
            sub_08021958();
            break;
    }
}

void sub_08020CC4(void) {
    u8 *ptr;
    D_03001864 = 0;
    D_03004830[0x2B]++;
    ptr = D_030045B0;
    *(s32 *)(ptr + 0xC) = 0;
    sub_08020CF0();
}

typedef struct {
    u8 pad00[0x40];
    u8 unk40;
} Struct4154;

typedef struct {
    u8 pad00[0xB4];
    u8 unkB4;
    u8 unkB5;
    u8 padB6[2];
    u16 unkB8;
} Struct4620;

extern Struct4154 *D_03004154;
extern u16 D_03001864;
extern u8 D_03004620[];
extern u16 D_0300168C;

void sub_0802028C(void);
void sub_0805B7B8(s32);
void sub_0805B7C8(s32);

void sub_08021080(void)
{
    if (D_03004154->unk40 != 0) {
        D_03001864 |= 1;
        D_03004830[0x2B]++;
    }
}

void sub_0802103C(void)
{
    sub_0802028C();
    if (++((Struct4620 *)D_03004620)->unkB4 & 0x20) {
        sub_0805B7B8(0x8000);
    } else {
        sub_0805B7C8(0x8000);
    }
    D_03004830[0x2B]++;
}

void sub_08020FFC(void)
{
    u8 *state;
    s8 timer;

    sub_0802028C();
    state = D_03004830;
    timer = --state[0x2C];
    if (timer == 0) {
        D_0300168C = timer;
        ((Struct4620 *)D_03004620)->unkB5 = 0;
        state[0x2B]++;
    }
}

void sub_08020FBC(void)
{
    u8 *state;
    s8 timer;

    sub_0802028C();
    state = D_03004830;
    timer = --state[0x2C];
    if (timer == 0) {
        sub_0805B7B8(0x2000);
        ((Struct4620 *)D_03004620)->unkB8 = timer;
        state[0x2B]++;
    }
}

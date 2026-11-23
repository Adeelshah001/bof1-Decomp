typedef struct {
    u8 pad0[3];
    u8 unk3;
    u8 pad4[0xB2 - 4];
    u8 unkB2;
    u8 padB3[0xB7 - 0xB3];
    u8 unkB7;
} Unk03004620;

extern Unk03004620 D_03004620;
extern u32 D_0814CA88[];

void sub_0805B358(u32, s32, s32, s32, s32);
void sub_08063F0C(void);
void sub_08063CA0(void);

s32 sub_08069488(void) {
    s32 val = D_03004620.unkB7;

    D_03004620.unkB2 = 0xFF;
    if (val > 2) {
        sub_0805B358(D_0814CA88[2], 0, 2, 0, 2);
    } else {
        sub_0805B358(D_0814CA88[val - 1], 0, val - 1, 0, 2);
    }
    sub_08063F0C();
    sub_08063CA0();
    D_03004620.unk3 = 0xA;
    return 0;
}

extern void sub_08004EA0(s32 arg0);
extern void sub_08054B60(void);

extern u8 D_03003420[];
extern u8 D_03004830[];

typedef struct {
    u8 pad00[0x78];
    void *unk78;
} Actor;

void sub_0801B8B0(void) {
    sub_08004EA0(0x8478);
    ((Actor *)D_03003420)->unk78 = &sub_08054B60;
    D_03004830[0x2C] = 0xEC;
    D_03004830[0x2B]++;
}

void sub_0801B8E4(void) {
    sub_08004EA0(0x8479);
    ((Actor *)D_03003420)[1].unk78 = &sub_08054B60;
    D_03004830[0x2C] = 0xEC;
    D_03004830[0x2B]++;
}

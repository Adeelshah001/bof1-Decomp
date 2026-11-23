typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} State2AB0;

extern State2AB0 D_03002AB0;

void sub_0801B3BC(void) {
    D_03002AB0.unk88++;
    D_03004830[0x2B]++;
}

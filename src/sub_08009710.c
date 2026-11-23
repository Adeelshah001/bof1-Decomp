typedef struct {
    u8 pad[0x2D0];
    u32 unk2D0;
} Unk03002AB0;
extern Unk03002AB0 D_03002AB0;

void sub_08009710(void) {
    D_03002AB0.unk2D0++;
    D_03004830[0x2B]++;
}

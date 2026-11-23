typedef struct {
    u8 pad00[0x50];
    u8 unk50;
    u8 pad51[3];
    u8 unk54;
    u8 pad55[0xAC - 0x55];
    u16 unkAC, unkAE, unkB0;
    u8 padB2[6];
    u16 unkB8;
} Entity4E814;

extern u8 D_020211C0[];
extern struct {
    u8 pad00[0xB1];
    u8 unkB1;
} D_03004620;
void sub_0805B540(s32);

void sub_0804E814(Entity4E814 *actor)
{
    actor->unkAC = D_020211C0[2] | (D_020211C0[3] << 8);
    actor->unkAE = D_020211C0[4] | (D_020211C0[5] << 8);
    actor->unkB0 = D_020211C0[6] | (D_020211C0[7] << 8);
    D_03004620.unkB1 = 0;
    sub_0805B540((actor->unkB8 >> 1) - 0x2F);
    actor->unk54 = 4;
    actor->unk50++;
}

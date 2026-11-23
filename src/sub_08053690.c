void sub_08038F90(s32);

extern u32 D_030040F0;
extern u32 D_03003FB0;
extern u32 D_03002500;
extern const u8 D_0822B3B8[];

typedef struct {
    u8 pad00[0xCC];
    u8 unkCC;
    u8 padCD[0xD4 - 0xCD];
    Entity *unkD4;
} Actor53690;

void sub_08053690(Actor53690 *arg0) {
    Entity *other = arg0->unkD4;
    D_030040F0 = D_0822B3B8[arg0->unkCC + 1];
    D_03003FB0 = D_0822B3B8[arg0->unkCC + 1];
    D_03002500 = D_0822B3B8[arg0->unkCC + 1];
    arg0->unkCC++;
    sub_08038F90(((other->unk41 >> 1) & 7) + 8);
    arg0->unkCC++;
}

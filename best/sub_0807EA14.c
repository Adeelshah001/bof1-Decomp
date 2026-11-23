typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State03002AB0;
typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;
extern State03002AB0 D_03002AB0;
extern State03004F50 D_03004F50;
extern u8 D_03004584;

void sub_0807EA14(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

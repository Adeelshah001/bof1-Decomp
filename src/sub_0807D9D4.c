void sub_08033D78(s32 arg0);

typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State03002AB0;

typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;

typedef struct {
    u8 pad00[0x06];
    u16 unk06;
    u8 pad08[0x0A - 0x08];
    u16 unk0A;
    u8 pad0C[0x480 - 0x0C];
    u8 unk480;
} State0202DBD0;

extern State03002AB0 D_03002AB0;
extern State03004F50 D_03004F50;
extern State0202DBD0 D_0202DBD0;
extern u8 D_03004584;

void sub_0807D9D4(s32 arg0) {
    if ((u8)arg0 != 0) {
        D_0202DBD0.unk480 ^= 0x20;
        D_03004830[0x2C] = 0;
        D_03004830[0x2D] = 0;
        sub_08033D78(1);
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_0202DBD0.unk06 = 0xEA8;
        D_0202DBD0.unk0A = 0xFD9C;
    }
}

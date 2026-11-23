typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x0A - 0x08];
    u16 unkA;
} Unk0202DBD0;

typedef struct {
    u8 pad00[0x41];
    u8 unk41;
    u8 pad42[0x5B - 0x42];
    u8 unk5B;
} Unk03004F50;

extern Unk0202DBD0 D_0202DBD0;
extern u8 D_03004584;
extern Unk03004F50 D_03004F50;

u8 sub_08001770(s32);

void sub_0807EF0C(void) {
    if (D_03004F50.unk41 != 0 || (D_03004F50.unk5B & 3)) {
        if (sub_08001770(0xB0) == 0) {
            D_03004830[0x2D] = 0x80;
        }
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_0202DBD0.unk6 = 0x328;
        D_0202DBD0.unkA = 0x8B6C;
    }
}

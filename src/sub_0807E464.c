typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;

extern State03004F50 D_03004F50;
extern void (*const D_08151EE8[])(u8);
void sub_080A0774(u8, void (*)(u8));

void sub_0807E464(s32 arg0)
{
    if ((u8)arg0 != 0) {
        s8 idx = D_03004830[0x31];
        if (!(idx & 0x80)) {
            D_08151EE8[idx](D_03004F50.unk5B);
        }
    }
}

extern u8 D_030023E0[];
extern u8 D_03004114[];

void sub_08004EA0(s32 arg0);
s32 sub_0805CF40(s32 arg0, u16 *arg1);

typedef struct {
    u8 pad00[0xA8];
    u16 unkA8;
} Unk23E0;

s32 sub_080266DC(void *arg0) {
    u16 sp0;

    if (*(u16 *)((u8 *)arg0 + 6) == 0xFB3C) {
        if (((Unk23E0 *)D_030023E0)->unkA8 != 0) {
            if ((u8)sub_0805CF40(0x15E, &sp0) == 0) {
                sub_08004EA0(0x82C9);
            }
        }
    }
    *(u16 *)D_03004114 = 0;
    return 0;
}

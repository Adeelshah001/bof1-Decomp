extern u8 D_03003410;
extern const u8 D_08152DEA[];
extern s32 D_030040F0;
extern s32 D_03003FB0;
extern s32 D_03002500;

typedef struct {
    u8 pad00[0x54];
    u8 unk54 : 8;
} Unk96C50;

void sub_0803EE6C(u8 *);
void sub_08095618(u8 *);
void sub_08096CD4(void *);

void sub_08096CE8(u8 *arg0) {
    sub_0803EE6C(arg0);
    arg0[0x54] = 0;
    arg0[0x55] = 0;
    if (arg0[0x3C] == 0xA && *(const u8 *)(arg0[0x3B] + (u32)D_08152DEA) == 0) {
        sub_08095618(arg0);
    }
}

void sub_08096C50(Unk96C50 *arg0) {
    if ((--arg0->unk54) & 0x80) {
        arg0->unk54 = 3;
        D_030040F0--;
        D_03003FB0--;
        if (--D_03002500 == 0) {
            D_03003410 = 0;
            sub_08096CD4(arg0);
        }
    }
}

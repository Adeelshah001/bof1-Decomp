extern s32 D_03000F70;
extern s32 D_03000F74;
extern s32 D_03000F78;
extern s32 D_03000F7C;
extern s32 D_03000F80;
extern s32 D_03000F84;
void sub_08071F60(void);

void sub_0807385C(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_03000F84 = arg4;
    D_03000F74 = arg0;
    D_03000F78 = arg1;
    D_03000F7C = arg2;
    D_03000F80 = arg3;
    D_03000F70 = 0x3C;
    sub_08071F60();
}

extern u16 D_03001678;
extern u16 D_030016CC;
extern u16 D_03001668;
extern u32 D_03001694;
extern u8 D_02019FC0[];
extern vu32 D_040000D4[];

void sub_080737E8(void) {
    vu16 fillVal;

    D_03001678 = 0xD;
    D_030016CC = 0;
    D_03001668 = 0;
    fillVal = 0xF1FF;
    D_040000D4[0] = (vu32)&fillVal;
    D_040000D4[1] = (vu32)D_02019FC0;
    D_040000D4[2] = 0x81000400;
    D_040000D4[2];
    D_03001694 |= 0x10000;
}

typedef struct {
    u32 unk0;
    u32 unk4;
    u16 *unk8;
    s32 unkC;
} Unk08150C68;

extern Unk08150C68 D_08150C68;
extern s32 D_03004F40;
void sub_08073B80(void);
void sub_080739D0(s32 arg0);

void sub_08073790(void) {
    u16 *dst;
    s32 i;

    sub_08073B80();
    dst = D_08150C68.unk8;
    i = 0x1F;
    do {
        vu16 fillVal = 0x8040;
        D_040000D4[0] = (vu32)&fillVal;
        D_040000D4[1] = (vu32)dst;
        D_040000D4[2] = 0x81000020;
        D_040000D4[2];
        dst += D_08150C68.unkC;
        i--;
    } while (i >= 0);
    sub_080739D0(1);
    D_03004F40 = 1;
}

extern const u16 D_082D5A24[];
extern u16 D_06011600[];

static inline void copy_rect(const u16 *src, u16 *dst, s32 rows, s32 cols) {
    s32 i = rows - 1;
    do {
        u16 *row = dst;
        s32 j = 0;
        u16 *next = row + 0x200;
        while (j < cols) {
            s32 k;
            for (k = 0; k < 16; k++) {
                *row++ = *src++;
            }
            j++;
        }
        dst = next;
        i--;
    } while (i != -1);
}

void sub_08073A18(void) {
    copy_rect(D_082D5A24, D_06011600, 1, 16);
}

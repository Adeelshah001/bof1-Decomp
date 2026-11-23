typedef struct {
    u8 pad00[0x44];
    volatile u32 unk44;
    u8 pad48[0x0C];
    u8 unk54;
} Unk884Arg;

extern u8 D_030041A8;
extern volatile u16 *D_03004190;
extern u16 D_03001668;
extern volatile u8 *D_03004880;
extern u8 D_0200BE80[];
extern u8 D_020213C0[];
extern u8 D_020291C0[];

void sub_08000248(s32);
s16 sub_0802A4F8(u16);
void sub_08037848(s32);
void sub_080A0210(s32, s32, s32);

void sub_08052884(Unk884Arg *arg0) {
    u16 i, r5, r6, x, k;

    D_030041A8 |= 1;
    sub_08000248(1);
    D_030041A8 &= 0xFE;
    sub_08037848(0xF);
    D_03001668 = 0;

    i = 0x400;
    do {
        D_03004190[i] = 0;
        i++;
    } while (i <= 0x7FF);

    r5 = 0;
    r6 = 0;
    do {
        D_03004190[r6] = sub_0802A4F8(D_03004190[r6]);
        r5 += 2;
        r6++;
    } while (r5 <= 0x7FF);

    {
        vu32 *dma3 = (vu32 *)0x040000D4;
        dma3[0] = (u32)D_03004190;
        dma3[1] = (u32)(*(u16 *)((u8 *)D_03004880 + 0x38)) + 0x06000000;
        dma3[2] = 0x80000200;
    }

    arg0->unk44 = (arg0->unk44 & 0xFF000000) | 0x800;
    arg0->unk54 = 3;

    x = 0;
    do {
        *(u16 *)(D_020213C0 + x * 8) = 0;
        *(u16 *)(D_0200BE80 + x * 8) = 0;
        *(u16 *)(D_020213C0 + x * 8 + 2) = 0xF;
        *(u16 *)(D_0200BE80 + x * 8 + 2) = 0xF;
        *(u16 *)(D_020213C0 + x * 8 + 4) = 8;
        *(u16 *)(D_0200BE80 + x * 8 + 4) = 8;
        *(u16 *)(D_020213C0 + x * 8 + 6) = 0x10;
        *(u16 *)(D_0200BE80 + x * 8 + 6) = 0x10;
        x++;
    } while (x <= 0xEF);

    k = 0;
    do {
        *(u16 *)(D_0200BE80 + k * 2) = (u16)(((u32)arg0->unk44 & 0x00FFFFFF) >> 8) - 2;
        *(u16 *)(D_0200BE80 + k * 2 + 8) = (u16)((u32)arg0->unk44 & 0x00FFFFFF) >> 8;
        *(u16 *)(D_0200BE80 + k * 2 + 0x10) = (u16)(((u32)arg0->unk44 & 0x00FFFFFF) >> 8) + 2;
        *(u16 *)(D_0200BE80 + k * 2 + 0x18) = (u16)((u32)arg0->unk44 & 0x00FFFFFF) >> 8;
        k += 0x10;
    } while (k <= 0x7F);

    k = 1;
    do {
        sub_080A0210((s32)D_0200BE80, (s32)(D_0200BE80 + (k << 8)), 0x40);
        k++;
    } while (k <= 3);

    sub_080A0210((s32)D_0200BE80, (s32)D_020213C0, 0x140);

    k = 0;
    do {
        *(u16 *)(D_020291C0 + k * 2) = *(u16 *)(D_0200BE80 + k * 8);
        k++;
    } while (k <= 3);

    D_030041A8 |= 1;
}

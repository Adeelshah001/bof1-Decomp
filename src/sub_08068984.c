void sub_08000248(s32);
void sub_08003218(void);
void sub_08033B98(void);
void sub_08039514(void);
s32 sub_08062134(void);
u8 sub_08001770(s32);
s32 sub_0805B568(s32, s32, s32, s32, s32);
void sub_0805ABF4(s32, s32, u32);

typedef struct {
    u8 pad00[3];
    u8 x;
    u8 y;
    u8 pad05[7];
} MenuRegion;

extern MenuRegion D_03004790[];

void sub_08068B18(void)
{
    goto check;
    do {
        sub_08039514();
        sub_08003218();
        sub_08000248(1);
check:
        ;
    } while (sub_08062134() == 0);
    sub_08033B98();
    sub_08000248(1);
}

void sub_080689F4(s32 x, s32 y, s32 palette, s32 index)
{
    s32 tile;
    if (index == 2 && sub_08001770(0x1D))
        index = 0xB;
    tile = ((index & 7) << 2) + ((index >> 3) << 7) + 0x200;
    sub_0805B568(0x8000 | x, y, palette + 8, 0, tile);
}

void sub_080689B0(s32 x, s32 y, s32 palette, s32 index)
{
    s32 tile;
    if (index == 2 && sub_08001770(0x1D))
        index = 0xB;
    tile = index * 2 + 0x300;
    sub_0805B568(0x4000 | x, y, palette + 8, 0, tile);
}

void sub_08068984(s32 index, s32 x, s32 y, s32 arg3, u32 arg4)
{
    MenuRegion *regions = D_03004790;
    MenuRegion *region = &regions[index];
    s32 tile = (region->y + y) << 5;
    tile += region->x;
    sub_0805ABF4(tile + x, arg3, arg4);
}

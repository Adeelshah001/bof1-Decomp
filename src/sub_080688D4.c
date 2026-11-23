s32 sub_0805B568(s32, s32, s32, s32, s32);

typedef struct {
    u8 pad00[3];
    u8 x;
    u8 y;
    u8 pad05[7];
} MenuRegion;

extern MenuRegion D_03004790[];
extern u8 D_0300169C;
extern const u8 sub_0814C2A4[];

void sub_080688D4(s32 index, s32 x, s32 y, u16 arg3) {
    MenuRegion *regions = D_03004790;
    MenuRegion *region = &regions[index];
    s32 px = (region->x + x) * 8;
    s32 py = (region->y + y) * 8 + 4;
    if (D_0300169C == 0) {
        const u8 *const *table = (const u8 *const *)(sub_0814C2A4 + 0x20);
        s32 tile = table[arg3 >> 12][arg3 & 0xFF] + 0x3C0;
        sub_0805B568(px, py, 0, 0, tile);
    }
}

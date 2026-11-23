typedef struct {
    u8 pad00[0x18];
    s32 unk18;
} StructAE0;

typedef struct {
    u8 pad00[0x1C];
    u8 unk1C;
} Struct4550;

extern StructAE0 D_03000AE0;
extern u8 D_03000B08;
extern Struct4550 D_03004550;
extern u16 D_0201AFC0[];
extern u32 D_03001694;

s32 sub_080A07AC(s32, s32);
s32 sub_080A0844(s32, s32);

void sub_0805B85C(u8 arg0) {
    s32 val = D_03000AE0.unk18;
    u8 idx = D_03000B08;
    s32 row = sub_080A07AC(idx, val) << 6;
    s32 col = sub_080A0844(idx, val) + 0x201;
    u32 pal;
    row += col;
    pal = D_03004550.unk1C;
    *(u16 *)((row << 1) + (u32)D_0201AFC0) = (pal << 0xD) | (arg0 + 0x7E);
    D_03001694 |= 0x40000;
    D_03000B08++;
}

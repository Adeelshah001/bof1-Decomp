extern u8 D_03004410[];
extern const u8 D_080FBBAA[], D_080FBBBE[];

void sub_08001F80(s32, s32, s32);
u8 *sub_08043C30(u8);
void sub_08068938(s32, s32);
void sub_08068984(s32, s32, s32, s32, const u8 *);
void sub_0809D860(u8 *, const u8 *);
void sub_0809D874(u8 *, const u8 *);

s32 sub_080441C0(void)
{
    u8 text[32];

    sub_08068938(0, 0x24);
    sub_08068984(0, 2, 1, 0, D_080FBBAA + 1);
    sub_0809D860(text, sub_08043C30(3) + 2);
    sub_0809D874(text, D_080FBBBE);
    sub_08068984(0, 2, 3, 0, text);
    sub_08001F80(0, 0, 0);
    D_03004410[0xA] = 8;
    return 0;
}

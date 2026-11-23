extern s16 D_030040F8;
extern s16 D_03004100;
extern const s8 D_080F4B68[];
extern void sub_080379D4(s32);
extern void sub_080051B0(s32, s32, s32);

void sub_080051C8(s16 x, s16 y, s16 z)
{
    s16 *saved = &D_030040F8;
    if ((*saved = D_03004100) != 0) {
        const s8 *table = D_080F4B68;
        sub_080379D4(table[*saved]);
    }
    sub_080051B0(x, y, z);
}

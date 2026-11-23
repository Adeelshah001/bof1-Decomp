typedef struct {
    u8 pad00[0x78];
    u32 unk78;
    u8 pad7C[0xF8 - 0x7C];
    u32 unkF8;
    u8 padFC[0x178 - 0xFC];
    u32 unk178;
    u8 pad17C[0x1F8 - 0x17C];
    u32 unk1F8;
    u8 pad1FC[0x278 - 0x1FC];
    u32 unk278;
} Struct3420_5;

extern u8 D_03002AB0[];

void sub_08053E38(void);
void sub_080075BC(s32);

void sub_08014804(void)
{
    Struct3420_5 *s;
    D_03002AB0[0xB8] &= ~4;
    s = (Struct3420_5 *)D_03003420;
    s->unk78 = (u32)sub_08053E38;
    s->unkF8 = (u32)sub_08053E38;
    s->unk178 = (u32)sub_08053E38;
    s->unk1F8 = (u32)sub_08053E38;
    s->unk278 = (u32)sub_08053E38;
    sub_080075BC(0x8355);
}

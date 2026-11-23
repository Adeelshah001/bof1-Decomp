extern u8 D_03002AB0[];

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0x4C - 8];
    u16 unk4C;
} Struct2AB0_E824;

void func_0801E824(void)
{
    Struct2AB0_E824 *s = (Struct2AB0_E824 *)D_03002AB0;
    if (s->unk2 == 0x788 && s->unk6 == 0xDA9C) {
        s->unk4C = 8;
        D_03004830[0x2B]++;
    }
}

void sub_080379D4(s32 arg0);
void sub_0809184C(void *arg0);

typedef struct {
    u8 pad00[0x54];
    u16 unk54 : 16;
} UnkObj54;

void sub_080958D0(UnkObj54 *arg0)
{
    if ((--arg0->unk54) & 0x8000) {
        sub_080379D4(0xF4);
        *(u8 *)((u8 *)arg0 + 0x54) = 0x2F;
        sub_0809184C(arg0);
    }
}

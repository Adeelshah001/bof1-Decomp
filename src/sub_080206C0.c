typedef struct {
    u8 pad00[0xB4];
    u8 unkB4;
} Struct4620;

extern u8 D_03004620[];
extern u8 D_030023DC[];
extern u16 D_03004890;

void sub_0802028C(void);
void sub_0805B7B8(s32);
void sub_0805B7C8(s32);

void sub_080206C0(void)
{
    Struct4620 *s;
    u32 v;

    sub_0802028C();
    s = (Struct4620 *)D_03004620;
    v = s->unkB4 + 1;
    s->unkB4 = v;
    if (v & 0x20) {
        sub_0805B7B8(0x8000);
    } else {
        sub_0805B7C8(0x8000);
    }
    if (D_030023DC[0] != 1) {
        u8 *base = D_03004830;
        u8 *p = base + 0x2A;
        u32 zero = 0;
        *p = 2;
        base[0x2B] = zero;
        D_03004890 = 0xC8;
    }
}

typedef struct {
    u8 pad00[0x40];
    u8 unk40;
} Struct4154;

typedef struct {
    u8 pad00[0xB4];
    u8 unkB4;
} Struct4620;

extern Struct4154 *D_03004154;
extern u16 D_03001864;
extern u8 D_03004620[];

void sub_0802028C(void);
void sub_0805B7B8(s32);
void sub_0805B7C8(s32);

void sub_0802103C(void)
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
    D_03004830[0x2B]++;
}

void sub_08021080(void)
{
    do {
        if (D_03004154->unk40 != 0) {
            D_03001864 |= 1;
            D_03004830[0x2B]++;
        }
    } while (0);
}

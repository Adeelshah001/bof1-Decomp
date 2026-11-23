extern u8 D_03003520[];
extern u8 D_03004830[];
extern u8 D_03002AB0[];

s32 sub_08019520(s32, s32);
s32 sub_0803AF58(s32, s32);
void sub_0801A02C(void);

typedef struct { u8 pad00[0x88]; u32 unk88; } Unk2AB0;

void sub_0801AB8C(void) {
    u8 *p;
    u8 *s;
    s32 r;
    p = D_03003520;
    r = sub_08019520((s32)p, (s32)(p + 0x80));
    if ((r << 0x18) != 0) {
        ((Unk2AB0 *)D_03002AB0)->unk88 += 1;
        sub_0803AF58(0x103, 0xFFFF);
        s = D_03004830;
        s[0x2C] = 0x80;
        s[0x2B]++;
    }
}

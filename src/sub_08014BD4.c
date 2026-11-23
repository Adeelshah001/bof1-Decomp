extern u8 D_03004584[];
extern u8 D_030036A0[];
extern u8 D_03002AB0[];

void sub_08072CC4(s32);
void sub_0803EE88(void *);
void sub_080074C4(void);

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} Struct2AB0_88;

void sub_08014BD4(void)
{
    sub_08072CC4(0x22A);
    if (D_03004584[0] == 0) {
        D_03004830[0x2B]++;
    }
}

void sub_08014C38(void)
{
    sub_08072CC4(0x22B);
    if (D_03004584[0] == 0) {
        D_03004830[0x2B]++;
    }
}

void sub_08014C9C(void)
{
    sub_08072CC4(0x21A);
    if (D_03004584[0] == 0) {
        D_03004830[0x2B]++;
    }
}

void sub_08014998(void)
{
    u8 *p = D_030036A0;
    sub_0803EE88(p);
    sub_0803EE88(p + 0x80);
    sub_0803EE88(p + 0x100);
    sub_080074C4();
    ((Struct2AB0_88 *)D_03002AB0)->unk88++;
    D_03004830[0x2B]++;
}

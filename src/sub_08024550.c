extern u32 D_080F8D70[];
extern u8 D_03004830[];
void sub_080A0770(u32);

void sub_080243FC(void)
{
    sub_080A0770(D_080F8D70[D_03004830[0x40]]);
}

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} E0Struct;
extern E0Struct D_030023E0;
extern u8 D_03001850[];
u8 sub_08038058(u8);

void sub_080244FC(void)
{
    if (D_030023E0.unkA4 == 0x1A8) {
        if (sub_08038058(1) != 0) {
            D_03001850[0] = (D_03004830[0] + 1) & 3;
        }
    } else {
        D_03004830[0x3F] = 0;
        D_03004830[0x40] = 0;
    }
}

u8 sub_08038458(s32);
void sub_08004EA0(s32);

void sub_08024550(void)
{
    if (sub_08038458(1) != 0) {
        u8 *p;
        sub_08004EA0(0x8175);
        p = D_03004830;
        ++p[0x40];
    }
}

extern u16 D_03002430[];
u8 *Entity_FindFreeSlot(void);
void sub_08024CFC(void);

void sub_0802457C(void)
{
    if (D_03002430[3] <= 0x707F) {
        u8 *p = Entity_FindFreeSlot();
        if (p != NULL) {
            u8 *q = p + 0x3A;
            *q = 1;
            q += 2;
            *q = 0x14;
            q -= 1;
            *q = 2;
            q += 0x7B;
            *(u16 *)q = 0x70E0;
            sub_08024CFC();
        }
    }
}

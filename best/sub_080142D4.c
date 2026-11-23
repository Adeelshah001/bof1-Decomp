extern u8 D_03003620[];
extern u8 D_03004584[];
extern u16 D_030040F8;
extern u32 D_03001694;

typedef struct {
    u8 pad00[0x88];
    u32 unk88;
} ActorCounterFields;

typedef struct {
    u16 unk00;
    u16 unk02;
} ActorPositionFields;

extern ActorCounterFields D_03002AB0;
void sub_080075BC(s32);
void sub_0803EE88(void *);
void sub_0803AF58(s32, s32);
void sub_08007494(void);
void sub_08072CC4(s32);
void sub_080017EC(s32);
void sub_08037FC4(void *, s32);
void sub_08030AD8(s32);
void sub_08033AF4(s32);

void sub_08014334(void)
{
    D_03004830[0x2C] = 0x14;
    sub_080075BC(0x8353);
}

void sub_08014380(void)
{
    sub_0803EE88(D_03003620);
    sub_0803AF58(0xF5, 0xFFFF);
    D_03001694 |= 1;
    sub_08007494();
    D_03004830[0x2C] = 0xF0;
    D_03004830[0x2B]++;
}

void sub_080142D4(void)
{
    sub_08072CC4(0x4B2C);
    if (D_03004584[0] == 0) {
        u8 *actor;
        sub_080017EC(0x85);
        actor = D_03003420;
        sub_08037FC4(actor, 0x22);
        D_030040F8 = 0x2E;
        sub_08030AD8(0x2E);
        ((ActorPositionFields *)(actor + 0x180))->unk02 = 0xC68;
        D_03004830[0x2B]++;
    }
}

void sub_080142AC(void)
{
    sub_08033AF4(0xF);
    D_03002AB0.unk88++;
    D_03004830[0x2B]++;
}

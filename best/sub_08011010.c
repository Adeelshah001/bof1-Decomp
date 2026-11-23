typedef struct {
    u8 pad00[0x204];
    u16 items[65];
} Inventory11040;

extern u16 D_03004114;
extern u16 D_03003F94;
extern u8 D_030045B0[];
extern u8 D_03004584[];
extern Inventory11040 D_0202DBD0;
u8 sub_0805CF40(u16, u16 *);
void sub_080110DC(void);
void sub_08004EA0(s32);
void sub_08023FD8(s32);
void sub_08072CC4(s32);
void sub_080017EC(s32);

void sub_08011040(void)
{
    u16 slot;
    u8 result = sub_0805CF40(0x142, &slot);

    if (result != 0) {
        sub_080110DC();
    } else {
        u32 base = (u32)&D_0202DBD0;
        u32 offset = slot * 2;
        *(u16 *)(offset + (base + 0x204)) = result;
        sub_08004EA0(0x8209);
        sub_08023FD8(0x3E);
        D_03004830[0x2C] = 0x90;
        D_03004830[0x2B]++;
    }
}

void sub_08011010(void)
{
    u8 *state = D_03004830;
    u32 remaining = state[0x2C];
    s32 timer;

    remaining--;
    state[0x2C] = remaining;
    timer = (s8)remaining;
    if (timer != 0) {
        D_03004114 = 0;
    } else {
        state[0x2A] = timer;
        state[0x2B] = timer;
    }
}

void sub_08010FC4(void)
{
    u8 *settings;
    u8 *fade;
    u32 zero;

    sub_08004EA0(0x82FE);
    D_03003F94 = 9;
    settings = D_030045B0;
    fade = settings;
    fade += 0x45;
    zero = 0;
    *fade = 0xE0;
    settings[0x46] = zero;
    D_03004830[0x2C] = 0x80;
    D_03004830[0x2B]++;
    D_03004114 = zero;
}

void sub_08010F8C(void)
{
    u8 busy;

    sub_08072CC4(0x2D12);
    busy = D_03004584[0];
    if (busy == 0) {
        D_03004830[0x2B] = 4;
        sub_080017EC(0x74);
        D_03004114 = busy;
    }
}

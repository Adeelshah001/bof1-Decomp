extern u8 D_03002AB0[];
extern u8 D_03004584[];
void sub_0802FD60(s32);
void sub_0803EE88(void *);
void sub_0800B11C(void);
void sub_08072CC4(s32);

void sub_0800968C(void)
{
    u8 *state;
    sub_0802FD60(6);
    state = D_03004830;
    state[0x2B]++;
}

void sub_0800959C(void)
{
    u8 *state;
    sub_0803EE88(D_03003420);
    sub_0800B11C();
    state = D_03004830;
    state[0x2B]++;
}

void sub_08009560(void)
{
    u8 *state = D_03004830;
    s8 *timer = (s8 *)&state[0x2C];

    if (*timer < 0) {
        u32 eventId;
        u8 *event;
        *timer = 0x78;
        eventId = 0x80B8;
        state[0x2B]++;
        event = D_03002AB0;
        *(u32 *)(event + 0x94) = eventId;
        D_030023D0[0] = 2;
    }
}

void sub_0800952C(void)
{
    u8 *state;
    sub_08072CC4(0x1408);
    if (D_03004584[0] == 0) {
        state = D_03004830;
        state[0x2C] = 0x3C;
        state[0x2B]++;
    }
}

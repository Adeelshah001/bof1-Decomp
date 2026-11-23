extern u8 D_03002AB0[];
extern u8 D_030033F0[];
extern u8 D_030023DC[];

void sub_08040A74(s32);
void sub_08024648(void);
void sub_08004EA0(s32);
s32 sub_08033420(void);
void sub_0802FD60(s32);

void sub_080245EC(void) {
    u8 *p;
    u8 *q;
    u32 z;
    sub_08040A74(0xA);
    sub_08040A74(0xB);
    p = D_03002AB0;
    {
        u8 v = p[0xB8] & 0xFB;
        z = 0;
        p[0xB8] = v;
    }
    q = D_03004830;
    q[0x40] = z;
}

void sub_080245C4(void) {
    u8 *p;
    {
        u32 v = D_030033F0[0];
        v |= 1;
        D_030033F0[0] = v;
    }
    p = D_03002AB0;
    p[0xB8] |= 0x40;
    sub_08024648();
}

void sub_08024718(void) {
    if (D_030023DC[0] != 1) {
        u8 *p;
        u8 *q;
        u32 z;
        sub_08004EA0(0x8238);
        p = D_03002AB0;
        {
            u8 v = p[0xB8] & 0xFB;
            z = 0;
            p[0xB8] = v;
        }
        q = D_03004830;
        q[0x3F] = z;
        q[0x40] = z;
    }
}

void sub_08024758(void) {
    if ((u8)sub_08033420() != 0) {
        u8 *event = D_03002AB0;
        u8 *state;
        event[0xB8] &= 0xBF;
        sub_0802FD60(0x34);
        state = D_03004830;
        state[0x40]++;
    }
}

extern const char D_080A7F00[];
extern const char D_080A7C18[];

void sub_0809A0B0(u8 *);
void sub_0809A97C(u8 *);
void sub_0809A9B8(u8 *);
void sub_0809A9E4(u8 *);
void sub_080352D0(const char *, const char *, s32, ...);
void sub_08099648(u8 *);
void sub_0803EE6C(u8 *);

void sub_0809A910(u8 *arg0)
{
    *(s16 *)(arg0 + 0x38) = 0x160;
    *(u16 *)(arg0 + 0x02) += 8;
    *(u16 *)(arg0 + 0x06) -= 0x10;
    sub_0809A0B0(arg0);
}

void sub_0809A92C(u8 *arg0)
{
    switch (arg0[0x4C]) {
    case 0:
        sub_0809A97C(arg0);
        break;
    case 2:
        sub_0809A9B8(arg0);
        break;
    case 4:
        sub_0809A9E4(arg0);
        break;
    default:
        sub_080352D0(D_080A7F00, D_080A7C18, 0x8E0, arg0[0x4C]);
        break;
    }
}

void sub_0809A8B8(u8 *arg0)
{
    s32 v = arg0[0x54] - 1;
    arg0[0x54] = (u8)v;
    if ((v << 24) == 0) {
        u8 val = 4;
        if (arg0[0x55] != 0) {
            val = 3;
        }
        arg0[0x55] = val;
        arg0[0x54] = 10;
        arg0[0x4C] = 4;
        sub_08099648(arg0);
    }
}

void sub_0809A9B8(u8 *arg0)
{
    u8 *child = *(u8 **)(arg0 + 0x6C);
    *(u16 *)(arg0 + 0x02) = *(u16 *)(child + 0x02);
    if (child[0x3A] == 0) {
        sub_0803EE6C(arg0);
        arg0[0x54] = 0;
        arg0[0x55] = 0;
    }
}

extern u8 sub_08038458(s32);
extern void sub_08004EA0(s32);
extern u8 D_03002AB0[];

void sub_0801A584(void)
{
    if (sub_08038458(1) != 0) {
        u8 *event = D_03002AB0;
        u8 *step;
        sub_08004EA0(*(s32 *)(event + 0x94));
        step = D_03004830;
        ++step[0x2B];
    }
}

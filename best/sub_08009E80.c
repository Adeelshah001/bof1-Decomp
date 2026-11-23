extern u8 D_03002AB0[];
extern u8 D_030023D0[];
void sub_0800B11C(void);
void sub_08003528(s32 a, s32 b, s32 c, s32 d, s32 e);

void sub_08009E80(Entity *arg0) {
    u32 val = 0x8068;
    sub_080547DC((void *)0x030034A0, 2);
    sub_0800B11C();
    sub_08003528(0, 0, 0, 0x100, 1);
    {
        u8 *p1 = D_03002AB0;
        *(u32 *)(p1 + 0x94) = val;
    }
    *D_030023D0 = 2;
    arg0->unk68 += 2;
}

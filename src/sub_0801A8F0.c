extern void sub_080A0770(s32);
extern u32 D_080F76F4[];
extern void sub_08019EB4(void);
extern void sub_0800312C(s32, s32);
extern void sub_08001F80(s32, s32, s32);
extern void sub_08019CD0(void);
extern void sub_08018420(void);
extern void sub_08039054(void);
extern void sub_08018468(void);
extern u8 D_03004160[];

void sub_0801A888(void)
{
    u32 *table = D_080F76F4;
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    sub_080A0770(table[(s32)*step]);
}

void sub_0801A8AC(void)
{
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);

    if (*step != 0) {
        sub_08019EB4();
    } else {
        sub_0800312C(0x10, 0x14);
        sub_08001F80(0, 0, 0);
        sub_0800312C(0x10, 0x16);
        ++*step;
    }
}

void sub_0801A8F0(void)
{
    u8 *base = D_03004830;
    s8 *step = (s8 *)(base + 0x2B);
    s8 state = *step;

    if (state == 1) {
        sub_08019CD0();
    } else if (state == 2) {
        sub_08018420();
    } else {
        sub_08039054();
        base[0x2C] = 30;
        ++*step;
    }
}

void sub_0801A930(void)
{
    u8 *base = D_03004830;
    u8 *step = base + 0x2B;
    u8 state = *step;

    if ((s8)*step != 1) {
        D_03004160[0] = 0x40;
        *step = state + 1;
    }
    sub_08018468();
}

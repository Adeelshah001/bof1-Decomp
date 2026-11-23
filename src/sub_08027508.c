void sub_08027534(void);
void sub_080275BC(void);
void sub_08027934(void);
void sub_08027424(void *);

extern u8 D_030023DC[];
extern u16 D_03004E08[];
extern u16 D_03004E0C[];

void sub_08027508(void)
{
    D_03004830[0x41] = 0x10;
    D_03004830[0x42] = 0;
    D_03004830[0x40] += 1;
    sub_08027534();
}

void sub_08027534(void)
{
    if (D_030023DC[0] != 1) {
        sub_08027934();
        if (--D_03004830[0x41] != 0) {
            return;
        }
        D_03004830[0x41] = 0x10;
        D_03004E08[0] = 0x7F00;
        if (D_03004830[0x42] == 0) {
            sub_08027588();
        } else {
            sub_080275BC();
        }
    }
}

s32 sub_080274A0(void *arg0)
{
    u16 v;
    *(u16 *)0x03004114 = 0;
    v = *(u16 *)((u8 *)arg0 + 6);
    if (v != 0x660C) {
        *(u16 *)0x03004114 = 0;
        return 0;
    }
    v = *(u16 *)((u8 *)arg0 + 2);
    if (v == 0xD88 || v == 0xD98) {
        sub_08027424(arg0);
    } else {
        *(u16 *)0x03004114 = 0;
    }
    return 0;
}

void sub_08027588(void)
{
    u16 v = (u16)(D_03004E0C[0] + 0x840);
    if (v > 0x6B3F) {
        D_03004830[0x42] = 1;
        v = 0x6B40;
    }
    D_03004E0C[0] = v;
}

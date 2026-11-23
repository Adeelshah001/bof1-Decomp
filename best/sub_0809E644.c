typedef struct {
    u32 ident;
    u8 unk4;
    u8 pad5[0x0B - 0x05];
    u8 unkB;
} SoundInfo;

extern SoundInfo *D_03007FF0;
void sub_0809E712(void *p);
void sub_0809E52C(void);
void sub_0809E52E(void);

void sub_0809E708(u32 *p)
{
    if (p[0xD] == 0x68736D53)
        sub_0809E712(p);
}

void sub_0809E6BC(void)
{
    SoundInfo *info = D_03007FF0;
    s32 t;

    if ((u32)(info->ident - 0x68736D53) > 1)
        return;
    t = info->unk4 - 1;
    info->unk4 = t;
    if (t > 0)
        return;
    info->unk4 = info->unkB;
    if (*(vu32 *)0x040000C4 & 0x02000000)
        *(vu32 *)0x040000C4 = 0x84400004;
    if (*(vu32 *)0x040000D0 & 0x02000000)
        *(vu32 *)0x040000D0 = 0x84400004;
    *(vu16 *)0x040000C6 = 0x0400;
    *(vu16 *)0x040000D2 = 0x0400;
    *(vu16 *)0x040000C6 = 0xB600;
    *(vu16 *)0x040000D2 = 0xB600;
}

void sub_0809E6A4(void)
{
    sub_0809E52E();
}

void sub_0809E644(void)
{
    sub_0809E52C();
}

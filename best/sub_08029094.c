extern u8 D_03002480[];
extern u8 D_03004880[];
extern u8 D_0300416C[];
extern u8 D_03004170[];

void sub_08028AD8(void *arg0);
void sub_08028B30(u8 arg0, s32 arg1);
void sub_08028400(u8 arg0, s32 arg1);

void sub_08029094(void) {
    s32 sp0 = 0;
    u8 i;
    u32 *p = (u32 *)0x040000D4;
    u8 *base = (u8 *)0x03002480;

    p[0] = &sp0; p[1] = 0x0200D280; p[2] = 0x85001000;
    sp0 = 0;
    p[0] = &sp0; p[1] = 0x020131B0; p[2] = 0x85001000;
    sp0 = 0;
    p[0] = &sp0; p[1] = 0x02000810; p[2] = 0x85001000;

    sub_08028AD8(base);
    sub_08028B30(base[2], *(u32 *)D_03004880);
    sub_08028B30(base[2], (s32)(base - 0x50));

    *(u16 *)D_0300416C = 0;
    *(u8 *)D_03004170 = 0;
    for (i = 0; i <= 15; i++) {
        sub_08028400(i, *(u32 *)D_03004880);
    }
}

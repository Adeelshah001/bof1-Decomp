typedef struct {
    u8 pad00[0x94];
    u8 *unk94;
} State03002AB0;

extern State03002AB0 D_03002AB0;
extern u16 D_0300413C;

void sub_08054820(void *arg0, u8 arg1);

u32 sub_08007468(u16 arg0, u16 arg1) {
    u16 *base = (u16 *)0x03002AB0;

    if (base[1] != arg0)
        return 1;
    return base[3] != arg1;
}

void sub_08007524(void) {
    u8 *p = D_03002AB0.unk94;
    u16 v = D_0300413C;

    p[0x6F] = v;
    sub_08054820(p, D_0300413C);
}

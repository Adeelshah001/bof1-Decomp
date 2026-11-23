typedef struct {
    u8 pad00[0x26];
    u8 f26;
    u8 pad27[0x40 - 0x27];
    u8 *f40;
} S26;

typedef struct {
    u8 pad00[0x27];
    u8 f27;
    u8 pad28[0x40 - 0x28];
    u8 *f40;
} S27;

s32 sub_080A44DC(void);
s32 sub_080A44FC(void);
void sub_080A02B4(u8 c);
void sub_080A0578(void);

s32 sub_080A4818(void)
{
    s32 sp0 = sub_080A44FC();
    s32 val = sub_080A44DC();

    if (val != 0x14) {
        ((s32 *)0x03001150)[val * 2] = -1;
    }
    (void)sp0;
    return 2;
}

void sub_080A03A0(u8 c)
{
    vu16 *reg;
    u16 saved;
    u16 *p;

    reg = (vu16 *)0x04000204;
    saved = *reg;
    *reg = 0x1800;
    sub_080A02B4(c);
    *reg = saved;
    p = (u16 *)0x09FE20F8;
    if (p[3] == (u16)(p[2] - 1))
        sub_080A0578();
}

void sub_080A01F4(s32 unused, S27 *s)
{
    s->f27 = *s->f40;
    s->f40 = s->f40 + 1;
}

void sub_080A01E0(s32 unused, S26 *s)
{
    s->f26 = *s->f40;
    s->f40 = s->f40 + 1;
}

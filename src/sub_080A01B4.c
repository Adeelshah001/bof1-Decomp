typedef struct {
    u8 pad00[0x1E];
    u8 f1E;
    u8 pad1F[0x40 - 0x1F];
    u8 *f40;
} S1E;

typedef struct {
    u8 pad00[0x1F];
    u8 f1F;
    u8 pad20[0x40 - 0x20];
    u8 *f40;
} S1F;

typedef struct {
    u8 pad00[0x2F];
    u8 f2F;
    u8 pad30[0x40 - 0x30];
    u8 *f40;
} S2F;

s32 sub_080A48F0(u32 *arg0, u32 *arg1)
{
    if (arg0 != NULL) {
        arg0[0] = 0x11;
        arg0[1] = 0;
    }
    if (arg1 != NULL) {
        arg1[0] = 0;
        arg1[1] = 0;
    }
    return 0;
}

void sub_080A01D4(s32 unused, S1F *s)
{
    s->f1F = *s->f40;
    s->f40 = s->f40 + 1;
}

void sub_080A01C8(s32 unused, S1E *s)
{
    s->f1E = *s->f40;
    s->f40 = s->f40 + 1;
}

void sub_080A01B4(s32 unused, S2F *s)
{
    s->f2F = *s->f40;
    s->f40 = s->f40 + 1;
}

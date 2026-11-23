extern u8 D_03002510[];
extern u8 D_03002AB0[];
extern u8 gEntityPool[];

u8 sub_08033420(void);
void sub_0802FD60(s32);
void sub_08053B78(void);

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x184 - 0x08];
    void (*unk184)(void);
    u8 pad188[0x214 - 0x188];
    void (*unk214)(void);
} Struct2510;

typedef struct {
    u8 pad00[0x64];
    void (*unk64)(void);
    u8 pad68[0x144 - 0x68];
    void (*unk144)(void);
} EntityPoolStruct;

void sub_08025220(void)
{
    if (++((Struct2510 *)D_03002510)->unk6 > 0xF597) {
        D_03004830[0x40]++;
    }
}

void sub_08025248(void)
{
    if (sub_08033420()) {
        D_03002AB0[0xB8] &= 0xBF;
        D_03004830[0x40]++;
    }
}

void sub_08025278(void)
{
    if (--((Struct2510 *)D_03002510)->unk6 == 0xF508) {
        D_03004830[0x40]++;
    }
}

void sub_080252A0(void)
{
    Struct2510 *s = (Struct2510 *)D_03002510;
    EntityPoolStruct *e = (EntityPoolStruct *)gEntityPool;

    s->unk184 = sub_08053B78;
    s->unk214 = sub_08053B78;
    e->unk64 = sub_08053B78;
    e->unk144 = sub_08053B78;
    D_03002AB0[0xB8] |= 0x80;
    sub_0802FD60(0x96);
    D_03004830[0x40]++;
}

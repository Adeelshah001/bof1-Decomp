extern u8 D_03002AB0[];
extern u8 D_03002510[];
extern u8 gEntityPool[];
extern u16 D_03001864;
extern u32 D_03001694;

void sub_0803EE54(Entity *);
void sub_08024008(s32);
void sub_08038808(void);
void sub_08022E2C(void);
void sub_0800312C(s32, s32);
void sub_08053BB0(void);

typedef struct {
    u8 pad00[0x3F];
    u8 unk3F;
    u8 unk40;
    u8 pad41;
    u8 unk42;
} ScriptState4830;

typedef struct {
    u8 pad00[0x64];
    void (*unk64)(void);
    u8 pad68[0xF4 - 0x68];
    void (*unkF4)(void);
} Struct2510;

typedef struct {
    u8 pad00[0x64];
    void (*unk64)(void);
    u8 pad68[0x144 - 0x68];
    void (*unk144)(void);
} EntityPoolStruct;

void sub_08025B60(Entity *actor)
{
    D_03002AB0[0xB8] &= 0xFB;
    sub_0803EE54(actor);
    actor->unk68 += 2;
}

void sub_08025C78(Entity *actor)
{
    if (((ScriptState4830 *)D_03004830)->unk42 & 3) {
        ((ScriptState4830 *)D_03004830)->unk3F = 0xD;
        ((ScriptState4830 *)D_03004830)->unk40 = 0;
        actor->unk68 += 2;
    }
}

void sub_080253EC(void)
{
    u8 *base;

    sub_08024008(0x98);
    sub_08038808();
    sub_08022E2C();
    base = D_03004830;
    base[0x2D] = 1;
    base[0x40]++;
}

void sub_08025390(void)
{
    ((Struct2510 *)D_03002510)->unk64 = sub_08053BB0;
    ((Struct2510 *)D_03002510)->unkF4 = sub_08053BB0;
    ((EntityPoolStruct *)gEntityPool)->unk64 = sub_08053BB0;
    ((EntityPoolStruct *)gEntityPool)->unk144 = sub_08053BB0;
    sub_0800312C(0x10, 2);
    D_03001864 = 0x17;
    D_03001694 &= ~0x80;
    D_03004830[0x40]++;
}

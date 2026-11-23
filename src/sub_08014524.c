extern u8 D_030034A0[];
extern u8 D_03002AB0[];
typedef struct {
    u8 pad00[0x1AC];
    u32 unk1AC;
} ScriptProgress;

void sub_080075BC(s32);
void sub_080137DC(void *);
void sub_080137E8(void *);
void sub_08013800(void *);
void sub_08007494(void);

void sub_080144DC(void)
{
    D_03004830[0x2C] = 16;
    sub_080075BC(0x830F);
}

void sub_080144F8(void)
{
    sub_080137DC(D_030034A0);
    ((ScriptProgress *)D_03002AB0)->unk1AC++;
    sub_080075BC(0x8318);
}

void sub_080144B0(void)
{
    sub_080137E8(D_03003420);
    ((ScriptProgress *)D_03002AB0)->unk1AC++;
    sub_080075BC(0x835E);
}

void sub_08014524(void)
{
    sub_08013800(D_03003420);
    sub_08007494();
    sub_080075BC(0x832A);
    D_03004830[0x2C] = 168;
}

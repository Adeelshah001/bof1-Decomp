typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x46 - 0x08];
    u16 unk46;
    u16 unk48;
    u16 unk4A;
    u8 pad4C[0x5C - 0x4C];
    u8 unk5C;
    u8 pad5D[0x64 - 0x5D];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
    u8 pad6D[0x7E - 0x6D];
    u16 unk7E;
} Entity45D;

extern u8 D_03001850;
void sub_0803A8EC(Entity45D *);
u8 sub_08055660(u8);
void sub_08046050(void);
void sub_08037FC4(Entity45D *, s32);
void sub_080450CC(void);
u16 sub_08037C98(Entity45D *, s32);
void sub_080379D4(s32);
void sub_08045D04(void);
void sub_080460C0(void);

void func_08045F10(Entity45D *arg0)
{
    Entity45D *e = arg0;
    if (sub_08055660(arg0->unk5C) != 0) {
        arg0->unk64 = (u32)sub_08046050;
    }
    sub_0803A8EC(e);
}

void sub_08045DF4(Entity45D *arg0)
{
    Entity45D *e = arg0;
    u8 *flag = &arg0->unk6C;
    if (*flag != 0) {
        sub_08037FC4(arg0, 2);
        arg0->unk64 = (u32)sub_080450CC;
        *flag = 0;
    }
    sub_0803A8EC(e);
}

void sub_08045DB4(Entity45D *arg0)
{
    Entity45D *e = arg0;
    if (sub_08037C98(arg0, 1) == 0) {
        sub_080379D4(0x21);
        arg0->unk46++;
        D_03001850 = 0;
        arg0->unk64 = (u32)sub_08045D04;
    }
    sub_0803A8EC(e);
}

void sub_0804608C(Entity45D *arg0, u16 arg1)
{
    if (arg1 == arg0->unk7E) {
        arg0->unk46 = arg0->unk2;
        arg0->unk4A = arg0->unk6 + 4;
        arg0->unk64 = (u32)sub_080460C0;
    }
    sub_0803A8EC(arg0);
}

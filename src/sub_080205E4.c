typedef struct {
    u8 pad00[0xB4];
    u8 unkB4;
} Struct4620;

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
    u8 pad08[0x3A - 0x08];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
} Entity3C;

extern u8 D_03002AB0[];
extern u8 D_03004620[];
extern u16 D_030040F8;
extern Entity3C *D_03004154;
extern u8 D_030023E0[];
extern u8 D_030023DC[];
extern u16 D_03004890;

void sub_0800518C(s32, s32, s32);
void sub_0802028C(void);
void sub_0805B7B8(s32);
void sub_0805B7C8(s32);
Entity3C *Entity_FindFreeSlot(void);

void sub_0801FB5C(void)
{
    sub_0800518C(1, 0xE88, -0x3B14);
    D_03002AB0[0xB8] |= 8;
    D_03004830[0x2B]++;
}

void sub_0802058C(void)
{
    Struct4620 *s;
    u32 v;
    u8 *base;

    sub_0802028C();
    s = (Struct4620 *)D_03004620;
    v = s->unkB4 + 1;
    s->unkB4 = v;
    if (v & 0x20) {
        sub_0805B7B8(0x8000);
    } else {
        sub_0805B7C8(0x8000);
    }
    base = D_03004830;
    base[0x2A] = 1;
    base[0x2B] = 1;
    D_030040F8 = 0x1030;
}

void sub_080205E4(void)
{
    Entity3C *slot = Entity_FindFreeSlot();
    D_03004154 = slot;
    if (slot != NULL) {
        slot->unk3C = 0x14;
        D_03004154->unk3A = 1;
        D_03004154->unk3B = 1;
        D_03004154->unk6 = ((Entity3C *)D_030023E0)->unk6 + 0x20;
        D_03004830[0x2B]++;
    }
}

void sub_080206C0(void)
{
    Struct4620 *s;
    u32 v;

    sub_0802028C();
    s = (Struct4620 *)D_03004620;
    v = s->unkB4 + 1;
    s->unkB4 = v;
    if (v & 0x20) {
        sub_0805B7B8(0x8000);
    } else {
        sub_0805B7C8(0x8000);
    }
    if (D_030023DC[0] != 1) {
        u8 *base = D_03004830;
        base[0x2A] = 2;
        base[0x2B] = 0;
        D_03004890 = 0xC8;
    }
}

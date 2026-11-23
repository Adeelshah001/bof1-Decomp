typedef struct {
    u8 pad00[0xE2];
    u8 unkE2;
    u8 padE3[0xF0 - 0xE3];
    u8 unkF0;
    u8 unkF1;
    u8 padF2[2];
    u16 unkF4;
    u8 padF6[0x124 - 0xF6];
} PartyMember;

typedef struct {
    u8 pad00[0x0C];
    u8 unkC;
    u8 unkD;
    u16 unkE;
    u8 pad10[0x24 - 0x10];
    u16 unk24;
    u8 pad26[0x40 - 0x26];
    u16 unk40;
    u8 pad42[0x48 - 0x42];
    u8 unk48;
    u8 pad49[0x54 - 0x49];
    u16 unk54;
} Entity81;

extern PartyMember D_03002AB0[];
extern const u8 D_082D431C[];

void sub_08080A04(Entity81 *arg0);
void sub_08080DB0(Entity81 *arg0);
u16 sub_080818D0(Entity81 *arg0, s32 arg1, PartyMember *arg2);
void sub_08081A68(Entity81 *arg0, u16 arg1);
s32 sub_08003104(void);

void sub_08081EC8(Entity81 *arg0, PartyMember *arg1)
{
    if ((arg1->unkF4 >> 8) == 0xFF) {
        arg0->unk40 = 0;
        return;
    }
    if (arg0->unk48 == 0) {
        sub_08080A04(arg0);
        return;
    }
    sub_08080DB0(arg0);
}

void sub_08081DFC(Entity81 *arg0)
{
    arg0->unkC = 0;
    arg0->unkD = 0;
    arg0->unkE = 0;
    sub_080818D0(arg0, 0, &D_03002AB0[0]);
    sub_080818D0(arg0, 4, &D_03002AB0[1]);
    sub_080818D0(arg0, 8, &D_03002AB0[2]);
    sub_08081A68(arg0, sub_080818D0(arg0, 0xC, &D_03002AB0[3]));
}

PartyMember *sub_080829B8(void *arg0, u8 arg1, void *arg2)
{
    s32 flags = arg1;
    PartyMember *p;
    for (p = D_03002AB0; p < &D_03002AB0[4]; p++) {
        s32 v = flags & 0x20;
        if (v == 0) {
            v = p->unkF1 & 0x80;
            if (v != 0)
                continue;
        }
        v = p->unkF0 & 0x10;
        if (v == 0) {
            *(PartyMember **)((u8 *)arg0 + 0x54) = p;
            *(PartyMember **)((u8 *)arg2 + 0x78) = p;
            return p;
        }
    }
    return NULL;
}

s16 sub_08082AE8(Entity81 *arg0)
{
    const u8 *p = &D_082D431C[arg0->unk54];
    u8 val = *p;
    if (val != 0) {
        u8 delta = (sub_08003104() & 3) - 1;
        if (delta == 2) {
            delta = 1;
        }
        val = delta + *p;
        if (val & 0x80) {
            val = 0;
        }
    }
    arg0->unk24 = val;
    return val;
}

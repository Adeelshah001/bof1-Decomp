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

extern const u8 D_08151B36[];
extern PartyMember D_03002AB0[];
extern PartyMember D_03002F40[];

s32 sub_08082990(u8 *arg0)
{
    s32 v = arg0[0xE2] >> 4;
    v = *(const u8 *)(v + (u32)D_08151B36);
    v += 0x200;
    return v << 5;
}

PartyMember *sub_080829B8(void *arg0, u8 arg1, void *arg2)
{
    s32 flags = arg1;
    PartyMember *p;
    for (p = D_03002AB0; p < &D_03002AB0[4]; p++) {
        if ((flags & 0x20) || !(p->unkF1 & 0x80)) {
            if (!(p->unkF0 & 0x10)) {
                *(PartyMember **)((u8 *)arg0 + 0x54) = p;
                *(PartyMember **)((u8 *)arg2 + 0x78) = p;
                return p;
            }
        }
    }
    return NULL;
}

void sub_080828D0(u8 *arg0)
{
    s32 v = arg0[0x61] & 0x0F;
    v = (u8)(v - arg0[0x60]);
    if (v != 0) {
        u8 i = v;
        PartyMember *p = D_03002F40;
        do {
            v = p->unkF0 & 0x10;
            if (v == 0) {
                v = 1;
                arg0[0x38] = v;
                return;
            }
            p++;
            i--;
        } while (i != 0);
    }
    v = 0;
    arg0[0x38] = v;
}

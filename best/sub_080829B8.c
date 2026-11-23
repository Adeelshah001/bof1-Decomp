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

extern PartyMember D_03002AB0[];

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

void sub_08084B70(u8 *arg0, u8 *arg1)
{
    u8 val = arg1[0x3B];
    u8 *p = arg0 + 0x6A;
    s32 zero = 0;
    s32 two;

    p[0] = val;
    p[4] = val;
    p[8] = val;
    p[12] = val;

    two = 2;
    arg0[0x68] = two;
    arg0[0x6C] = two;
    arg0[0x70] = two;
    arg0[0x74] = two;

    arg0[0x6B] = zero;
    arg0[0x6F] = zero;
    arg0[0x73] = zero;
    arg0[0x77] = zero;
}

extern u8 D_03004FB8[];

void sub_08084BB0(void)
{
    u16 i;
    for (i = 0; ; i++) {
        u8 val = D_03004FB8[i];
        if (val & 0x80)
            break;
        if (val > 3) {
            u8 *p = D_03003420 + (u8)(val - 4) * 0x124;
            if (p[0xF1] & 0x80) {
                p[0xF1] |= 8;
            }
        }
    }
}

extern const u8 D_08151B26[];
extern const u8 D_08151B32[];

void sub_080332C0(u8 *);

void sub_08084DC8(u8 *arg0)
{
    u16 val;

    if (arg0[0x3C] == 5 && (arg0[0xF0] & 0x20)) {
        val = D_08151B32[arg0[0xE2] >> 4] * 2;
    } else {
        const u8 *table = D_08151B26 + 1;
        val = table[arg0[0x3C]];
    }
    *(u16 *)(arg0 + 0x2A) = val;
    sub_080332C0(arg0);
}

struct Unk124 {
    u8 pad00[0xF0];
    u8 unkF0;
    u8 unkF1;
    u8 padF2[0x124 - 0xF2];
};

extern struct Unk124 D_03002AB0[4];

struct Unk124 *sub_08084F14(u8 *arg0, u8 arg1, u8 *arg2)
{
    u32 flags = arg1;
    struct Unk124 *p;

    for (p = D_03002AB0; p < &D_03002AB0[4]; p++) {
        if (((flags & 4) || !(p->unkF1 & 0x80)) && !(p->unkF0 & 0x10)) {
            *(struct Unk124 **)(arg0 + 0x54) = p;
            *(struct Unk124 **)(arg2 + 0x78) = p;
            return p;
        }
    }
    return NULL;
}

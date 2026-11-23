extern u8 D_03004FB8[];
extern u8 D_03003420[];

struct Unk124 {
    u8 pad00[0xF0];
    u8 unkF0;
    u8 unkF1;
    u8 padF2[0x124 - 0xF2];
};

extern struct Unk124 D_03002AB0[4];

void sub_08084B70(u8 *arg0, u8 *arg1)
{
    u8 val = arg1[0x3B];
    u8 zero = 0;
    s32 two;

    arg0[0x6A] = val;
    arg0[0x6E] = val;
    arg0[0x72] = val;
    arg0[0x76] = val;

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

void sub_08084BB0(void)
{
    u16 i = 0;
    u8 *table = D_03004FB8;
    s32 mask = 0x80;
    u8 *units = D_03003420;

loop:
    {
        u32 val = *(u8 *)(i + (u32)table);
        s32 cond;
        u8 idx;
        if (val & mask) {
            return;
        }
        cond = (val > 3);
        idx = val - 4;
        if (cond) {
            u8 *p = (u8 *)(idx * 0x124 + (u32)units);
            if (p[0xF1] & mask) {
                p[0xF1] |= 8;
            }
        }
        i++;
        goto loop;
    }
}

struct Unk124 *sub_08084F14(u8 *arg0, u8 arg1, u8 *arg2)
{
    struct Unk124 *p = D_03002AB0;
    u32 flags = arg1;

    while (p < &D_03002AB0[4]) {
        if (((4 & flags) || !(p->unkF1 & 0x80)) && !(p->unkF0 & 0x10)) {
            *(struct Unk124 **)(arg0 + 0x54) = p;
            *(struct Unk124 **)(arg2 + 0x78) = p;
            return p;
        }
        p++;
    }
    return NULL;
}

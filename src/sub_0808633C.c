extern u8 D_03004FB8[];
extern u8 D_03003420[];
extern u8 D_03004F50[];

struct Unk124 {
    u8 pad00[0xF0];
    u8 unkF0;
    u8 unkF1;
    u8 padF2[0x124 - 0xF2];
};

extern struct Unk124 D_03002AB0[4];

struct Unk8633C {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x06 - 0x04];
    u16 unk6;
    u8 pad08[0x4C - 0x08];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[0x50 - 0x4E];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u8 unk54;
    u8 pad55[0xE4 - 0x55];
    u16 unkE4;
    u16 unkE6;
};

void sub_08037FC4(struct Unk8633C *, s32);

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

void sub_08084BB0(void)
{
    u16 i = 0;

    while (!(D_03004FB8[i] & 0x80)) {
        u8 val = D_03004FB8[i];
        s32 cond = (val > 3);
        u8 idx = val - 4;
        if (cond) {
            u8 *p = D_03003420 + idx * 0x124;
            if (p[0xF1] & 0x80) {
                p[0xF1] |= 8;
            }
        }
        i++;
    }
}

struct Unk124 *sub_08084F14(u8 *arg0, u8 arg1, u8 *arg2)
{
    struct Unk124 *p;

    for (p = D_03002AB0; p < &D_03002AB0[4]; p++) {
        if (((arg1 & 4) || !(p->unkF1 & 0x80)) && !(p->unkF0 & 0x10)) {
            *(struct Unk124 **)(arg0 + 0x54) = p;
            *(struct Unk124 **)(arg2 + 0x78) = p;
            return p;
        }
    }
    return NULL;
}

void sub_0808633C(struct Unk8633C *arg0)
{
    if (--arg0->unk54 == 0) {
        arg0->unk2 = arg0->unkE4;
        arg0->unk6 = arg0->unkE6;
        arg0->unk4C = 2;
        arg0->unk4D = 0;
        arg0->unk50 = 0;
        D_03004F50[0x5D] = 0;
        sub_08037FC4(arg0, 0);
    }
}

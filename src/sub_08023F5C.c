typedef struct {
    u16 unk0;
    u16 unk2;
    void (*unk4)(void *);
} Struct23F94;

typedef struct {
    u16 unk0;
    u16 unk2;
    s32 (*unk4)(void *, u16, u16);
} Struct23ED4;

extern u16 D_03004120;
extern u16 D_03004100;
extern u8 D_0202B1C0[];
extern u16 D_03004114;
extern u16 D_03002484;
extern u8 D_03002AB0[];
extern const Struct23ED4 D_080F9000[];
extern u8 D_0300488C;

u8 sub_08038458(s32);

u8 sub_08023F5C(u16 arg0, u16 arg1)
{
    u32 idx;
    D_03004120 = arg0;
    D_03004100 = arg1;
    idx = ((arg1 & 0xFF00) >> 3) | ((arg0 & 0x1F00) >> 8);
    return D_0202B1C0[idx];
}

void sub_08023F94(Struct23F94 *arg0)
{
    D_03004114 = 0;
    while (arg0->unk0 != 0x8000) {
        if (arg0->unk0 == D_03002484) {
            arg0->unk4(D_03002AB0);
            break;
        }
        arg0++;
    }
}

u8 sub_08023ED4(s32 arg0, u16 arg1, u16 arg2)
{
    const Struct23ED4 *tbl = D_080F9000;
    u8 ret;
    while (tbl->unk0 != 0x8000) {
        if (tbl->unk0 == D_03002484) {
            ret = tbl->unk4(D_03002AB0, arg1, arg2);
            goto done;
        }
        tbl++;
    }
    ret = 0;
done:
    return ret;
}

void sub_08024080(Entity *actor)
{
    u32 zero;
    u8 *p;
    {
        u8 v = 4 | D_03002AB0[0xB8];
        zero = 0;
        D_03002AB0[0xB8] = v;
    }
    p = &D_0300488C;
    *p = zero;
    if (sub_08038458(0) != 0) {
        *p = 1;
        actor->unk68 += 2;
    }
}

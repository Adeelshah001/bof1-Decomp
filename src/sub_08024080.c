typedef struct {
    u16 unk0;
    u16 unk2;
    void (*unk4)(void *);
} Struct23F94;

typedef struct {
    u16 unk0;
    u16 unk2;
    u32 (*unk4)(void *, u16, u16);
} Struct23ED4;

extern u16 D_03004114;
extern u16 D_03002484;
extern u8 D_03002AB0[];
extern const Struct23ED4 D_080F9000[];
extern u8 D_0300488C;

u8 sub_08038458(s32);

void sub_08023F94(Struct23F94 *arg0)
{
    u16 val;
    D_03004114 = 0;
    val = arg0->unk0;
    if (val != 0x8000) {
        do {
            if (val == D_03002484) {
                arg0->unk4(D_03002AB0);
                break;
            }
            arg0++;
            val = arg0->unk0;
        } while (val != 0x8000);
    }
}

u8 sub_08023ED4(s32 arg0, u16 arg1, u16 arg2)
{
    const Struct23ED4 *tbl = D_080F9000;
    u32 ret = 0;
    while (tbl->unk0 != 0x8000) {
        if (tbl->unk0 == D_03002484) {
            ret = tbl->unk4(D_03002AB0, arg1, arg2);
            break;
        }
        tbl++;
    }
    return ret;
}

void sub_08024080(Entity *actor)
{
    u8 *p;
    D_03002AB0[0xB8] |= 4;
    p = &D_0300488C;
    *p = 0;
    if (sub_08038458(0) != 0) {
        *p = 1;
        actor->unk68 += 2;
    }
}

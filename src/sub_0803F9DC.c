typedef struct AnimObject AnimObject;
struct AnimObject {
    u8 pad00[0x22];
    u16 unk22;
    u8 pad24[0x3A - 0x24];
    u8 flags;
    u8 pad3B[0x40 - 0x3B];
    u8 unk40;
    u8 pad41[0x64 - 0x41];
    void (*update)(AnimObject *);
    u8 pad68[0x90 - 0x68];
};
extern AnimObject D_03002510[];
extern u8 D_03003FA4;
u16 sub_08037C98(void *, s32);


void sub_080446F4(void)
{
    AnimObject *pool = D_03002510;
    u8 i;
    for (i = D_03003FA4 == 10 ? 0 : 8; i <= 9; i++) {
        AnimObject *obj = &pool[i];
        obj->flags = 0;
        obj->unk22 = 0;
        obj->unk40 = 0;
        obj->update = NULL;
    }
}

void sub_08044740(void)
{
    AnimObject *pool = D_03002510;
    u8 i;
    for (i = D_03003FA4 == 10 ? 0 : 8; i <= 9; i++) {
        s32 offset = i * sizeof(AnimObject);
        AnimObject *obj = (AnimObject *)((u8 *)pool + offset);
        void (*update)(AnimObject *);
        if (obj->flags != 0) {
            update = obj->update;
            if (update != NULL)
                update((AnimObject *)((u8 *)D_03002510 + offset));
        }
    }
}

void sub_08044698(void)
{
    AnimObject *pool = D_03002510;
    u8 i;
    for (i = D_03003FA4 == 10 ? 0 : 8; i <= 9; i++) {
        AnimObject *obj = &pool[i];
        u8 flags = obj->flags;
        if (flags && !(flags & 0x10) && obj->unk22)
            sub_08037C98(obj, 0);
    }
}

u8 sub_0803F9DC(const u16 *table, u8 index, u8 *valid)
{
    u16 entry;
    u8 value = 0;
    *valid = value;
    entry = table[index];
    if ((entry >> 8) & 0xF) {
        *valid = 1;
        value = entry;
    }
    return value;
}

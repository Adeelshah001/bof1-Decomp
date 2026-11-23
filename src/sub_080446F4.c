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
        u32 offset = i * sizeof(AnimObject);
        AnimObject *obj = (AnimObject *)(offset + (u32)pool);
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
        AnimObject *obj = (AnimObject *)(offset + (u32)pool);
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
        u32 offset = i * sizeof(AnimObject);
        AnimObject *obj = (AnimObject *)(offset + (u32)pool);
        u8 flags = obj->flags;
        if (flags != 0) {
            u32 paused = 0x10;
            paused &= flags;
            if (paused == 0 && obj->unk22 != 0)
                sub_08037C98(obj, 0);
        }
    }
}

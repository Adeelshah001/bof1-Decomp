typedef struct {
    u32 unk00;
    u32 unk04;
    u32 unk08;
    s16 unk0C;
    u16 unk0E;
    u32 unk10;
    u32 unk14;
    u32 unk18;
    u8 pad1C[0x30 - 0x1C];
    u32 unk30;
    u32 unk34;
    u8 pad38[0x44 - 0x38];
    u32 unk44;
    u32 unk48;
    u8 pad4C[0x54 - 0x4C];
    void *unk54;
} Pool;

typedef struct PoolNode {
    struct PoolNode *unk00;
    s32 unk04;
    Pool *unk08;
} PoolNode;

typedef struct {
    s32 unk00;
    u8 pad04[0x38 - 0x04];
    u32 unk38;
    u8 pad3C[0x1D8 - 0x3C];
    PoolNode unk1D8;
} Obj;

void *sub_080A2C88(Obj *arg0, s32 arg1);
void sub_080A2D4C(Obj *arg0);

Pool *sub_080A2CB8(Obj *arg0) {
    PoolNode *node;
    Pool *pool;
    s32 i;
    s16 temp;

    if (arg0->unk38 == 0) {
        sub_080A2D4C(arg0);
    }
    node = (PoolNode *)((u8 *)arg0 + 0x1D8);
    for (;;) {
        pool = node->unk08;
        i = node->unk04;
        while (--i >= 0) {
            temp = pool->unk0C;
            if (temp == 0) {
                pool->unk0C = 1;
                pool->unk00 = 0;
                pool->unk08 = 0;
                pool->unk04 = 0;
                pool->unk10 = 0;
                pool->unk14 = 0;
                pool->unk18 = 0;
                pool->unk0E = 0xFFFF;
                pool->unk30 = 0;
                pool->unk34 = 0;
                pool->unk44 = 0;
                pool->unk48 = 0;
                pool->unk54 = arg0;
                return pool;
            }
            pool = (Pool *)((u8 *)pool + 0x58);
        }
        if (node->unk00 == NULL) {
            node->unk00 = sub_080A2C88(arg0, 4);
            if (node->unk00 == NULL) {
                arg0->unk00 = 0xC;
                return NULL;
            }
        }
        node = node->unk00;
    }
}

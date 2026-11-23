extern u8 D_030023E0[];
extern u8 D_06010000[];
extern u8 (* const D_080F47F8[])(void);

u8 sub_080021E4(s32);

typedef struct {
    u8 pad00[0x1E];
    u16 unk1E;
    u16 unk20;
    u16 unk22;
    u16 unk24;
    u8 pad26[0x2A - 0x26];
    u8 unk2A;
    u8 unk2B;
    u8 pad2C[0x31 - 0x2C];
    s8 unk31;
    u8 pad32[0x44 - 0x32];
    u8 unk44;
    u8 pad45[0x4E - 0x45];
    u8 unk4E;
    u8 unk4F;
} Struct4830;

typedef struct {
    u8 pad00[0x4C];
    u8 unk4C;
} Struct23E0;

typedef struct {
    u32 vramOffset;
    s32 stride;
    s32 count;
    u32 src;
} StructF49C8;

extern const StructF49C8 D_080F49C8[];

typedef struct {
    vu32 src;
    vu32 dst;
    vu32 cnt;
} DmaChannel;

void sub_0800359C(void) {
    Struct4830 *s = (Struct4830 *)D_03004830;

    s->unk2A = 0;
    s->unk2B = 0x10;
    if (s->unk31 != 0) {
        s->unk2B = 0;
    }
}

void sub_08003528(u8 arg0, u8 arg1, u16 arg2, u16 arg3, u8 arg4) {
    Struct4830 *s = (Struct4830 *)D_03004830;

    s->unk1E = arg2;
    s->unk20 = arg3;
    s->unk4E = arg0;
    s->unk4F = arg1;
    if (arg4 == 0) {
        s->unk22 = arg2;
        s->unk24 = arg3;
    }
    if (arg4 == 2) {
        s->unk44 = 2;
    } else {
        s->unk44 = 1;
    }
    ((Struct23E0 *)D_030023E0)->unk4C = 0xFE;
}

void sub_080034C8(s32 arg0) {
    u32 src = D_080F49C8[arg0].src;
    u32 dst = D_080F49C8[arg0].vramOffset + (u32)D_06010000;
    s32 step = D_080F49C8[arg0].stride << 5;
    s32 i;

    for (i = 0; i < D_080F49C8[arg0].count; i++) {
        volatile DmaChannel *dma = (volatile DmaChannel *)0x040000D4;
        vu32 dummy;
        dma->src = src;
        dma->dst = dst;
        dma->cnt = (step >> 1) | 0x80000000;
        dummy = dma->cnt;
        src += step;
        dst += 0x400;
    }
}

u8 sub_08003484(u8 arg0) {
    u8 res = sub_080021E4(5);

    if (!(res & 2) || (res & 1)) {
        return res;
    }
    return D_080F47F8[arg0 & 3]();
}

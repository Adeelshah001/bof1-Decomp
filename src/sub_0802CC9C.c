extern u8 D_030040E4;
extern u8 D_030045B0[];
extern const u8 D_080A6382[];
extern u8 D_03002AB0[];
extern u8 D_0300169C;

void sub_080A0AC8(void *, s32, s32);
void sub_080A0A68(void *, const void *, s32);
void sub_08037B84(void *, u8);
void sub_0802BCFC(void);

typedef struct {
    u8 pad00[0x61];
    u8 unk61;
} StructCDC4;

u32 sub_0802CDC4(StructCDC4 *arg0)
{
    u8 dir = arg0->unk61;

    if (D_030040E4 != 0) {
        dir = (u8)((D_030045B0[0x25] >> 4) + dir) & 3;
    }
    return dir;
}

void sub_0802CCEC(void *arg0)
{
    u8 sp0[4];
    u8 sp4[8];
    u8 *p = sp0;
    u8 idx;

    sub_080A0AC8(p, 0, 4);
    p[1] = 1;
    sub_080A0A68(sp4, D_080A6382, 8);
    idx = sub_0802CDC4(arg0);
    *(u8 *)((u8 *)arg0 + 0x40) = p[idx];
    if (*(u8 *)((u8 *)arg0 + 0xBA) & 9) {
        idx += 4;
    }
    sub_08037B84(arg0, sp4[idx]);
}

typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
    u8 padB9[0xCC - 0xB9];
    void (*unkCC)(void);
} Struct2AB0_CC9C;

typedef struct {
    u8 pad00[0x08];
    u32 unk8;
    u32 unkC;
} StructCC9C;

void sub_0802CC9C(StructCC9C *arg0)
{
    Struct2AB0_CC9C *s = (Struct2AB0_CC9C *)D_03002AB0;

    s->unkB8 &= 0xFE;
    if (D_0300169C == 0) {
        s->unkCC = sub_0802BCFC;
    }
    arg0->unk8 = 0;
    arg0->unkC = 0;
}

typedef struct StructCF40 StructCF40;
typedef void (*CallbackCF40)(StructCF40 *);
struct StructCF40 {
    u8 pad00[0x4C];
    u8 unk4C;
    u8 pad4D[0x90 - 0x4D];
    u32 unk90;
    u8 pad94[0xBD - 0x94];
    u8 unkBD;
    u8 padBE;
    u8 unkBF;
};

extern CallbackCF40 const D_080FA260[];

void sub_0802CF40(StructCF40 *actor)
{
    u8 timer;

    D_080FA260[(actor->unk4C & 0x7F) >> 1](actor);
    if (actor->unkBD != 0) {
        actor->unkBD--;
    }
    if (actor->unkBF != 0) {
        timer = --actor->unkBF;
        if (timer == 0) {
            actor->unk90 = timer;
        }
    }
}

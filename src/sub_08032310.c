extern u16 D_03004114;
extern u8 D_030016E0[];

void sub_08056B0C(void *, s32);
void sub_08032A78(void *, s32);
void sub_0803257C(void *);
void sub_0803043C(void *, s32);

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
} Struct32;

typedef struct {
    u8 pad00[0x06];
    u16 unk6;
} Struct16E0;

typedef struct {
    u8 pad00[0xEC];
    u16 unkEC;
    u16 unkEE;
    u8 padF0;
    u8 unkF1;
    u8 padF2[2];
    u16 unkF4;
    u16 unkF6;
    u8 padF8[0x116 - 0xF8];
    u16 unk116;
} Struct324E4;

s32 sub_080322E8(void *arg0, Entity *actor)
{
    s32 result = 0;

    sub_08056C18(5);
    sub_08032A78(arg0, 0x8789);
    actor->unk3A = result;
    return result;
}

s32 sub_08032310(Struct32 *arg0, Entity *actor)
{
    s32 result = 0;

    if (arg0->unk3C == 4) {
        sub_08032A78(arg0, 0x830A);
    } else {
        sub_08056B0C(arg0, 0xA);
        sub_08032A78(arg0, 0x878A);
        actor->unk3A = result;
    }
    return result;
}

u8 sub_08032494(Struct32 *arg0, s32 arg1)
{
    u8 ret = 0;

    D_03004114 = 0;
    if (((Struct16E0 *)D_030016E0)->unk6 & 1) {
        u8 val = arg0->unk3C;
        if (val == 1) {
            sub_0803257C(arg0);
        } else if (val == 5) {
            sub_0803043C(arg0, arg1);
        }
        ret = D_03004114;
    }
    return ret;
}

void sub_080324E4(Struct324E4 *arg0)
{
    if ((arg0->unk116 == 0x211D || arg0->unkEC == 0x2141 || arg0->unkEE == 0x2141) && !(arg0->unkF1 & 0x80)) {
        s32 next = arg0->unkF6 + 1;
        if (next > arg0->unkF4) {
            next = arg0->unkF4;
        }
        arg0->unkF6 = next;
    }
}

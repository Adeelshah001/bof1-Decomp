void sub_080017EC(s32 flag);

typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State03002AB0;

typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;

typedef struct {
    u8 pad00[6];
    u16 unk6;
    u8 pad08[2];
    u16 unkA;
} State0202DBD0;

extern State03002AB0 D_03002AB0;
extern State03004F50 D_03004F50;
extern State0202DBD0 D_0202DBD0;
extern u8 D_03004584;
extern void (*const D_08151EE8[])(u8);

void sub_0807E674(s32 arg0)
{
    if ((u8)arg0 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

void sub_0807E80C(s32 arg0)
{
    if ((u8)arg0 != 0) {
        sub_080017EC(0x72);
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    }
}

void sub_0807E86C(s32 arg0)
{
    if ((u8)arg0 != 0) {
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_0202DBD0.unk6 = 0xD98;
        D_0202DBD0.unkA = 0x5C8C;
        sub_080017EC(0x8A);
    }
}

void sub_0807E464(s32 arg0)
{
    if ((u8)arg0 != 0) {
        s8 idx = ((s8 *)D_03004830)[0x31];
        if (!(idx & 0x80)) {
            D_08151EE8[idx](D_03004F50.unk5B);
        }
    }
}

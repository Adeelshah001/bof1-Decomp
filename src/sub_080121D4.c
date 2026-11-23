typedef struct {
    u8 pad00[0x2A];
    u8 mode;
    u8 tick;
} Ctl;

typedef struct {
    u8 pad00[2];
    u16 posX;
    u8 pad04[2];
    u16 posY;
    u8 pad08[0x3E];
    u16 posX2;
    u16 posY2;
    u8 pad4C[0x1C];
    u32 unk68;
} MoveEnt;

typedef struct {
    u8 pad00[0xB8];
    u8 flags;
} ObjFlags;

extern u8 D_03004448[];
extern ObjFlags D_03002AB0;
extern u16 D_03004114;

void sub_080017EC(s32);
void sub_0805561C(s32);
void sub_080550B0(void *arg0, u16 a, u16 b, s32 c);

void sub_080121D4(Entity *arg0) {
    Ctl *control = (Ctl *)D_03004830;
    u8 *mode = &control->mode;
    u8 v = 4;

    *mode = v;
    control->tick = v;
    *(Entity **)D_03004448 = arg0;
    arg0->unk68 += 2;
}

void sub_080121F8(Entity *arg0) {
    Ctl *control = (Ctl *)D_03004830;
    u8 *mode = &control->mode;
    u8 zero = 0;

    *mode = 5;
    control->tick = zero;
    sub_080017EC(0x6C);
    sub_0805561C(0xA);
    arg0->unk68 += 2;
}

void sub_080122AC(MoveEnt *arg0) {
    sub_080550B0(arg0, arg0->posX, arg0->posY, 4);
    arg0->posX = 0xD88;
    arg0->posX2 = 0xD88;
    arg0->posY = 0x6999;
    arg0->posY2 = 0x6999;
    arg0->unk68 += 2;
}

void sub_08012694(u8 arg0) {
    Ctl *control = (Ctl *)D_03004830;
    u8 *mode = &control->mode;
    u8 zero = 0;

    *mode = arg0;
    control->tick = zero;
    D_03002AB0.flags |= 4;
    D_03004114 = zero;
}

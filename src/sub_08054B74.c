void sub_0803A8EC(void *);
void sub_08037FC4(void *, s32);
void sub_08054AB0(Entity *);
void sub_08054DDC(void);
void sub_080546E8(void *);
void sub_0805514C(void *, u8 *);
void sub_08055198(void *, u8 *);

typedef struct {
    u8 pad00[0x94];
    Entity *unk94;
} Global2AB0;

extern u8 D_030045B0[];
extern Global2AB0 D_03002AB0;

void sub_08054B74(Entity *arg0) {
    arg0->unk78 = (u32)sub_08054AB0;
    arg0->unk54 = 1;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x44) = 0;
    *(s16 *)((u8 *)arg0 + 0x16) = 4;
    *(s16 *)((u8 *)arg0 + 0x14) = 0;
    *(u32 *)((u8 *)arg0 + 0x48) = (*(u32 *)((u8 *)arg0 + 0x48) & 0xFF000000) | 0x3000;
    sub_0803A8EC(arg0);
}

void sub_08054B08(Entity *arg0) {
    if ((D_030045B0[0x2C] & 0x80) && (D_03002AB0.unk94 == arg0)) {
        sub_08037FC4(arg0, 2);
        arg0->unk78 = (u32)sub_08054DDC;
    }
    sub_0803A8EC(arg0);
}

typedef struct {
    u8 pad00[0x46];
    u16 unk46_0 : 8;
    u16 unk46_8 : 8;
    u8 pad48[0x4A - 0x48];
    u8 unk4A;
} Entity46;

void sub_08054ED8(Entity46 *arg0) {
    Entity46 *e = arg0;
    u8 sp0 = 0;
    u8 tmp = arg0->unk4A;
    if (tmp != 0) {
        if (tmp >= arg0->unk46_0) {
            sub_0805514C(arg0, &sp0);
        } else {
            sub_08055198(arg0, &sp0);
        }
    } else if (arg0->unk46_0) {
        sub_08055198(arg0, &sp0);
    } else {
        sub_080546E8(e);
    }
}

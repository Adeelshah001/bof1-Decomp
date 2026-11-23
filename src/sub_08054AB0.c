void sub_0803A8EC(void *);
void sub_08037FC4(void *, s32);
void sub_080470B4(void);
void sub_08054AB0(Entity *);
void sub_08054460(void);
void sub_08054DDC(void);
void sub_080546E8(void *);
void sub_0805514C(void *, u8 *);
void sub_08055198(void *, u8 *);

extern u8 D_03002AB0[];
extern u8 D_030045B0[];

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
    if ((D_030045B0[0x2C] & 0x80) && (*(Entity **)(D_03002AB0 + 0x94) == arg0)) {
        sub_08037FC4(arg0, 2);
        arg0->unk78 = (u32)sub_08054DDC;
    }
    sub_0803A8EC(arg0);
}

void sub_08054AB0(Entity *arg0) {
    u16 unk2C;

    sub_080470B4();
    unk2C = arg0->unk2C;
    if (unk2C < arg0->unk6) {
        arg0->unk6 = unk2C;
        if (--arg0->unk54 == 0) {
            arg0->unk78 = (u32)sub_08054460;
        } else {
            *(s32 *)((u8 *)arg0 + 0x10) = 0;
            *(s32 *)((u8 *)arg0 + 0x44) = 0;
            *(s16 *)((u8 *)arg0 + 0x16) = 4;
            *(s16 *)((u8 *)arg0 + 0x14) = 0;
            *(u32 *)((u8 *)arg0 + 0x48) = (*(u32 *)((u8 *)arg0 + 0x48) & 0xFF000000) | 0x3000;
        }
    }
    sub_0803A8EC(arg0);
}

void sub_08054ED8(Entity *arg0) {
    Entity *e = arg0;
    u8 sp0 = 0;
    u8 tmp = arg0->pad42[0x4A - 0x42];
    if (tmp != 0) {
        if (tmp >= (*(u16 *)((u8 *)arg0 + 0x46) & 0xFF)) {
            sub_0805514C(arg0, &sp0);
        } else {
            sub_08055198(arg0, &sp0);
        }
    } else if (*(u16 *)((u8 *)arg0 + 0x46) & 0xFF) {
        sub_08055198(arg0, &sp0);
    } else {
        sub_080546E8(e);
    }
}

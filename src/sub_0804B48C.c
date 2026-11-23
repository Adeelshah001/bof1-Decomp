extern const u8 D_080A6688[];
extern u8 D_03002AB0[];

void sub_080379D4(s32);
u16 sub_08037C98(void *, s32);
void sub_08037FC4(void *, u8);
void sub_0803A8EC(void *);
void sub_080A0A68(void *, const void *, u32);

void sub_0804B3E4(Entity *);
void sub_0804B444(Entity *);
void sub_0804B4E0(Entity *);
void sub_0804B540(Entity *);

void sub_0804B468(Entity *arg0) {
    u16 v;
    u8 *p;
    v = 0x104;
    arg0->unk2A = v;
    v += 0x9C;
    arg0->unk1C = v;
    p = &arg0->unk41;
    p[0] = 0xA;
    p[-4] = 2;
    sub_0804B3E4(arg0);
}

void sub_0804B48C(Entity *arg0) {
    Entity *e = arg0;
    u8 *p = &arg0->unk54;

    if (--(*p) == 0) {
        sub_080379D4(0x10);
        *p = 0x28;
    }
    sub_08037C98(arg0, 0);
    if (--((u8 *)arg0)[0x55] == 0) {
        arg0->unk64 = (u32)&sub_0804B4E0;
        sub_08037FC4(arg0, 6);
    }
    sub_0803A8EC(e);
}

void sub_0804B4E0(Entity *arg0) {
    Entity *e = arg0;
    u8 *p = &arg0->unk54;

    if (--(*p) == 0) {
        sub_080379D4(0x10);
        *p = 0x28;
    }
    if (sub_08037C98(arg0, 1) == 0) {
        ((u8 *)arg0)[0x61] = 0;
        *(u16 *)((u8 *)arg0 + 0xBE) = 0x20;
        *(u16 *)p = 0x409;
        arg0->unk64 = (u32)&sub_0804B540;
        sub_08037FC4(arg0, 0);
    }
    sub_0803A8EC(e);
}

void sub_0804B3E4(Entity *arg0) {
    u8 dirs[4];
    u8 *src;
    u16 y;

    sub_080A0A68(dirs, D_080A6688, 4);
    src = D_03002AB0;
    ((u8 *)arg0)[0x40] = src[0x40];
    ((u8 *)arg0)[0x61] = src[0x61];
    sub_08037FC4(arg0, dirs[((u8 *)arg0)[0x61]]);
    *(u16 *)((u8 *)arg0 + 2) = *(u16 *)(src + 2);
    y = *(u16 *)(src + 6);
    arg0->unk6 = y;
    arg0->unk2C = y;
    arg0->unk64 = (u32)&sub_0804B444;
    sub_0803A8EC(arg0);
}

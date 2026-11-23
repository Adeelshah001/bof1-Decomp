extern u8 D_0300457C;

void sub_080744C8(u8 *);
void sub_0806B028(Entity *, u16);
u16 sub_080734EC(Entity *);
void sub_08073FF0(void);
void sub_0807462C(void);
void sub_0806E090(void *);
void sub_08084EDC(Entity *, s32);

void sub_080744B8(u8 *arg0, u8 arg1) {
    arg0[2] = arg1;
    arg0[3] = 0;
    sub_080744C8(arg0);
}

void sub_08074520(s32 arg0, Entity *arg1, u8 arg2) {
    D_0300457C = arg2;
    sub_0806B028(arg1, 0);
}

void sub_08074538(s32 arg0, Entity *arg1) {
    u16 temp;

    if (arg1->unk3B <= 3) {
        temp = sub_080734EC(arg1);
        D_0300457C = 0xE;
        sub_0806B028(arg1, temp);
        sub_08073FF0();
    }
}

void sub_080745A4(void *arg0) {
    Entity *e = *(Entity **)((u8 *)arg0 + 0x54);
    u16 temp;

    if (e->unk3B <= 3) {
        temp = sub_080734EC(e);
        D_0300457C = 0x15;
        sub_0806B028(e, temp);
        sub_08084EDC(e, 0);
    }
    sub_0807462C();
    sub_0806E090(arg0);
}

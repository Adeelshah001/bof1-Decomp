extern u8 D_03004F50[];
void sub_080869CC(u8 *);
u8 *sub_0807C638(u8 *, s32);
void sub_08083484(u8 *);
void sub_08087024(u8 *);
void sub_08087030(u8 *, s32);
void sub_0807B248(u8 *);

void sub_08086E6C(Entity *arg0) {
    u8 *p;
    sub_080869CC((u8 *)arg0);
    p = sub_0807C638((u8 *)arg0, 3);
    p[0x3C] = 3;
    *(u8 *)((u8 *)arg0 + 0x55) = 0;
}

void sub_08086E90(Entity *arg0) {
    if (--arg0->unk54 != 0) {
        if (!(arg0->unk54 & 1)) {
            sub_08087024((u8 *)arg0);
        } else {
            sub_08087030((u8 *)arg0, 0xE);
        }
    } else {
        sub_08083484((u8 *)arg0);
        arg0->unk4D = 6;
        sub_08087024((u8 *)arg0);
    }
}

void sub_08086ED8(Entity *arg0) {
    u8 v = *(u8 *)(arg0->unk74 + 0x3A);
    if (v != 0) {
        sub_0807B248((u8 *)arg0);
    } else {
        D_03004F50[0x5D] = v;
        *((u8 *)arg0 + 0x4C) = 2;
        arg0->unk4D = v;
        sub_0807B248((u8 *)arg0);
    }
}

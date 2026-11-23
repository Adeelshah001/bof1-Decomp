void sub_08037FC4(u8 *, s32);
void sub_08038278(void);
void sub_0807B248(u8 *);
s32 sub_0807CDB8(u8 *);
void sub_08083BB4(u8 *);
void sub_08088BE4(u8 *, s32);
void sub_08088C04(u8 *);

typedef struct {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
} MenuC3C;

void sub_08088C3C(MenuC3C *arg0) {
    arg0->unk4C = 2;
    arg0->unk4D = 0;
    sub_08037FC4((u8 *)arg0, 2);
}

void sub_08088B98(u8 *arg0) {
    u8 v;
    u8 *p;
    sub_08038278();
    v = arg0[0xE4];
    if ((u32)(u8)(v + 8) < (u32)arg0[2]) {
        sub_08088C04(arg0);
    } else {
        arg0[2] = v;
        arg0[6] = arg0[0xE6];
        p = arg0 + 0x4D;
        *p = 0x12;
        p += 7;
        *p = 2;
        sub_08088BE4(arg0, 4);
    }
}

typedef struct {
    u8 pad[0x61];
    u8 unk61 : 8;
} Unk61;

void sub_08088B3C(u8 *arg0) {
    u32 a;
    Unk61 *s;
    sub_08038278();
    if (sub_0807CDB8(arg0) != 0) {
        a = (u8)(*(u8 *)(*(u8 **)(arg0 + 0x78) + 2) + 0x10);
        if (a >= arg0[2]) {
            sub_0807B248(arg0);
            return;
        }
    }
    sub_08083BB4(arg0);
    arg0[0x4D] = 0x10;
    s = (Unk61 *)arg0;
    s->unk61 = (s->unk61 + 0x10) & 0x1F;
    sub_08037FC4(arg0, 0x0E);
}

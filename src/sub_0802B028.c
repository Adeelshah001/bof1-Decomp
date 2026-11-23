typedef struct {
    s32 unk0;
    s32 unk4;
    u8 pad8[8];
    s32 unk10;
    s32 unk14;
    u8 pad18[0x32];
    u8 unk4A;
    u8 unk4B;
} Unk2AFAC;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad8[8];
    s32 unk10;
    s32 unk14;
} Unk2AFC0;

void sub_0802AFAC(void *arg0, Unk2AFAC *arg1) {
    arg1->unk0 += arg1->unk10;
    arg1->unk4 += arg1->unk14;
}

void sub_0802AFC0(Unk2AFC0 *arg0, Unk2AFC0 *arg1) {
    u16 *p0 = (u16 *)arg0;
    u16 *p1 = (u16 *)arg1;
    arg0->unk10 = arg1->unk10;
    arg0->unk14 = arg1->unk14;
    p0[1] = ((p1[9] + p0[1]) & 0x1F) | 0xE00;
    p0[3] = ((p1[11] + p0[3]) & 0x1F) | 0x2E00;
}

void sub_0802AFF8(Unk2AFAC *arg0, Unk2AFAC *arg1) {
    arg0->unk10 = arg1->unk10;
    arg0->unk14 = arg1->unk14;
    sub_0802AFAC(arg1, arg0);
    arg0->unk4B = arg1->unk4B;
    arg0->unk4A = arg1->unk4A;
}

void sub_0802B028(Unk2AFAC *arg0, Unk2AFAC *arg1) {
    u32 vx = (u32)arg1->unk10 >> 1;
    u32 vy = (u32)arg1->unk14 >> 1;
    if (vx & 0x40000000) {
        vx |= 0x80000000;
    }
    if (vy & 0x40000000) {
        vy |= 0x80000000;
    }
    arg0->unk0 += vx;
    arg0->unk4 += vy;
    sub_0802AFAC(arg1, arg0);
    arg0->unk4B = arg1->unk4B;
    arg0->unk4A = arg1->unk4A;
}

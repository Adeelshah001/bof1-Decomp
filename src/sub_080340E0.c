extern u8 D_0202DBD0[];
extern u8 D_03003188[];

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Unk030023E0;

extern Unk030023E0 D_030023E0;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x02];
    u16 unk6;
    u8 pad08[0x32];
    u8 unk3A;
    u8 pad3B[0x05];
    u8 unk40;
    u8 pad41[0x0B];
    union {
        struct {
            u8 unk4C_b;
            u8 unk4D_b;
            u8 unk4E_b;
            u8 unk4F_b;
            u8 unk50_b;
        } bytes;
        struct {
            u16 unk4C;
            u16 unk4E;
            u16 unk50;
        } halves;
    } u;
    u8 pad52[0x0F];
    u8 unk61;
    u8 pad62[0x0D];
    u8 unk6F;
    u8 pad70[0x18];
    u32 unk88;
} Actor34120;

void sub_0803414C(Actor34120 *arg0);
void sub_0803EE54(Actor34120 *arg0);
void sub_08040AD0(s32, void *);
void sub_080330E8(void *, void *, s32, s32);
void sub_080017EC(s32);

void sub_08034160(Actor34120 *arg0) {
    arg0->u.halves.unk4C = 0;
    arg0->u.halves.unk50 = 0;
    sub_0803414C(arg0);
}

void sub_08034120(Actor34120 *arg0, Actor34120 *arg1) {
    arg0->unk2 = arg1->unk2;
    arg0->unk6 = arg1->unk6;
    arg0->unk61 = arg1->unk6F;
    arg0->unk40 = arg1->unk40;
    sub_0803EE54(arg1);
}

void sub_080341AC(Actor34120 *arg0) {
    u16 val;
    arg0->unk3A &= 0x7F;
    arg0->u.bytes.unk4C_b = 6;
    val = D_030023E0.unkA4;
    arg0->u.bytes.unk4D_b = val;
    arg0->u.bytes.unk50_b = val >> 8;
    arg0->unk88 = 0;
    arg0->unk3A &= 0xFB;
}

void sub_080340E0(void) {
    u8 *ptr;
    D_0202DBD0[0x2BB] = 7;
    ptr = &D_0202DBD0[0x18C];
    sub_08040AD0(7, ptr);
    sub_080330E8(D_03003188, ptr, 7, 6);
    sub_080017EC(0x93);
}

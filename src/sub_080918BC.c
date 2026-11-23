typedef struct {
    u8 pad00[0x4A];
    u8 unk4A;
    u8 pad4B[0x5D - 0x4B];
    u8 unk5D;
} Global4F50;

extern Global4F50 D_03004F50;

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x40 - 0x2E];
    u8 unk40;
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    u8 unk4C;
    u8 pad4D[0x54 - 0x4D];
    u8 unk54 : 8;
    u8 unk55 : 8;
    u8 pad56[0x7D - 0x56];
    u8 unk7D;
    u8 pad7E[0xE4 - 0x7E];
    u16 unkE4;
    u16 unkE6;
} Obj91;

typedef struct {
    u8 pad00[0x41];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54 : 8;
    u8 unk55;
    u8 pad56[0x7D - 0x56];
    u8 unk7D;
} Obj90;

void sub_0809568C(Obj91 *, s32);
void sub_08096CD4(Obj91 *);
u16 sub_0807B2CC(void);
void sub_08091CD0(Obj91 *);
void sub_080379D4(s32);
void sub_08095A58(Obj91 *);
void sub_08095EFC(Obj91 *);
void sub_080908E0(Obj90 *);
void sub_08090858(Obj90 *);
void sub_0807CB08(void);
void sub_08037FC4(Obj91 *, s32);
void sub_0808D148(Obj91 *, u8);
void sub_0808E888(Obj91 *);

void sub_080918BC(Obj91 *arg0)
{
    if (--arg0->unk54 & 0x80) {
        arg0->unk54 = 4;
        if (--arg0->unk55 & 0x80) {
            D_03004F50.unk5D = 0;
            sub_08096CD4(arg0);
        } else {
            sub_0809568C(arg0, 0);
        }
    }
}

void sub_08091910(Obj91 *arg0)
{
    u16 ret = sub_0807B2CC();

    if (ret == 0) {
        sub_08091CD0(arg0);
        sub_080379D4(5);
        D_03004F50.unk5D = ret;
        arg0->unk4C++;
        if (--D_03004F50.unk4A == 0) {
            sub_08095A58(arg0);
            return;
        }
    }
    sub_08095EFC(arg0);
}

void sub_0809069C(Obj90 *arg0)
{
    if (--arg0->unk55 == 0) {
        sub_080908E0(arg0);
        if (--arg0->unk54 == 0) {
            sub_08090858(arg0);
            return;
        }
    }
    if (1 & arg0->unk54) {
        arg0->unk41 = arg0->unk7D >> 4;
    } else {
        arg0->unk41 = 0xE;
    }
}

void sub_0808CFD0(Obj91 *arg0)
{
    u8 i;

    arg0->unk40 = 0;
    sub_0807CB08();
    arg0->unk2 = 0xF3F;
    arg0->unkE4 = 0xF3F;
    arg0->unk6 = 0x2F40;
    arg0->unkE6 = 0x2F40;
    arg0->unk2C = 0x2F40;
    sub_08037FC4(arg0, 0);
    i = 6;
    do {
        sub_0808D148(arg0, i);
    } while (!(--i & 0x80));
    sub_0808E888(arg0);
}

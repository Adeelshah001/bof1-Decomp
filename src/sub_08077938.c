void sub_08002BBC(u8 arg0);

typedef struct {
    u8 pad00[0xB8];
    u8 unkB8;
} State03002AB0;

typedef struct {
    u8 pad00[0x5B];
    u8 unk5B;
} State03004F50;

typedef struct {
    u8 pad00[6];
    u16 unk6;
} State0202DBD0;

extern State03002AB0 D_03002AB0;
extern State03004F50 D_03004F50;
extern State0202DBD0 D_0202DBD0;
extern u8 D_03004584;

void sub_0807EDBC(s32 arg0) {
    if (arg0 << 0x18 != 0) {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
    } else {
        D_0202DBD0.unk6 = 0x1A68;
    }
}

extern u16 D_03001864;
void sub_08037FC4(void *, s32);
void sub_0803A8EC(void *);

void sub_08077938(Entity *actor) {
    u8 *p;
    ((u8 *)actor)[0x50] = 2;
    sub_08037FC4(actor, 0xA);
    p = (u8 *)actor + 0x54;
    *p++ = 0xF;
    *p = 4;
    if (0x80 & ((u8 *)actor)[0xF1]) {
        ((u8 *)actor)[0x2C] = 0;
    } else {
        actor->unk2C = actor->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(actor);
    }
}

typedef struct {
    u8 pad00[0x55];
    u32 unk55:8;
    u8 pad56[0xD8 - 0x56];
    u8 unkD8;
    u8 padD9[0xDC - 0xD9];
    u8 unkDC;
    u8 unkDD;
} Entity76;

void sub_0807B27C(void *);
void sub_0807B51C(void *);
void sub_0807B56C(void *);
void sub_08093640(void *);

void sub_08076734(Entity76 *actor) {
    u32 timer;
    if (!(actor->unkDC & 0x40) && !(actor->unkDD & 2)) {
        sub_0807B27C(actor);
    }
    timer = actor->unk55 - 1;
    if ((actor->unk55 = timer) & 0x80) {
        actor->unkD8++;
    }
    sub_0807B51C(actor);
}

void sub_080766DC(Entity76 *actor) {
    u32 timer;
    if (!(actor->unkDC & 0x40) && !(actor->unkDD & 2)) {
        sub_0807B27C(actor);
    }
    timer = actor->unk55 - 1;
    if ((actor->unk55 = timer) & 0x80) {
        actor->unkD8++;
        sub_08093640(actor);
    }
    sub_0807B56C(actor);
}

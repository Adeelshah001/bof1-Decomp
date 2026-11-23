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

void sub_0807EDBC(u8 arg0) {
    if (arg0 == 0) {
        D_0202DBD0.unk6 = 0x1A68;
    } else {
        D_03002AB0.unkB8 &= 0xFB;
        D_03004584 = 1;
        sub_08002BBC(D_03004F50.unk5B);
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
    if (!(actor->unkDC & 0x40)) {
        if (!(actor->unkDD & 2)) {
            sub_0807B27C(actor);
        }
    }
    timer = actor->unk55 - 1;
    if ((actor->unk55 = timer) & 0x80) {
        actor->unkD8++;
    }
    sub_0807B51C(actor);
}

void sub_080766DC(Entity76 *actor) {
    u32 timer;
    if (!(actor->unkDC & 0x40)) {
        if (!(actor->unkDD & 2)) {
            sub_0807B27C(actor);
        }
    }
    timer = actor->unk55 - 1;
    if ((actor->unk55 = timer) & 0x80) {
        actor->unkD8++;
        sub_08093640(actor);
    }
    sub_0807B56C(actor);
}

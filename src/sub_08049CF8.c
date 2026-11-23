typedef struct {
    u8 pad00[0x20];
    u16 unk20;
    u8 pad22[0x3B - 0x22];
    u8 unk3B;
    u8 pad3C[0x54 - 0x3C];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    void (*unk64)(void *);
    u8 pad68[0x80 - 0x68];
    u8 unk80;
    u8 pad81[0xC0 - 0x81];
    u8 unkC0;
    u8 unkC1;
} Entity49;

extern u8 D_03001850;

void sub_08049D80(void *);
void sub_08037FC4(Entity49 *, s32);
void sub_0803A8EC(Entity49 *);

u8 sub_08001770(s32);
void sub_0803EE6C(Entity49 *);
u8 sub_0803A508(Entity49 *);
void sub_0803A928(Entity49 *);
void sub_08037C98(Entity49 *, s32);

u8 sub_08049F34(Entity49 *, s32);
void sub_0804900C(void *);
void sub_08049C40(Entity49 *, s32, s32);

void sub_08049D50(Entity49 *arg0) {
    if (arg0->unk80 != 0) {
        void (*fn)(void *) = sub_08049D80;
        arg0->unk64 = fn;
        sub_08037FC4(arg0, 2);
        fn(arg0);
    } else {
        sub_0803A8EC(arg0);
    }
}

void sub_08049CF8(Entity49 *arg0) {
    Entity49 *e = arg0;
    if (sub_08001770(0x29) != 0) {
        sub_0803EE6C(arg0);
    } else if (sub_0803A508(e) == 0) {
        sub_0803A928(e);
    }
}

void sub_08049C48(Entity49 *arg0) {
    Entity49 *e = arg0;
    if (sub_0803A508(arg0) == 0) {
        u8 *p = &arg0->unkC0;
        if (--*p == 0) {
            arg0->unk20 = 1;
            *p = arg0->unkC1;
            sub_08037C98(arg0, 0);
        }
        sub_0803A928(e);
    }
}

void sub_08049A28(Entity49 *arg0) {
    Entity49 *e = arg0;
    if (sub_08001770(0x95) == 0 || sub_08049F34(arg0, 0x96) != 0) {
        u8 val = D_03001850;
        e->unk54 = val;
        e->unk80 = val;
        e->unk3B = 9;
        D_03001850 = val + 1;
        e->unk64 = sub_0804900C;
        sub_08049C40(e, 0xC0, 0x3E);
    }
}

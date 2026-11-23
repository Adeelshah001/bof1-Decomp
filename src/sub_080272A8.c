u8 sub_08001770(s32);
void sub_080073C8(s32);
void sub_08001888(s32);
Entity *sub_0803ED98(void);
Entity *sub_0803EDDC(u16);
void sub_080464C0(void);

extern u8 D_03002510[];
extern u8 D_030023E0[];

typedef struct {
    u8 pad00[0x02];
    u16 unk02;
    u8 pad04[0x06 - 0x04];
    u16 unk06;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
} Struct2510;

typedef struct {
    u8 pad00[0x31];
    s8 unk31;
    u8 pad32[0x42 - 0x32];
    u8 unk42;
} Struct4830;

typedef struct {
    u8 pad00[0xA0];
    u16 unkA0;
} Struct23E0;

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x64 - 0x3D];
    u32 unk64;
} EntityLocal;

void sub_080272A8(void) {
    ((Struct4830 *)D_03004830)->unk42 = 0;
    if (sub_08001770(0x96)) {
        sub_080073C8(0x34);
    }
}

void sub_080272CC(void) {
    if (sub_08001770(0x27)) {
        ((Struct2510 *)D_03002510)->unk02 = 0x5F8;
        ((Struct2510 *)D_03002510)->unk06 = 0xB458;
        ((Struct2510 *)D_03002510)->unk2C = 0xB458;
    }
}

void sub_08027280(void) {
    EntityLocal *e;

    sub_08001888(6);
    e = (EntityLocal *)sub_0803ED98();
    if (e != NULL) {
        e->unk3A = 1;
        e->unk3C = 0x10;
        e->unk3B = 1;
    }
}

void sub_080272F4(void) {
    EntityLocal *e;

    if (((Struct4830 *)D_03004830)->unk31 != 2) {
        e = (EntityLocal *)sub_0803EDDC(((Struct23E0 *)D_030023E0)->unkA0);
        e->unk3A = 1;
        e->unk3B = 0;
        e->unk64 = (u32)sub_080464C0;
        e->unk3C = 6;
    }
}

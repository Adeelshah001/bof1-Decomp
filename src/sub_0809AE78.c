extern const char D_080A7C18[];
extern const char D_080A7FF8[];

void sub_080352D0(const char *, const char *, s32, ...);
void sub_0809AF14(void *);
void sub_080998B0(void *);
void sub_0809AF3C(void *);
void sub_080381B4(void *, u16, u16);
void sub_08038264(void *);
void sub_0803EE6C(void *);
void sub_0809E52C(void);

void sub_0809E630(void)
{
    sub_0809E52C();
}

typedef struct {
    u8 pad0[8];
    s32 unk8;
    u8 padC[8];
    s16 unk14;
    s16 unk16;
    u8 pad18[2];
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
} Struct03004550;

extern Struct03004550 D_03004550;

void sub_0809B5C8(void)
{
    D_03004550.unk16 = 0x4C6;
    D_03004550.unk14 = 0x4C6;
    D_03004550.unk8 = 0x4C6;
    D_03004550.unk1A = 0;
    D_03004550.unk1B = 0;
    D_03004550.unk1C = 0x20;
}

void sub_0809AEC0(void *entity)
{
    u8 *data = entity;
    switch (data[0x4C]) {
    case 0:
        sub_0809AF14(entity);
        break;
    case 1:
        sub_080998B0(entity);
        break;
    case 2:
        sub_0809AF3C(entity);
        break;
    default:
        sub_080352D0(D_080A7FF8, D_080A7C18, 0xB15, data[0x4C]);
        break;
    }
}

typedef struct {
    u8 pad0[2];
    u8 unk2;
    u8 pad3[0x44 - 3];
    u32 unk44;
    u32 unk48;
    u8 pad4C[0x54 - 0x4C];
    u8 unk54;
    u8 unk55;
} Struct9AE78;

void sub_0809AE78(Struct9AE78 *arg0)
{
    sub_080381B4(arg0, arg0->unk44 >> 8, arg0->unk48 >> 8);
    sub_08038264(arg0);
    if ((u8)(arg0->unk2 - 3) < ((arg0->unk44 >> 8) & 0xFF)) {
        sub_0803EE6C(arg0);
        arg0->unk54 = 0;
        arg0->unk55 = 0;
    }
}

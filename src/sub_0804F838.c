typedef struct {
    u8 pad00[0x2A];
    u16 unk2A;
    u8 pad2C[0x3B - 0x2C];
    u8 unk3B;
    u8 pad3C[0x3D - 0x3C];
    u8 unk3D;
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x50 - 0x42];
    u8 unk50;
    u8 pad51[0x54 - 0x51];
    u16 unk54;
    u8 pad56[0x64 - 0x56];
    u32 unk64;
    u8 pad68[0xC9 - 0x68];
    u8 unkC9;
} EntityF;

typedef struct {
    u8 pad00[0xA4];
    u16 unkA4;
} Struct23E0;

extern u8 D_030023E0[];
extern u8 D_02019FC0[];
extern volatile u32 D_040000D4[];

void sub_080503AC(void);
void sub_0804FE90(EntityF *);
void sub_0804FDE4(EntityF *);
void sub_0805001C(void);
void sub_08037FC4(Entity *, s32);

void sub_0804F8D0(EntityF *arg0) {
    arg0->unk54 = 0;
    arg0->unkC9 = 0;
    arg0->unk64 = (u32)sub_080503AC;
}

void sub_0804F868(EntityF *arg0) {
    sub_0804FE90(arg0);
    if (((Struct23E0 *)D_030023E0)->unkA4 != 1) {
        arg0->unk54 = (6 - arg0->unk3B) << 4;
    } else {
        arg0->unk54 = 0;
    }
    sub_0804FDE4(arg0);
}

void sub_0804F838(EntityF *arg0) {
    volatile u16 zero;
    arg0->unk50++;
    zero = 0;
    D_040000D4[0] = (u32)&zero;
    D_040000D4[1] = (u32)D_02019FC0;
    D_040000D4[2] = 0x81000800;
    (void)D_040000D4[2];
}

void sub_0804FAB8(Entity *arg0) {
    arg0->unk64 = (u32)sub_0805001C;
    arg0->unk54 = 0x80;
    ((EntityF *)arg0)->unk3D = 2;
    arg0->unk2A = 0xEA;
    arg0->unk41 |= 0x30;
    sub_08037FC4(arg0, 0);
}

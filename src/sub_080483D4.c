extern void sub_0804AC0C(void);
extern void sub_0804AB80(void);
extern void sub_080482D8(void);
extern void sub_08048284(void *arg0, s32 a, s32 b, s32 c);
extern void sub_08037FC4(void *arg0, s32 a);

typedef struct {
    u8 pad000[0xA4];
    u16 unkA4;
} D030023E0Struct;
extern D030023E0Struct D_030023E0;

typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u8 pad2C[0x3B - 0x2C];
    u8 unk3B;
    u8 pad3C[0x41 - 0x3C];
    u8 unk41;
    u8 pad42[0x54 - 0x42];
    u8 unk54;
    u8 pad55[0x64 - 0x55];
    u32 unk64;
} UnkStruct;

void sub_080483D4(UnkStruct *arg0) {
    sub_080482D8();
    arg0->unk64 = (u32)&sub_0804AC0C;
    arg0->unk2A = 0xEA;
    sub_08048284(arg0, 8, 0, 1);
    sub_08037FC4(arg0, 0);
    if (arg0->unk3B != 0) {
        arg0->unk54 = 0x10;
        arg0->unk64 = (u32)&sub_0804AB80;
    }
    if (D_030023E0.unkA4 == 0x88) {
        arg0->unk1C = 0x1D0;
    }
}

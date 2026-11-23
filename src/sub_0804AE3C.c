typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x2A - 0x1E];
    u16 unk2A;
    u8 pad2C[0x3A - 0x2C];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u8 pad3E[0x50 - 0x3E];
    u8 unk50;
    u8 pad51[0x64 - 0x51];
    u32 unk64;
    u8 pad68[0xA4 - 0x68];
    u16 unkA4;
    u8 padA6[0xD4 - 0xA6];
    Entity *unkD4;
} EntityA;

extern const u8 D_0822F254[];
extern u16 D_03001864[];
extern u16 D_03002480[];
extern const u8 D_0819FAB4[];
extern const u8 D_0819FF6C[];

void sub_0804A904(void);
void sub_0804A9F0(EntityA *);
u16 sub_0804A830(EntityA *);
void sub_08037FC4(EntityA *, u16);
void sub_0804B300(EntityA *);
void sub_08028D14(void *, s32, const void *, const void *);
void sub_0803D454(u16);
void sub_080017EC(s32);
void sub_0800312C(s32, s32);

void sub_0804A9B0(EntityA *arg0) {
    void (*fn)(EntityA *);
    sub_0804A904();
    fn = sub_0804A9F0;
    arg0->unk64 = (u32)fn;
    fn(arg0);
}

void sub_0804A620(EntityA *arg0) {
    arg0->unk2A = 0xC8;
    arg0->unk3D = 2;
    arg0->unk3A |= 0x18;
    arg0->unk3B = arg0->unkD4->unk3B;
    sub_08037FC4(arg0, sub_0804A830(arg0));
    arg0->unk1C = 0x30;
    arg0->unk50 = 2;
}

void sub_0804AE3C(EntityA *arg0) {
    u8 idx = arg0->unk3B * 4;
    arg0->unkA4 = D_0822F254[idx] | (D_0822F254[idx + 1] << 8);
    sub_0804B300(arg0);
}

void sub_0804AE6C(void) {
    u16 *ptr;
    D_03001864[0] = 7;
    ptr = D_03002480;
    sub_08028D14(ptr, 0x20, D_0819FAB4, D_0819FF6C);
    sub_0803D454(ptr[2]);
    sub_080017EC(0x24);
    sub_0800312C(0x10, 8);
}

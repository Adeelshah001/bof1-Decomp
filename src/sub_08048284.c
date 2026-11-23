typedef struct {
    u8 pad00[0x1C];
    u16 unk1C;
    u8 pad1E[0x3A - 0x1E];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 unk3D;
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x64 - 0x42];
    void (*unk64)(void *);
    u8 pad68[0xE0 - 0x68];
} PoolEntity;

extern const u16 D_080A6660[];
void *sub_080A0A68(void *, const void *, u32);

void sub_08048284(PoolEntity *arg0, u8 arg1, u8 arg2, u8 arg3) {
    u16 sp[9];
    sub_080A0A68(sp, D_080A6660, sizeof(sp));
    if (arg3 != 0) {
        arg0->unk3A |= 0x10;
    }
    if (arg2 != 0) {
        arg0->unk41 = arg2;
    }
    arg0->unk1C = sp[arg1 >> 1];
    arg0->unk3D = 2;
}

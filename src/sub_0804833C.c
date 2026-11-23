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
    u8 pad3E[0x41 - 0x3E];
    u8 unk41;
    u8 pad42[0x64 - 0x42];
    void (*unk64)(void *);
    u8 pad68[0xE0 - 0x68];
} PoolEntity;

extern void (*const D_080FC848[])(void *);
extern PoolEntity gEntityPool[];
extern u16 D_03001858;
extern const u16 D_080A6660[];
void *sub_080A0A68(void *, const void *, u32);
void sub_0804B82C(void);

void sub_0804833C(void *arg0) {
    D_080FC848[((PoolEntity *)arg0)->unk3C](arg0);
}

void sub_080482EC(void) {
    PoolEntity *e = gEntityPool;
    s32 i;
    D_03001858 = 0xC;
    for (i = 0xC; i >= 0; i--, D_03001858--, e++) {
        if (e->unk3A != 0) {
            if (e->unk64 == NULL) {
                sub_0804833C(e);
                if (e->unk3A == 0) {
                    continue;
                }
            }
            e->unk64(e);
        }
    }
}

void sub_08048284(PoolEntity *arg0, u8 arg1, u8 arg2, u8 arg3) {
    u16 sp[9];
    sub_080A0A68(sp, D_080A6660, sizeof(sp));
    if (arg3 != 0) {
        arg0->unk3A |= 0x10;
    }
    if (arg2 != 0) {
        arg0->unk41 = arg2;
    }
    arg0->unk1C = sp[arg1];
    arg0->unk3D = 2;
}

void sub_0804843C(PoolEntity *arg0) {
    arg0->unk64 = (void (*)(void *))sub_0804B82C;
    arg0->unk2A = 0x140;
    sub_08048284(arg0, 0xA, 8, 0);
}

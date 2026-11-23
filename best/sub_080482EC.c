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

extern PoolEntity gEntityPool[];
extern u16 D_03001858;
extern const u16 D_080A6660[];
void *sub_080A0A68(void *, const void *, u32);
void sub_0804833C(void *);

void sub_080482EC(void) {
    PoolEntity *e = gEntityPool;
    u16 *p;
    s32 i;
    D_03001858 = 0xC;
    p = &D_03001858;
    i = 0xC;
    do {
        if (e->unk3A != 0) {
            if (e->unk64 == NULL) {
                sub_0804833C(e);
                if (e->unk3A == 0) {
                    goto next;
                }
            }
            e->unk64(e);
        }
    next:
        i--;
        (*p)--;
        e++;
    } while (i >= 0);
}

void sub_08048284(PoolEntity *arg0, s32 arg1, u8 arg2, u8 arg3) {
    u16 sp[9];
    sub_080A0A68(sp, D_080A6660, sizeof(sp));
    if (arg3 != 0) {
        arg0->unk3A |= 0x10;
    }
    if (arg2 != 0) {
        arg0->unk41 = arg2;
    }
    arg0->unk1C = sp[(u8)arg1];
    arg0->unk3D = 2;
}

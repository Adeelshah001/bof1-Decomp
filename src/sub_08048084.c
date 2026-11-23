typedef struct {
    u8 pad00[0x22];
    u16 unk22;
    u8 pad24[0x3A - 0x24];
    u8 unk3A;
    u8 pad3B[0x64 - 0x3B];
    void (*unk64)(void *);
    u8 pad68[0xE0 - 0x68];
} PoolEntity;

extern PoolEntity gEntityPool[];
extern u16 D_03001858;
void sub_08037C98(void *, s32);
void sub_0804833C(void *);

void sub_08048084(void) {
    PoolEntity *e = gEntityPool;
    s32 i;
    D_03001858 = 0xC;
    i = 0xC;
    do {
        if (e->unk3A != 0) {
            if (!(e->unk3A & 8)) {
                if (!(e->unk3A & 0x10) && e->unk22 != 0) {
                    sub_08037C98(e, 0);
                }
            } else {
                if (e->unk64 == NULL) {
                    sub_0804833C(e);
                    if (e->unk3A != 0) {
                        goto next;
                    }
                }
                e->unk64(e);
            }
        }
    next:
        i--;
        D_03001858--;
        e++;
    } while (i >= 0);
}

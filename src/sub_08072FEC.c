extern u16 D_030023D4;
extern u16 D_030040E0;
extern vu16 D_03001654;
extern vu16 D_03001684;
extern s32 D_03000F90;
extern s32 D_03000F94;

typedef struct {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x50 - 8];
} Struct23E0;

extern Struct23E0 D_030023E0[];

static inline void sync_cam(Struct23E0 *p, s32 x) {
    if (p == &D_030023E0[0]) {
        s32 y;
        vu16 *p1684;
        D_03001654 = x;
        p1684 = &D_03001684;
        y = p->unk6;
        x += D_03000F90;
        D_03001654 = x;
        y += D_03000F94;
        *p1684 = y;
    }
}

void sub_08072FEC(void) {
    Struct23E0 *p = D_030023E0;
    s32 x = D_030023D4 - 0x80;
    p->unk2 = x;
    p->unk6 = D_030040E0 - 0x78;
    sync_cam(p, x);
    p++;
    p->unk2 = 0;
    p->unk6 = 0;
    sync_cam(p, 0);
}

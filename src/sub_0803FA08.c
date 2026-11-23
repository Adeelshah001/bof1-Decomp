typedef struct {
    u16 unk0;
    u8 pad02[0x22 - 0x02];
    vu8 unk22;
    u8 pad23;
    u8 unk24;
} Struct3FC;

typedef struct {
    u16 unk0;
    u16 unk2;
} Struct23E0;

extern u8 D_030023E0[];
extern const u8 D_080A65A4[];
extern u8 D_0202DDD4[];

void sub_0803FC58(Struct3FC *);
void sub_080A0A68(void *dst, const void *src, s32 len);
u8 sub_0803FA80(void);
u8 sub_0803F9DC(void *, u8, u8 *);

void sub_0803FCF0(Struct3FC *arg0) {
    Struct23E0 *cam = (Struct23E0 *)D_030023E0;
    if (arg0->unk24 & 0x80) {
        cam = (Struct23E0 *)(D_030023E0 + 0x50);
    }
    if (arg0->unk0 < cam->unk2) {
        sub_0803FC58(arg0);
    } else {
        u8 old = arg0->unk22;
        u16 val;
        arg0->unk22 = arg0->unk0 - cam->unk2;
        val = (old << 3) + arg0->unk22;
        arg0->unk22 = old;
        if (!((u16)(val - 0x100) & 0x8000)) {
            sub_0803FC58(arg0);
        }
    }
}

void sub_0803FA54(u8 **arg0) {
    u8 sp0[4];
    sub_080A0A68(sp0, D_080A65A4, 4);
    *arg0 += sp0[(*arg0)[1] & 3];
}

s32 sub_0803FA08(u8 arg0) {
    u8 sp0;
    s32 found = 0;
    u8 count = sub_0803FA80();
    u8 i;
    for (i = 0; i < count; i++) {
        u8 val = sub_0803F9DC(D_0202DDD4, i, &sp0);
        if (sp0 != 0 && val == arg0) {
            found = 1;
            break;
        }
    }
    return found;
}

typedef struct {
    u16 unk0;
    u8 pad02[0x22 - 0x02];
    u8 unk22;
    u8 pad23;
    u8 unk24;
} Struct3FC;

typedef struct {
    u16 unk0;
    u16 unk2;
} Struct23E0;

extern u8 D_030023E0[];
extern const u8 D_080A65A4[];

void sub_0803FC58(Struct3FC *);
void sub_080A0A68(void *dst, const void *src, s32 len);

void sub_0803FA54(u8 **arg0) {
    u8 sp0[4];
    u8 *p;
    u32 idx;
    sub_080A0A68(sp0, D_080A65A4, 4);
    p = *arg0;
    idx = p[1];
    idx &= 3;
    *arg0 = p + sp0[idx];
}

void sub_0803FCF0(Struct3FC *arg0) {
    Struct3FC *e = arg0;
    Struct23E0 *cam = (Struct23E0 *)D_030023E0;
    if (arg0->unk24 & 0x80) {
        cam = (Struct23E0 *)(D_030023E0 + 0x50);
    }
    if (arg0->unk0 < cam->unk2) {
        sub_0803FC58(arg0);
    } else {
        vu8 *p = &e->unk22;
        u8 old = *p;
        u16 val;
        *p = arg0->unk0 - cam->unk2;
        val = (old << 3) + *p - 0x100;
        *p = old;
        if (!(val & 0x8000)) {
            sub_0803FC58(e);
        }
    }
}

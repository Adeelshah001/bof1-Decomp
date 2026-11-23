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

void sub_0803FC58(Struct3FC *);

void sub_0803FCF0(Struct3FC *arg0) {
    Struct3FC *e = arg0;
    Struct23E0 *cam = (Struct23E0 *)D_030023E0;
    u16 pos;
    u16 camY;
    if (arg0->unk24 & 0x80) {
        cam = (Struct23E0 *)(D_030023E0 + 0x50);
    }
    pos = arg0->unk0;
    camY = cam->unk2;
    if (pos < camY) {
        sub_0803FC58(arg0);
    } else {
        u32 diff = pos - camY;
        vu8 *p = &e->unk22;
        u8 old = *p;
        u32 val;
        *p = diff;
        val = ((old << 3) + *p) << 0x10;
        *p = old;
        if (!(((val + 0xFF000000) >> 0x10) & 0x8000)) {
            sub_0803FC58(e);
        }
    }
}

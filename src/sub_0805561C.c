typedef struct {
    u8 pad00[0x204];
    u16 unk204[0x13D];
    u8 unk47E[0x100];
} StructDBD0;

extern StructDBD0 D_0202DBD0;
extern const u8 D_080A6774[8];
void sub_080A0A68(void *, const void *, s32);

void sub_0805561C(u16 arg0) {
    u8 masks[8];
    u8 bit;
    u32 idx;
    sub_080A0A68(masks, D_080A6774, 8);
    bit = arg0 & 7;
    idx = arg0 >> 3;
    D_0202DBD0.unk47E[idx] |= masks[bit];
}

typedef struct {
    u8 pad00[0x2C];
    u16 unk2C;
    u8 pad2E[0x5C - 0x2E];
    u8 unk5C;
    u8 pad5D[0x5F - 0x5D];
    u8 unk5F;
    u8 pad60[0x64 - 0x60];
    u32 unk64;
    u8 pad68[0x6C - 0x68];
    u8 unk6C;
} Entity55;

extern u8 D_030023E0[];
u8 sub_08055660(u8);
void sub_080379D4(s32);
s32 sub_0803A8EC(void *);
void sub_0804503C(void *);

void sub_08055568(Entity55 *arg0) {
    if (sub_08055660(arg0->unk5C) != 0) {
        u16 *scene;
        arg0->unk64 = (u32)sub_0804503C;
        arg0->unk6C++;
        arg0->unk5F = 0x10;
        scene = (u16 *)(D_030023E0 + 0xA4);
        if (*scene != 0x91) {
            sub_080379D4(0x14);
        }
        if (*scene != 0x1A8) {
            arg0->unk2C += 8;
        }
    }
    sub_0803A8EC(arg0);
}

extern const u8 D_080A66C8[];
extern const u8 D_080A66C4[];
void sub_080A0AC8(void *, s32, u32);
void sub_08037FC4(void *, u8);

void sub_08054744(u8 *p) {
    u8 a[4];
    sub_080A0A68(a, D_080A66C8, 4);
    if (!(p[0x6D] & 0x20)) {
        if (p[0x6F] == 1) {
            p[0x40] = 1;
        }
        sub_08037FC4(p, a[p[0x6F]]);
    }
}

void sub_080546E8(u8 *p) {
    u8 a[4];
    u8 b[4];
    u8 v;
    sub_080A0A68(a, D_080A66C4, 4);
    sub_080A0AC8(b, 0, 4);
    b[1] = 1;
    if (p[0x3B] == 0xFE) {
        sub_08037FC4(p, 8);
        return;
    }
    v = b[p[0x6F]];
    p[0x40] = v;
    sub_08037FC4(p, a[p[0x6F]]);
}

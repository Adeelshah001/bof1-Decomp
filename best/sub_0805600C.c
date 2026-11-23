typedef struct {
    u8 pad00[0x204];
    u16 unk204[0x13D];
    u8 unk47E[0x100];
} StructDBD0;

extern StructDBD0 D_0202DBD0;
extern const u8 D_080A6774[8];

void sub_0803EE6C(void *);
void sub_08055B54(void *);
void sub_08037FC4(void *, s32);
void sub_080A0A68(void *, const void *, s32);

typedef struct {
    u8 pad00[0x02];
    u16 unk2;
    u8 pad04[0x3B - 0x04];
    u8 unk3B;
    u8 pad3C[0x46 - 0x3C];
    u16 unk46;
    u8 pad48[0x64 - 0x48];
    u32 unk64;
} Entity55;

void sub_080556A8(Entity55 *arg0) {
    if (arg0->unk3B == 4) {
        arg0->unk2 += 0xD;
    } else if (arg0->unk3B == 2) {
        sub_0803EE6C(arg0);
        return;
    } else {
        arg0->unk2 -= 0xD;
    }
    arg0->unk46 = arg0->unk2;
    arg0->unk64 = (u32)sub_08055B54;
    sub_08037FC4(arg0, (arg0->unk3B & 0xF) * 2);
}

u32 sub_08055660(u16 arg0) {
    u8 masks[8];
    u8 bit;
    sub_080A0A68(masks, D_080A6774, 8);
    bit = arg0 & 7;
    return (D_0202DBD0.unk47E[arg0 >> 3] & masks[bit]) != 0;
}

s32 sub_0805600C(s32 arg0) {
    u8 *base = (u8 *)&D_0202DBD0;
    u16 *p = (u16 *)(base + 0x204) + arg0;
    u16 val = *p;
    u8 count = (val >> 8) & 0xF;
    u16 rest = val & 0xF0FF;
    count--;
    if (count != 0) {
        *p = rest | (count << 8);
    } else {
        *p = count;
    }
    return 0x7FFFFFFF;
}

extern u8 D_0202DBD0[];
extern u8 D_03002AB0[];
extern const u8 D_080A6774[8];

void sub_0803EE6C(void *);
void sub_08055B54(void *);
void sub_08037FC4(void *, s32);
void sub_080A0A68(void *, const void *, s32);

s32 sub_0805600C(s32 arg0) {
    u16 *p = (u16 *)(D_0202DBD0 + 0x204) + arg0;
    u16 val = *p;
    u8 count = ((val >> 8) & 0xF) - 1;
    if (count != 0) {
        *p = (val & 0xF0FF) | (count << 8);
    } else {
        *p = count;
    }
    return 0x7FFFFFFF;
}

typedef struct {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0xF0 - 0x3B];
    u8 unkF0;
    u8 padF1[0xF6 - 0xF1];
    u16 unkF6;
    u8 padF8[0xFA - 0xF8];
    u16 unkFA;
    u8 padFC[0x124 - 0xFC];
} Struct2AB0;

void sub_08055EB4(void) {
    u8 i = 0;
    do {
        Struct2AB0 *s = &((Struct2AB0 *)D_03002AB0)[i];
        if (s->unk3A != 0 && !(s->unkF0 & 0x40)) {
            if (s->unkF6 != 0) {
                s->unkF6 = 1;
            }
            if (s->unkFA != 0) {
                s->unkFA = 1;
            }
        }
        i++;
    } while (i <= 7);
}

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
    u32 val;
    if (arg0->unk3B == 4) {
        val = arg0->unk2 + 0xD;
    } else if (arg0->unk3B == 2) {
        sub_0803EE6C(arg0);
        return;
    } else {
        val = arg0->unk2 - 0xD;
    }
    arg0->unk2 = val;
    arg0->unk46 = arg0->unk2;
    arg0->unk64 = (u32)sub_08055B54;
    sub_08037FC4(arg0, (arg0->unk3B & 0xF) * 2);
}

u32 sub_08055660(u16 arg0) {
    u8 masks[8];
    sub_080A0A68(masks, D_080A6774, 8);
    return (masks[arg0 & 7] & *(D_0202DBD0 + 0x47E + (arg0 >> 3))) != 0;
}

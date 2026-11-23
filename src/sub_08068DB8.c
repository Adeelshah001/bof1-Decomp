extern u8 D_03004620[];
extern const u32 D_0814C304[];
void sub_08067C50(s32, s32);

typedef struct {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0xE8 - 0x3C];
    u8 unkE8[0x30];
    u8 pad118[0x124 - 0x118];
} Unk2AB0_68;

extern Unk2AB0_68 D_03002AB0[];
extern u8 D_0202DBF4[][0x3C];
void sub_08083EF0(Unk2AB0_68 *, s32);
void sub_0805DA14(Unk2AB0_68 *);

extern u16 D_02024650[];
typedef struct {
    u8 unk0;
    u8 pad1[7];
    u16 *unk8;
} Unk4790;
extern Unk4790 D_03004790[];

extern u8 D_030016E0[];
extern u32 D_03001694;
extern const u32 D_0814BEB0[];
void sub_08039514(void);
void sub_08003218(void);
void sub_08000248(s32);

s32 sub_08068F44(void) {
    ((void (*)(void))D_0814C304[D_03004620[3]])();
    sub_08067C50(0x7C, 0x25C);
    return 0;
}

void sub_08068FEC(void) {
    s32 i;
    u8 j;
    for (i = 0; i <= 7; i++) {
        Unk2AB0_68 *ent = &D_03002AB0[i];
        sub_08083EF0(ent, 0x63);
        sub_0805DA14(ent);
        for (j = 0; j < 0x30; j++) {
            D_0202DBF4[ent->unk3B][j] = ent->unkE8[j];
        }
    }
}

void sub_08069088(void) {
    u32 i;
    u16 *p;
    s32 cnt;
    u16 *src;
    Unk4790 *dst;

    for (i = 0; i <= 0xD7; i++) {
        D_03004620[i] = 0;
    }

    p = D_02024650;
    cnt = 0x2400;
    do {
        *p++ = 0x8100;
        cnt--;
    } while (cnt != 0);

    src = D_02024650;
    dst = D_03004790;
    for (cnt = 8; cnt >= 0; cnt--) {
        dst->unk0 = 0;
        dst->unk8 = src;
        src += 0x400;
        dst++;
    }
}

s32 sub_08068DB8(void) {
    u8 *p = D_030016E0 + D_030016E0[1] * 0xC + 0xB;
    *p = 0;
    D_03001694 |= 0x80;
    while (((u8 (*)(void))D_0814BEB0[*p])() != 0) {
        sub_08039514();
        sub_08003218();
        sub_08000248(1);
    }
    return 0;
}

typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
} Unk2AB0_73;

extern u8 D_03002AB0[];
extern const u8 D_08150BA6[];

typedef struct {
    u8 pad00[0x5D];
    u8 unk5D;
    u8 pad5E[0x63 - 0x5E];
    u8 unk63;
} Unk73FC4;

typedef struct {
    u8 pad00[0x58];
    u8 unk58;
} Unk741B4_0;

typedef struct {
    u8 pad00[0xE0];
    u8 unkE0;
    u8 padE1;
    u8 unkE2;
    u8 padE3[0xF0 - 0xE3];
    u8 unkF0;
    u8 padF1[0x112 - 0xF1];
    u8 unk112;
} Unk741B4_1;

void sub_0806DE8C(Unk741B4_0 *, Unk741B4_1 *, s32);

extern const u16 D_082D5C64[];
extern u16 D_06011280[];

void sub_08073FC4(Unk73FC4 *arg0) {
    u32 off = arg0->unk63 * 0x124;
    Unk2AB0_73 *p = (Unk2AB0_73 *)(off + (u32)D_03002AB0);
    const u8 *tbl = D_08150BA6 + 1;
    arg0->unk5D = tbl[p->unk3C];
}

void sub_080741B4(Unk741B4_0 *arg0, Unk741B4_1 *arg1) {
    s32 v;
    arg0->unk58 = 0;
    v = arg1->unkF0;
    v &= 0x28;
    if (v == 0 && ((v = arg1->unkE0) == 2 || v == 0x14) && arg1->unk112 >= 0x5D) {
        sub_0806DE8C(arg0, arg1, 0);
    } else {
        v = arg1->unkE2;
        v &= 0xF;
        sub_0806DE8C(arg0, arg1, v * 2);
    }
}

void sub_08073A60(void) {
    const u16 *src = D_082D5C64;
    u16 *dst = D_06011280;
    s32 i = 0;
    do {
        u16 *row = dst;
        s32 j = 0;
        dst += 0x200;
        while (j < 10) {
            s32 k;
            for (k = 0; k < 16; k++) {
                *row++ = *src++;
            }
            j++;
        }
        i--;
    } while (i != -1);
}

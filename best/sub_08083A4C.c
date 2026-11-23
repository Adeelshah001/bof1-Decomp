typedef struct {
    u8 pad00[0x0E];
    u16 unk0E;
} Unk03004F30;

extern Unk03004F30 D_03004F30;

typedef struct {
    u8 pad00[0x3B];
    vu8 unk3B;
    u8 unk3C;
    u8 pad3D[0x51 - 0x3D];
    u8 unk51;
    u8 pad52[0x7D - 0x52];
    u8 unk7D;
    u8 pad7E[0xE0 - 0x7E];
    u8 unkE0;
    u8 padE1;
    u8 unkE2;
    u8 padE3[0xF0 - 0xE3];
    u8 unkF0;
    u8 padF1[0x124 - 0xF1];
} Actor83A4C;

extern Actor83A4C D_03002AB0[];

void sub_08083A4C(void) {
    Actor83A4C *p;
    s32 i;
    u8 flags;

    if (D_03004F30.unk0E & 0x8000) {
        p = D_03002AB0;
        i = 7;
        do {
            if (p->unk3C != 0) {
                flags = p->unkF0;
                if (flags & 0x10) {
                    p->unkF0 = flags & ~0x10;
                    p->unkE0 = 2;
                    p->unkE2 = 0;
                    p->unk7D &= 0xF0;
                } else {
                    p->unkF0 = flags | 0x10;
                    p->unk51 = 6;
                }
                p->unk3B;
            }
            p++;
        } while (--i >= 0);
    }
}

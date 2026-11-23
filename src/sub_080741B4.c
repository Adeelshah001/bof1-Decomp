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

void sub_080741B4(Unk741B4_0 *arg0, Unk741B4_1 *arg1) {
    u8 v;
    arg0->unk58 = 0;
    v = arg1->unkF0;
    v &= 0x28;
    if (v == 0) {
        v = arg1->unkE0;
        if (v == 2 || v == 0x14) {
            v = arg1->unk112;
            if (v > 0x5C) {
                sub_0806DE8C(arg0, arg1, 0);
                return;
            }
        }
    }
    v = arg1->unkE2;
    v &= 0xF;
    sub_0806DE8C(arg0, arg1, v * 2);
}

static inline void copy_rect(const u16 *src, u16 *dst, s32 rows, s32 cols) {
    s32 i = rows - 1;
    do {
        u16 *row = dst;
        s32 j = 0;
        dst += 0x200;
        while (j < cols) {
            s32 k;
            for (k = 0; k < 16; k++) {
                *row++ = *src++;
            }
            j++;
        }
        i--;
    } while (i != -1);
}

void sub_08073A60(void) {
    copy_rect(D_082D5C64, D_06011280, 1, 10);
}

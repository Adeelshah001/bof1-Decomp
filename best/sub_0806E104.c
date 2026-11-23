struct Unk6E104 {
    u8 pad00[0x0C];
    u8 unkC;
    u8 pad0D[0x54 - 0x0D];
    u32 unk54;
    u8 unk58;
    u8 unk59;
    u8 pad5A[0x60 - 0x5A];
    u8 unk60;
    u8 pad61[0x68 - 0x61];
    u8 unk68[1];
};

struct Unk2AB0 {
    u8 pad00[0x3B];
    u8 unk3B;
    u8 pad3C[0xDD - 0x3C];
    u8 unkDD;
    u8 padDE[0xF1 - 0xDE];
    u8 unkF1;
    u8 padF2[0x124 - 0xF2];
};

extern struct Unk2AB0 D_03002AB0[];

void sub_08074674(struct Unk6E104 *);
void sub_080989B0(void);

void sub_0806E104(struct Unk6E104 *arg0) {
    u16 count;
    struct Unk2AB0 *entry;
    u8 val;

    sub_080989B0();
    entry = D_03002AB0;
    count = 0;
    arg0->unk54 = 0;
    arg0->unkC = arg0->unk60 - 1;
    do {
        u8 f1 = entry->unkF1;
        if (f1 & 0x20) {
            u32 dd = entry->unkDD;
            if (!(dd & 0xC0)) {
                val = entry->unk3B;
                arg0->unk68[count] = val;
                count++;
            }
        }
        entry++;
    } while (!(--arg0->unkC & 0x80));
    arg0->unk68[count] = 0x80;
    arg0->unk59 = 0;
    sub_08074674(arg0);
}

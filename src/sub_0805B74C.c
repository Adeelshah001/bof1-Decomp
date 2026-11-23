typedef struct {
    u8 *unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8[0x5C];
} Unk03000B10;

extern Unk03000B10 D_03000B10[];

void sub_0805B74C(s32 arg0, s32 arg1) {
    Unk03000B10 *p;

    D_03000B10[arg0].unk8[arg1] = 1;
    p = &D_03000B10[arg0];
    if (p->unk4 == arg1) {
        while (p->unk8[p->unk4] != 0) {
            p->unk4++;
            if (p->unk4 > p->unk5) {
                p->unk4 = p->unk6;
            }
        }
    }
}

typedef struct {
    u8 pad00[0x124];
} UnkStruct2AB0;

extern s32 D_03004FE0;
extern UnkStruct2AB0 D_03002AB0[];
extern s32 D_03004EB4;

void sub_0808100C(void *, UnkStruct2AB0 *, s32, s32, s32);

typedef struct {
    u8 pad00[0x08];
    u8 unk8;
    u8 pad09[0x10 - 0x09];
    u8 unk10;
    u8 pad11[0x63 - 0x11];
    u8 unk63;
} Unk81D98;

void sub_08081D98(Unk81D98 *arg0) {
    UnkStruct2AB0 *ptr;
    s32 i;

    arg0->unk8 = 8;
    D_03004FE0 = -1;
    ptr = &D_03002AB0[arg0->unk63];
    i = 0;
    do {
        sub_0808100C(arg0, ptr, i, arg0->unk10 + i, i == D_03004EB4);
        i++;
    } while (--arg0->unk8 != 0);
}

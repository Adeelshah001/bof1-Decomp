struct UnkObj55364 {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x46 - 0x08];
    u16 unk46;
    u16 unk48;
    u16 unk4A;
};

void sub_08054ED8(void *);

void sub_08055364(struct UnkObj55364 *arg0, u16 arg1, u16 arg2) {
    u32 diff;
    u16 val;

    diff = (u16)(arg1 - arg0->unk2);
    if (diff & 0x8000) {
        val = (~diff + 1) | 0x3000;
    } else {
        val = diff | 0x1000;
    }
    arg0->unk46 = val >> 4;

    diff = (u16)(arg2 - arg0->unk6);
    if (diff & 0x8000) {
        val = ~diff + 1;
    } else {
        val = diff | 0x2000;
    }
    arg0->unk4A = val >> 4;

    sub_08054ED8(arg0);
}

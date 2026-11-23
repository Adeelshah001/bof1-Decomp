struct SoundUnk {
    u8 unk0;
    u8 unk1;
    u8 unk2 : 8;
    u8 unk3 : 8;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 unk7;
    u8 unk8;
    u8 unk9;
    u8 unkA;
    u8 padB[0x19 - 0xB];
    s8 unk19;
    u8 unk1A;
    u8 unk1B;
    u8 unk1C;
};

void sub_0809F868(struct SoundUnk *arg0) {
    u32 a = arg0->unk2;
    u32 b = arg0->unk3;

    if ((u8)a >= (u8)b) {
        if ((u8)a >> 1 < (u8)b) {
            goto label_ff;
        }
        arg0->unk1B = 0x0F;
        goto clamp;
    }
    if ((u8)b >> 1 >= (u8)a) {
        arg0->unk1B = 0xF0;
        goto clamp;
    }
label_ff:
    arg0->unk1B = 0xFF;
    arg0->unkA = (u32)(arg0->unk3 + arg0->unk2) >> 4;
    goto after_clamp;
clamp:
    arg0->unkA = (u32)(arg0->unk3 + arg0->unk2) >> 4;
    if (arg0->unkA > 0xF) {
        arg0->unkA = 0xF;
    }
after_clamp:
    arg0->unk19 = ((arg0->unk6 * arg0->unkA) + 0xF) >> 4;
    arg0->unk1B = arg0->unk1C & arg0->unk1B;
}

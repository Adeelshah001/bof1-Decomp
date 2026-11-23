typedef struct {
    u8 pad00[2];
    vu8 unk2;
    u8 pad03[3];
    u8 unk6;
    u8 pad07[0x38 - 0x07];
    u16 unk38;
    u8 pad3A[0x41 - 0x3A];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x61 - 0x4E];
    u8 unk61;
    u8 pad62[0x6C - 0x62];
    u32 unk6C;
    u32 unk70;
    u32 unk74;
    u32 unk78;
    u8 pad7C[0xD8 - 0x7C];
    u8 unkD8;
} Actor;

s32 sub_0807B288(Actor *arg0);
void sub_0803815C(Actor *arg0, u32 arg1);
void sub_08083300(Actor *arg0, s32 arg1);
void sub_08037FC4(Actor *arg0, s32 arg1);

void sub_080881C0(Actor *arg0) {
    Actor *other;

    if (((u32)sub_0807B288(arg0) << 16) != 0) {
        return;
    }

    arg0->unk4D = 0x0E;

    if (arg0->unkD8 != 0x62) {
        arg0->unk2 += 8;
        arg0->unk6 += 0xD6;
    } else {
        arg0->unk2 = arg0->unk2;
        arg0->unk6 += 0xE0;
    }

    sub_0803815C(arg0, arg0->unk78);
    sub_08083300(arg0, 0x10);

    other = arg0->unk74;
    other->unk61 = arg0->unk61;
    other->unk41 = arg0->unk41;
    other->unk6C = arg0;

    arg0->unk38 = 0xE0;
    sub_08037FC4(arg0, 0x10);
}

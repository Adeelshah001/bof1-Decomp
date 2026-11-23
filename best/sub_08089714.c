void sub_0803EF2C(Entity *arg0);
void sub_0808F500(Entity *arg0);
void sub_0807CB50(Entity *arg0);
void sub_0808EEF4(Entity *arg0);
void sub_08037FC4(void *arg0, s32 arg1);
void sub_080896E0(void *arg0);

void sub_08089740(Entity *arg0) {
    u8 timer = arg0->unk54 - 1;
    arg0->unk54 = timer;
    if (timer != 0)
        sub_0808F500(arg0);
    else
        sub_0803EF2C(arg0);
}
void sub_08089714(Entity *arg0) {
    u8 phase = arg0->unk4D;
    if (phase == 0) {
        arg0->unk4D = phase + 1;
        arg0->unk54 = 0x10;
        sub_0807CB50(arg0);
    } else {
        sub_0808EEF4(arg0);
    }
}
void sub_080896E0(void *arg0) {
    u8 *object = arg0;
    u8 doubled = object[0x3B] * 2;
    s8 step = 1;
    object[0x55] = doubled;
    if (doubled & 2)
        step = -1;
    object[0x54] = step;
    object[0x4C] = 2;
    object[0x4D] = 0;
}
typedef struct {
    u8 pad00[2];
    u16 unk2;
    u16 unk4;
    u16 unk6;
    u8 pad08[0x30];
    u16 unk38;
    u8 pad3A[0xAA];
    u16 unkE4;
    u16 unkE6;
} EntityPositionView;
void sub_080896B4(EntityPositionView *arg0) {
    sub_08037FC4(arg0, 4);
    arg0->unk38 = 0x160;
    arg0->unkE4 = arg0->unk2;
    arg0->unkE6 = arg0->unk6;
    sub_080896E0(arg0);
}

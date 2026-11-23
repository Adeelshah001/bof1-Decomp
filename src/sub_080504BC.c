void sub_08050618(Entity *arg0);
void sub_080505F0(Entity *arg0, s32 arg1);
void sub_080379D4(s32 arg0);

void sub_080504BC(Entity *arg0) {
    Entity *p = *(Entity **)((u8 *)arg0 + 0xD4);
    u16 val;
    sub_08050618(arg0);
    val = p->unk6;
    arg0->unk6 = val;
    arg0->unk2C = val - 0x20;
    sub_080505F0(arg0, 5);
    arg0->unk64 = 0x080505A9;
}

void sub_08050428(Entity *arg0) {
    Entity *p = *(Entity **)((u8 *)arg0 + 0xD4);
    p->unk6 = 0xA498;
    if (((u16 *)D_03004830)[0x15] == 0x110) {
        p->unk6 = 0xA508;
        arg0->unk6 = 0xA508;
        arg0->unk2C = 0xA558;
        p->unk2C = 0xA558;
        p->unk41 |= 0x30;
        sub_080379D4(0x20);
        sub_080505F0(arg0, 0);
        arg0->unk64 = 0x080505A9;
    }
}

void sub_08050404(Entity *arg0) {
    u8 *p = (u8 *)arg0 + 0x3A;
    if (arg0->unk54 & 2) {
        *p = *p & 0xBF;
    } else {
        *p = *p | 0x40;
    }
}

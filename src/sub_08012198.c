extern u8 D_0202DBD0[];

void sub_0801070C(Entity *, s32);

void sub_08012198(Entity *arg0) {
    u8 val = D_0202DBD0[0x2B2];
    if (val <= 1) {
        goto call_82AD;
    }
    if (val <= 4) {
        goto call_82AC;
    }
call_82AD:
    sub_0801070C(arg0, 0x82AD);
    return;
call_82AC:
    sub_0801070C(arg0, 0x82AC);
}

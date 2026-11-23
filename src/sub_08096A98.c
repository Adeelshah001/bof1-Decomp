extern void sub_08096AD8(void);
extern void sub_08096AE8(s32);

void sub_08096A98(Entity *arg0) {
    u8 val = (arg0->unk54 + 1) & 3;
    arg0->unk54 = val;
    if (val == 0) {
        sub_08096AD8();
        return;
    }
    if (val == 1) {
        sub_08096AE8(0x1F);
        return;
    }
    if (val == 2) {
        sub_08096AE8(0x3E0);
        return;
    }
    sub_08096AE8(0x7C00);
}

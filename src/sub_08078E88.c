extern u16 D_03001864;
extern const u8 D_08151C10[];

void sub_08037FC4(void *, s32);
void sub_0803A8EC(void *);

static inline void helper(Entity *arg0, u8 val) {
    arg0->unk51 = val;
    if (((u8 *)arg0)[0xF1] & 0x80) {
        ((u8 *)arg0)[0x2C] = 0;
    } else {
        arg0->unk2C = arg0->unk6 + 0x18;
    }
    if ((u16)(D_03001864 - 0x10) > 1) {
        sub_0803A8EC(arg0);
    }
}

void sub_08078E88(Entity *arg0) {
    ((u8 *)arg0)[0xDC] &= 0x3F;
    ((u8 *)arg0)[0xDD] &= 0xF5;
    if (D_08151C10[((u8 *)arg0)[0x3C]] != (*(u16 *)((u8 *)arg0 + 0x24) & 0xFF)) {
        sub_08037FC4(arg0, 6);
    }
    helper(arg0, 0xA);
}

extern u8 *D_03004154;

void *sub_0803ED98(void);

typedef struct {
    u8 pad00[2];
    u16 unk2;
} Struct3420;

void sub_0800BDCC(void) {
    u8 *timer = D_03004830 + 0x2C;
    if (--(*timer) == 0) {
        u8 *slot;
        *timer = 0x28;
        slot = sub_0803ED98();
        D_03004154 = slot;
        if (slot != NULL) {
            slot[0x3A] = 1;
            D_03004154[0x3C] = 0x1C;
        }
    }
}

void sub_0800BE0C(void) {
    u8 *state = D_03004830;
    if ((*(u16 *)(state + 0x10) & 7) == 7) {
        u8 *timer;
        u8 prev;
        ((Struct3420 *)D_03003420)->unk2 -= 1;
        timer = state + 0x2C;
        prev = *timer;
        if ((*timer = prev - 1) == 0) {
            *timer = prev;
            state[0x2B]++;
        }
    }
}

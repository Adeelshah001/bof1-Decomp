extern u16 D_03001670[];
extern u8 D_03002AB0[];
extern u8 *D_03004154;

void sub_0800312C(s32, s32);
void sub_080050B4(s32, s32, s32, s32);
void *Entity_FindFreeSlot(void);
void sub_0800C6F8(void);

void sub_0800BE44(void) {
    u8 *base;
    u8 *state;
    D_03001670[0] = 0;
    sub_0800312C(0x10, 8);
    sub_0800312C(0x10, 0);
    sub_080050B4(1, 0x18F, 0x180, 0x718C);
    base = D_03002AB0;
    base[0xB8] |= 8;
    base[0x1DC] |= 8;
    base[0x300] |= 8;
    state = D_03004830;
    state[0x2C] = 0x14;
    ++state[0x2B];
}

void sub_0800BE0C(void) {
    u8 *state = D_03004830;
    if ((*(u16 *)(state + 0x10) & 7) == 7) {
        u8 *timer;
        u8 prev;
        *(u16 *)(D_03003420 + 2) -= 1;
        timer = state + 0x2C;
        prev = *timer;
        if ((*timer = prev - 1) == 0) {
            *timer = prev;
            state[0x2B]++;
        }
    }
}

void sub_0800BDCC(void) {
    u8 *state = D_03004830;
    u8 *timer = state + 0x2C;
    u8 val = *timer - 1;
    *timer = val;
    if (val == 0) {
        *timer = 0x28;
        D_03004154 = Entity_FindFreeSlot();
        if (D_03004154 != NULL) {
            D_03004154[0x3A] = 1;
            D_03004154[0x3C] = 0x1C;
        }
    }
}

void sub_0800BF4C(void) {
    u8 *base = D_03002AB0;
    base[0xB8] &= ~8;
    base[0x1DC] &= ~8;
    base[0x300] &= ~8;
    sub_0800C6F8();
    D_03004830[0x2B]++;
}

extern u8 D_03004830[];
extern u8 D_030016C0[];
extern u8 D_03001680[];

void sub_0800C0CC(void) {
    s8 state = D_03004830[0x2C] - 1;
    D_03004830[0x2C] = state;
    if (state == 0) {
        D_03004830[0x2C] = 2;
        D_03004830[0x2B] += 1;
        return;
    }
    if (state > 0x1F) {
        if ((state & 3) != 3) {
            return;
        }
        (*(u16 *)D_030016C0)++;
    } else {
        if ((state & 3) != 3) {
            return;
        }
        (*(u16 *)D_030016C0)--;
    }
    (*(u16 *)D_03001680) += 2;
}

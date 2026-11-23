extern u8 D_03002AB0[];
extern u8 D_03004114[];

s32 sub_08038458(s32);
void sub_08004EA0(s32);
void sub_080017EC(s32);
void sub_0800511C(s32, s32);

void sub_0800C41C(void) {
    if (*(u16 *)(D_03002AB0 + 0x06) != 0xBA4C) {
        D_03004830[0x2D] = 1;
    } else {
        D_03004830[0x2D] = 2;
    }
    D_03002AB0[0xB8] |= 0x04;
}

void sub_0800C2E4(void) {
    s8 *stateByte = &D_03004830[0x2B];
    if ((s8)*stateByte == 0) {
        (*stateByte)++;
        D_03002AB0[0xB8] |= 0x04;
    }
    if ((sub_08038458(1) << 0x18) != 0) {
        sub_08004EA0(*(s32 *)(D_03002AB0 + 0x94));
        D_03004830[0x2A] = 0;
        D_03002AB0[0xB8] &= 0xFB;
    }
}

void sub_0800C1D0(void) {
    u8 *counter = &D_03004830[0x2C];
    s8 *state = (s8 *)&D_03004830[0x2D];
    (*counter)--;
    if ((s8)*counter != 0) {
        return;
    }
    if (*state != 0) {
        *state = 0;
        return;
    }
    sub_08004EA0(0x817F);
    sub_080017EC(0x4F);
    D_03004830[0x2B]++;
}

void sub_0800C170(void) {
    *(u16 *)(D_03002AB0 + 0x02) = 0x0FF8;
    *(u16 *)(D_03002AB0 + 0x126) = 0x0FE8;
    *(u16 *)(D_03002AB0 + 0x24A) = 0x0FD8;
    *(u16 *)(D_03002AB0 + 0x06) = 0x085C;
    *(u16 *)(D_03002AB0 + 0x12A) = 0x085C;
    *(u16 *)(D_03002AB0 + 0x24E) = 0x085C;
    sub_0800511C(0, 1);
    *(u16 *)D_03004114 = 0;
    D_03004830[0x2B]++;
}

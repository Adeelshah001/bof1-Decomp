extern s32 sub_08038458(s32);
extern void sub_08032A78(void *arg0, s32 arg1);
extern s32 sub_080022E0(u8 *arg0);

void sub_080317DC(Entity *arg0) {
    u8 *base = (u8 *)arg0;
    base[0xB8] &= 0xF7;
    base[0x4D] = 0;
    *(u16 *)(base + 0x50) = 0;
}

void sub_08031830(Entity *arg0) {
    u8 temp = arg0->unk54 - 1;
    arg0->unk54 = temp;
    if (temp == 0) {
        ((u8 *)arg0)[0x50] = 0;
        arg0->unk4D = 0;
    }
}

void sub_0803170C(Entity *arg0) {
    if ((sub_08038458(1) << 0x18) != 0) {
        u8 val = ((u8 *)arg0)[0x51];
        sub_08032A78(arg0, (val | 0x8700));
        val = ((u8 *)arg0)[0x51];
        if (val == 0x7D || val == 0x92) {
            arg0->unk4D = 0;
            *(u16 *)(((u8 *)arg0) + 0x50) = 0;
        } else {
            ((u8 *)arg0)[0x50] = 4;
        }
    }
}

void sub_080318AC(Entity *arg0) {
    u8 sp0;
    if (((u8 *)arg0)[0x51] == 4) {
        if ((sub_080022E0(&sp0) << 0x18) != 0) {
            if (sp0 == 1) {
                sub_08032A78(arg0, 0x872A);
            } else {
                sub_08032A78(arg0, 0x877A);
            }
            ((u8 *)arg0)[0x50] = 6;
            return;
        }
    }
    arg0->unk4D = 0;
    *(u16 *)(((u8 *)arg0) + 0x50) = 0;
}


extern void *D_080FD6C4[];
void sub_080A0774(void *arg0, void *arg1);
s32 sub_08048250(void);
s32 sub_08038058(s32 arg0);
void sub_0803A974(void *arg0);
void sub_08050638(void *arg0);
void sub_080506C0(void *arg0);
void sub_08050838(void *arg0);
void sub_08050870(void *arg0);
void sub_080508F8(void *arg0);
void sub_080508D0(void *arg0);
void sub_08037FC4(void *arg0, s32 arg1);

void sub_08050954(void *arg0) {
    sub_080A0774(arg0, D_080FD6C4[*(u8 *)(arg0 + 0x3B)]);
}

void sub_08050970(void *arg0) {
    sub_08048250();
    *(u32 *)(arg0 + 0x64) = (u32)&sub_080508F8;
    *(u16 *)(arg0 + 0x38) = 0;
    sub_080A0774(arg0, arg0);
}

void sub_080508F8(void *arg0) {
    s16 temp_r0;

    if (sub_08038058(2) == 0) {
        sub_0803A974(arg0);
    } else {
        temp_r0 = 3 & *(u16 *)(D_03004830 + 0x10);
        *(u8 *)(arg0 + 0x5A) = temp_r0;
        switch (temp_r0) {
        case 0:
            sub_08050870(arg0);
            break;
        case 1:
            sub_08050638(arg0);
            break;
        case 2:
            sub_080506C0(arg0);
            break;
        default:
            sub_08050838(arg0);
            break;
        }
    }
}

void sub_08050870(void *arg0) {
    u8 temp_r1;

    temp_r1 = *(u8 *)(arg0 + 0x3B);
    if (temp_r1 != 0) {
        sub_08050638(arg0);
        *(u8 *)(arg0 + 0x40) = 0;
    } else {
        *(u8 *)(arg0 + 0x40) = temp_r1;
        sub_08037FC4(arg0, 2);
        *(u32 *)(arg0 + 0x64) = (u32)&sub_080508D0;
        sub_0803A974(arg0);
    }
}

extern void sub_0809A0B0(void);
extern void sub_08037FC4(void *arg0, s32 arg1);
extern void sub_0809A4B8(void *arg0);
extern void sub_08099444(void *arg0);
extern void sub_0809A4F8(void *arg0);
extern void sub_080352D0(const void *arg0, const void *arg1, s32 arg2, u8 arg3);
extern s32 sub_0807B2CC(void *arg0);
extern void sub_0809A1B4(void *arg0);

void sub_0809A324(void *arg0) {
    *(u16 *)((u8 *)arg0 + 0x38) = 0x160;
    *(u16 *)((u8 *)arg0 + 0x02) += 0x10;
    *(u16 *)((u8 *)arg0 + 0x06) -= 0x08;
    sub_0809A0B0();
}

void sub_0809A43C(void *arg0) {
    u8 *data;
    s32 val;
    s32 arg;
    data = (u8 *)arg0;
    data[0x4C]++;
    val = data[0x55] ^ 2;
    arg = (((-val) | val) >> 31) & 2;
    sub_08037FC4(arg0, arg);
}

void sub_0809A464(void *arg0) {
    u8 *data;
    u8 state;
    data = (u8 *)arg0;
    state = data[0x4C];
    switch (state) {
    case 0:
        sub_0809A4B8(arg0);
        break;
    case 2:
        sub_08099444(arg0);
        break;
    case 4:
        sub_0809A4F8(arg0);
        break;
    default:
        sub_080352D0((const void *)0x080A7DE0, (const void *)0x080A7C18, 0x68D, state);
        break;
    }
}

void sub_0809A1D0(void *arg0) {
    u8 *data;
    u8 state;
    data = (u8 *)arg0;
    state = data[0x4C];
    if (state != 0) {
        if ((sub_0807B2CC(arg0) << 16) == 0) {
            sub_0809A1B4(arg0);
        }
    } else {
        data[0x4C] = state + 1;
        sub_08037FC4(arg0, 8);
    }
}

extern u8 D_03004620[];
extern u8 D_03004760[];
extern u8 D_03004410[];
extern u8 D_03002AB0[];
extern void sub_0805CA64(void);
extern s32 sub_08068AF4(void);
extern void sub_08059978(void);
extern void sub_0805B2B4(s32, s32);
extern s32 sub_0805A9FC(void);
extern s32 sub_0805C574(u16);
extern void sub_0805D9C8(u16);
extern s32 sub_0805E0E8(u16);
extern u8 sub_0805F5B8(u16);

s32 sub_08061ACC(void) {
    sub_0805CA64();
    return sub_08068AF4();
}
void sub_08061800(u16 item) {
    u16 value = item;
    sub_08059978();
    if (0xF00 & value) {
        if (sub_0805E0E8(value) != 0) {
            sub_0805B2B4(0x67F, 0);
            sub_0805A9FC();
        } else {
            *(s32 *)(D_03004760 + 0xC) = sub_0805C574(item);
            sub_0805D9C8(item);
        }
    } else {
        sub_0805B2B4(0xAA0, 1);
        sub_0805A9FC();
    }
}
s32 sub_080617A0(u8 *object) {
    s32 result;
    u8 *state = D_03004620;
    switch (sub_0805F5B8(*(u16 *)(state + 0xB8))) {
    case 0:
    case 1:
        result = *(u16 *)(object + 0x112);
        break;
    case 2:
        result = *(u16 *)(object + 0x114);
        break;
    case 3:
        result = *(u16 *)(object + 0x116);
        break;
    case 4:
        result = *(u16 *)(object + 0x118);
        break;
    default:
        result = 0;
        break;
    }
    return result;
}
s32 sub_08061EFC(void) {
    s32 i;
    u8 *base = D_03004410;
    u8 active = base[0x14];
    u8 *state = D_03004620;
    if (active != 0) {
        u8 *event = D_03002AB0;
        for (i = 0; i <= 3; i++) {
            event[state[0xC4] * 0x124 + 0xE8 + i] = base[0x14 + i];
        }
    }
    state[3] = 0;
    return 0;
}

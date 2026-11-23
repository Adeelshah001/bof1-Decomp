extern void sub_0807B2BC(void *);
extern void sub_08083484(void *);
extern void sub_08037FC4(void *, s32);
extern u8 D_03004F50[];
void sub_08086C54(u8 *);
void sub_08086C78(u8 *);
void sub_08086BD8(u8 *object) {
    u8 status;
    sub_0807B2BC(object);
    status = (*(u8 **)(object + 0x74))[0x3A];
    if (status == 0) {
        u8 *state = D_03004F50;
        state[0x5D] = status;
        object[0x4C] = 2;
        object[0x4D] = status;
        object[0x50] = status;
        sub_08037FC4(object, 0);
    }
}
void sub_08086C14(u8 *object) {
    u8 code;
    sub_0807B2BC(object);
    code = *(u16 *)(object + 0x24);
    switch (code) {
    case 0: case 1: case 2: case 3: case 4: case 5:
        break;
    case 6:
        sub_08086C54(object);
        break;
    case 12:
        sub_08083484(object);
        object[0x4D] = 10;
        sub_08086C78(object);
        break;
    }
}
void sub_08086C54(u8 *object) {
    if (*(u16 *)(object + 0x20) == 1 || object[0x41] == 14) {
        sub_08086C78(object);
    } else {
        object[0x41] = 14;
    }
}
void sub_08086C78(u8 *object) {
    u32 value = object[0x7D] >> 4;
    object[0x41] = value;
}

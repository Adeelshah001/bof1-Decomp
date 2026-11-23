extern u8 D_03002AB0[];
void sub_08047000(void);

s32 sub_08047118(void *arg0) {
    s32 result = 0;
    if (((u8 *)arg0)[0x3B] == 3)
        result = 1;
    return result;
}

s32 sub_08047128(void *arg0) {
    s32 result = 1;
    if (((u8 *)arg0)[0x3B] != 3 && ((u8 *)arg0)[0x3E] == 6)
        result = 0;
    return result;
}

void sub_080470EC(void) {
    u8 *state = D_03002AB0;
    if (!(state[0xB8] & 0xC) && *(s32 *)(state + 0x88) == 0)
        sub_08047000();
}

s32 sub_08047154(void *arg0) {
    s32 result = 0;
    if (((u8 *)arg0)[0x3B] == 2)
        result = 1;
    return result;
}

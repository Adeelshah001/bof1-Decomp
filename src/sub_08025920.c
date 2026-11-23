extern u8 D_03002AB0[];

void sub_08025920(void) {
    D_03002AB0[0xB8] |= 4;
    ((Entity *)D_03003420)->unk68++;
}

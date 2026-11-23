extern u16 D_030023E0[];
void sub_080379D4(u8);

void sub_08092740(u8 *entity) {
    u16 x;
    u16 y;
    u32 timer = entity[0x54];

    timer--;
    entity[0x54] = timer;
    if ((u8)timer != 0) {
        u8 rem = timer & 3;
        if (rem == 0) {
            x = 0xEFE;
            y = 0x2F00;
        } else if (rem == 1) {
            x = 0xF02;
            y = 0x2F00;
        } else if (rem == 2) {
            x = 0xF00;
            y = 0x2EFE;
        } else {
            x = 0xF00;
            y = 0x2F02;
        }
    } else {
        sub_080379D4(0xF1);
        entity[0x4C]++;
        x = 0xF00;
        y = 0x2F00;
    }
    D_030023E0[1] = x;
    D_030023E0[3] = y;
}

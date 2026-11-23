void sub_08032AB0(s32 arg0);

void sub_0802E4EC(void *arg0) {
    u8 *entity = (u8 *)arg0;
    u8 *timer = &entity[0x54];
    u8 val = *timer - 1;
    *timer = val;
    
    if (val == 0) {
        entity[0xB8] &= 0xF7;
        sub_08032AB0(0x1F);
        entity[0x55] = 6;
        *timer = 0x10;
        entity[0x50] = 0x0C;
    }
}

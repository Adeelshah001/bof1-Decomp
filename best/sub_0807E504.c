void sub_08002BBC(u8);
void sub_0802FD60(s32);

void sub_0807E504(void) {
    *(volatile u16 *)(0x0202DBD0 + 6) = 0x1198;
    *(volatile u16 *)(0x0202DBD0 + 0xA) = 0x4C2C;
    sub_0802FD60(0);
}

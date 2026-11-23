extern void sub_08002BBC(u8);

void sub_0807E528(s32 arg0) {
    if (arg0 << 0x18) {
        *(vu8 *)0x03002AB8 &= 0xFB;
        *(vu8 *)0x03004584 = 1;
        sub_08002BBC(*(vu8 *)0x03004F5B);
    } else {
        *(vu16 *)0x0202DBD6 = 0x1988;
        *(vu16 *)0x0202DBDA = 0x568C;
    }
}

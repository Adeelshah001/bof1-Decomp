void sub_08049EC4(void *arg0) {
    u8 *p = arg0;
    u8 val = *(u8 *)0x03001850;
    if (val == p[0x5F]) {
        *(u8 *)0x03001850 = 0;
        *(u32 *)(p + 0x64) = 0x08048E89;
    }
}

void sub_08049F58(void *arg0) {
    u16 *ptr = (u16 *)((u8 *)arg0 + 0x58);
    u16 val = *ptr - 1;
    *ptr = val;
    if ((val << 16) != 0) {
        return;
    }
    *(u32 *)((u8 *)arg0 + 0x64) = 0x0804900D;
}

void sub_08049FAC(void *arg0) {
    u8 flag = *(u8 *)0x03003F98;
    u8 val = ((u8 *)arg0)[0x80];
    if ((val & flag) != 0) {
        *(u32 *)((u8 *)arg0 + 0x64) = 0x080490F5;
        if (((u8 *)arg0)[0x61] != 0) {
            sub_080A0774(arg0);
        }
    } else {
        sub_0803A8EC(arg0);
    }
}

void sub_08049FEC(void *arg0) {
    if (*(u8 *)0x03001850 != 0) {
        ((u8 *)arg0)[0x61] = 0;
        ((u8 *)arg0)[0x54] = 0x30;
        *(u32 *)((u8 *)arg0 + 0x64) = 0x0804A049;
        *(u16 *)((u8 *)arg0 + 0x38) = 0;
    }
    sub_0804A020(arg0);
}

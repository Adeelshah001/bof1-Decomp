s32 sub_080A07AC(s32, s32);
s32 sub_080A0844(s32, s32);

u8 sub_0805D584(s32 arg0, u8 *arg1) {
    u8 buf[10];
    u8 count;
    u8 ret;

    if (arg0 != 0) {
        count = 0;
        do {
            u8 *p = &buf[count];
            *p = sub_080A0844(arg0, 10);
            arg0 = sub_080A07AC(arg0, 10);
            count++;
        } while (arg0 != 0);
        ret = count;
        if (ret != 0) {
            do {
                *arg1++ = buf[count - 1] + 0x20;
                count--;
            } while (count != 0);
        }
    } else {
        *arg1 = 0x20;
        ret = 1;
    }
    return ret;
}

void sub_0805D5E4(s32 arg0, u8 *arg1, s32 arg2) {
    s32 i;
    for (i = 0; i < arg2; i++) {
        arg1[i] = 2;
    }
    if (arg0 != 0) {
        i = arg2 - 1;
        while (i >= 0 && arg0 != 0) {
            u8 *p = &arg1[i];
            *p = sub_080A0844(arg0, 10) + 0x20;
            arg0 = sub_080A07AC(arg0, 10);
            i--;
        }
    } else {
        arg1[arg2 - 1] = 0x20;
    }
}

extern void sub_08037C98(void *, s32);

void sub_08031CAC(void *arg0) {
    void *p = arg0;
    u32 *field_10 = (u32 *)((u8 *)p + 0x10);
    u32 *field_4 = (u32 *)((u8 *)p + 4);
    u16 val6;
    u16 val16;
    int result;

    sub_08037C98(p, 0);

    val6 = *(u16 *)((u8 *)p + 6);
    val16 = *(u16 *)((u8 *)p + 0x16);

    if (val6 == val16) {
        result = 0;
    } else {
        *field_4 = *field_10 + *field_4;
        if (*(u16 *)((u8 *)p + 6) == val16) {
            result = 0;
        } else {
            result = 1;
        }
    }

    if (result == 0) {
        *(u8 *)((u8 *)p + 0x50) = 0x0C;
    }
}

void sub_08031C28(void *arg0) {
    u8 *p = (u8 *)arg0 + 0x54;
    u32 v = *p - 1;
    *p = (u8)v;
    if ((v << 0x18) == 0) {
        *(u16 *)((u8 *)arg0 + 0x50) = 6;
    }
}

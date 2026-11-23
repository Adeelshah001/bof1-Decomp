extern u8 sub_08003104(void);
extern void sub_08049C40(void *, u32, u32);
extern void sub_08049E88(void *);
extern void sub_08048EF4(void);

void sub_080489B0(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 var_r1;
    u16 val2;
    u16 val6;
    u16 *dst1;
    void (*fp)(void);

    val2 = *(u16 *)(p + 0x02);
    val2 = (u16)(~val2 + 1);
    dst1 = (u16 *)(p + 0x58);
    *dst1 = val2;
    val6 = *(u16 *)(p + 0x06);
    *(u16 *)(p + 0x5A) = val6;
    sub_08049E88(arg0);
    var_r1 = sub_08003104();
    if (var_r1 == 0) {
        var_r1 = 0xFF;
    }
    p[0x54] = var_r1;
    p[0x55] = var_r1;
    p[0x3B] = 1;
    fp = sub_08048EF4;
    *(u32 *)(p + 0x64) = (u32)fp;
    sub_08049C40(arg0, 0x40, 0x3E);
}

void sub_08048B44(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 var_r1;
    u16 val2;
    u16 val6;
    u16 *dst1;
    void (*fp)(void);

    val2 = *(u16 *)(p + 0x02);
    val2 = (u16)(~val2 + 1);
    dst1 = (u16 *)(p + 0x58);
    *dst1 = val2;
    val6 = *(u16 *)(p + 0x06);
    *(u16 *)(p + 0x5A) = val6;
    sub_08049E88(arg0);
    var_r1 = sub_08003104();
    if (var_r1 == 0) {
        var_r1 = 0xFF;
    }
    p[0x54] = var_r1;
    p[0x55] = var_r1;
    p[0x3B] = 0;
    fp = sub_08048EF4;
    *(u32 *)(p + 0x64) = (u32)fp;
    sub_08049C40(arg0, 0x80, 0x38);
}

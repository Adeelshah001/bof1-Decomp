extern u8 D_081A0E7C[];
extern u8 D_02020FC0[];
extern u8 D_020211C0[];
extern u8 D_08151C57[];
extern u8 D_08151C5E[];

void sub_08037FC4(void *, s32);
void sub_0807D7DC(void *);

void sub_0807CC98(u16 arg2, u16 arg1) {
    u16 src = arg1;
    u16 dst = arg2;
    u16 count = 15;
    do {
        u16 val = *(u16 *)(D_081A0E7C + src);
        *(u16 *)(D_02020FC0 + dst) = val;
        *(u16 *)(D_020211C0 + dst) = val;
        src = (u16)(src + 2);
        dst = (u16)(dst + 2);
        count = (u16)(count - 1);
    } while (count != 0);
}

void sub_0807C8C0(void *arg0) {
    u8 *entity = (u8 *)arg0;
    u8 idx;
    u16 base;
    idx = entity[0x70];
    base = 0xF00;
    *(u16 *)(entity + 0x02) = (u16)(D_08151C57[idx] + base);
    *(u16 *)(entity + 0x06) = (u16)(0x2F01 + D_08151C5E[idx]);
    *(u16 *)(entity + 0x2C) = 0x2F00;
    sub_08037FC4(arg0, (idx + 5) * 2);
    entity[0x4D]++;
    sub_0807D7DC(arg0);
}

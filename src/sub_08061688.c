extern u8 D_0200B9E1[];
extern const u8 D_08100B50[];

void sub_08059978(void);
u8 sub_08059E7C(u16, u8 *);
void sub_0805A9FC(void);
void sub_0805B2B4(u16, u8);
void sub_0805B308(const u8 *);
void sub_0805CA4C(s32);
s32 sub_0805CBBC(u16);
s32 sub_0805E0B8(u16);

void sub_08061688(u16 arg0) {
    u16 val;
    s32 res;
    u8 *buf;
    u8 *ptr;
    u8 len;

    sub_08059978();
    val = arg0 & 0xF00;
    if (val != 0) {
        res = sub_0805E0B8(arg0);
        if (res != 0) {
            sub_0805B308(D_08100B50);
            return;
        }
        buf = D_0200B9E1;
        len = sub_08059E7C(arg0, buf);
        ptr = buf - 1;
        *ptr = len;
        ptr += 0x40;
        *ptr = 1;
        ptr += 1;
        *ptr = (val >> 8) + 0x20;
        ptr += 1;
        *ptr = res;
        sub_0805CA4C(sub_0805CBBC(arg0));
        sub_0805B2B4(0x59E, 0);
    } else {
        sub_0805B2B4(0xAA0, 1);
    }
    sub_0805A9FC();
}

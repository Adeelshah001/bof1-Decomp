extern u16 D_03004E08;
extern u16 D_03004E0C;
extern u8 D_0300097A;
extern u8 D_0202DBD0[];

void sub_0803C7F0(s32);
s32 sub_08001770(s32);
void sub_0803D510(void);
void sub_0803D630(void);

void sub_0803D5B8(u16 arg0) {
    sub_0803C7F0(arg0);
}

void sub_0803D560(u16 arg0) {
    if (arg0 == 0xFC) {
        if ((u8)sub_08001770(0x86) != 0 || (u8)sub_08001770(0x85) == 0) {
            sub_0803C7F0(0xFC);
        } else {
            D_03004E08 = 0x7F01;
            D_03004E0C = 0x14BA;
            sub_0803D510();
        }
    } else {
        sub_0803C7F0(arg0);
    }
}

void sub_0803D360(void) {
    u32 timer = D_0300097A;
    timer--;
    D_0300097A = timer;
    if ((u8)timer == 0) {
        u32 cnt;
        u8 *base;
        D_0300097A = 0x3C;
        cnt = D_03004E0C;
        cnt++;
        D_03004E0C = cnt;
        base = D_0202DBD0;
        if ((u16)cnt == 0x10B4) {
            base[0x4FE]++;
        }
        *(u16 *)(base + 0x28E) = D_03004E0C;
        sub_0803D630();
    }
}

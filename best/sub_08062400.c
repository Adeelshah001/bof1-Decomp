extern u16 D_03001648;
extern u8 D_03004620[];
extern u8 sub_0814C2F6[];

void sub_0805B358(const void *, u8, s32, s32, s32);
void sub_0805B568(u16, u16, u8, u8, u16);
s32 sub_0806234C(void);
void sub_08067D74(void);

s32 sub_08062400(void) {
    s32 ret;
    u8 flag = D_03004620[7] & 0x80;

    if (flag == 0) {
        s32 x;
        D_03001648 = 0;
        sub_0805B358(sub_0814C2F6 + 0x92, D_03004620[0xB2], 0x10, 0, 1);
        D_03004620[0xB0] = 2;
        sub_08067D74();
        x = 0x1CC;
        sub_0805B568(0x8008, 0x4078, 1, 0, x);
        D_03004620[0xB2] = 0xFF;
        D_03004620[7] = -1;
        ret = 0;
    } else {
        ret = sub_0806234C();
    }
    return ret;
}

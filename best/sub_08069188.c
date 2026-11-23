extern u16 D_03001648;
extern u8 D_03004620[];
extern u8 D_0814BCDA[];
extern u8 sub_0814C2F6[];

void sub_0805B358(const void *, u8, u8, u8, s32);
void sub_08067D74(s32);
s32 sub_0805B568(u32, u32, u32, u32, u32);
void sub_08059978(void);
void sub_0805B308(const void *);
void sub_0805A9FC(void);

s32 sub_08069188(void) {
    u32 x;
    D_03001648 = 0;
    sub_0805B358(sub_0814C2F6 + 0x92, D_03004620[0xB2], 0x10, 0, 1);
    D_03004620[0xB0] = 0;
    sub_08067D74(2);
    x = 0x1CC;
    sub_0805B568(0x8008, 0x4078, 1, 0, x);
    D_03004620[0xB2] = 0xFF;
    sub_08059978();
    sub_0805B308(D_0814BCDA + 1);
    sub_0805A9FC();
    D_03004620[3] = 2;
    return 0;
}

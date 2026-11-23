extern u8 D_03004620[];
extern const u16 D_080A67F4[];

void sub_0805DB10(s32, u16, s32);
void sub_0805DB2C(s32, u16, s32);
s32 sub_080A0844(s32, s32);
void sub_080A0A68(void *, const void *, s32);

void sub_08068F84(s32 arg0) {
    u16 buf[3];
    u16 y;
    s32 i;

    sub_080A0A68(buf, D_080A67F4, 6);
    y = 0x44;
    for (i = 0; i <= 0x1A; i++) {
        s32 idx = D_03004620[0xB4] + i;
        if (D_03004620[2] == 0x18) {
            sub_0805DB10(arg0, y, idx);
        } else {
            sub_0805DB2C(arg0, y, idx);
        }
        y += buf[sub_080A0844(i, 3)];
    }
}

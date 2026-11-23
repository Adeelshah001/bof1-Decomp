extern u8 D_03004F50[];
void sub_080379D4(u8);
void sub_08083B04();

void sub_08095A58(u8 *obj) {
    u8 v;
    obj[0x61] = 0;
    obj[0x55] = 0x18;
    sub_080379D4(0x28);
    obj[0x54] = 0;
    obj[0x4C]++;
    v = 0x31;
    D_03004F50[0x5D] = v;
    sub_08083B04(obj);
}

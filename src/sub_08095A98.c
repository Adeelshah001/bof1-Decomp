typedef struct {
    u8 pad00[0x54];
    u8 unk54 : 8;
} Obj95;

extern u8 D_03004F50[];
void sub_08095B00(Obj95 *, s32);
void sub_080379D4(u8);
void sub_08083B04();
void sub_08096CBC(u8 *);

void sub_08095A98(Obj95 *obj) {
    if ((--obj->unk54) & 0x80)
        sub_08095B00(obj, 2);
}

void sub_08095A58(u8 *obj) {
    obj[0x61] = 0;
    obj[0x55] = 0x18;
    sub_080379D4(0x28);
    obj[0x54] = 0;
    obj[0x4C]++;
    D_03004F50[0x5D] = 0x31;
    sub_08083B04(obj);
}

void sub_080959EC(u8 *obj) {
    obj[0x54] = 0;
    obj[0x4C]++;
    D_03004F50[0x5D] = 0x31;
    sub_08083B04(obj, 0x31);
}

void sub_08095954(u8 *obj) {
    u8 *s = D_03004F50;
    if (s[0x5D] != 0) {
        u32 v = *(u32 *)(obj + 0x6C);
        *(u32 *)(obj + 0x78) = v;
        *(u32 *)(s + 0x54) = v;
        s[0x58] = 1;
        s[0x4A] = 0;
        sub_08096CBC(obj);
    }
}

typedef struct {
    u8 pad00[0x4A];
    u8 unk4A;
    u8 pad4B[0x54 - 0x4B];
    u32 unk54;
    u8 unk58;
    u8 pad59[0x5D - 0x59];
    u8 unk5D;
} State4F50;

extern State4F50 D_03004F50;
void sub_080379D4(u8);
void sub_08083B04();
void sub_08096CBC(u8 *);

void sub_08095A58(u8 *obj) {
    obj[0x61] = 0;
    obj[0x55] = 0x18;
    sub_080379D4(0x28);
    obj[0x54] = 0;
    obj[0x4C]++;
    D_03004F50.unk5D = 0x31;
    sub_08083B04(obj);
}

void sub_080959EC(u8 *obj) {
    obj[0x54] = 0;
    obj[0x4C]++;
    D_03004F50.unk5D = 0x31;
    sub_08083B04(obj, 0x31);
}

void sub_08095954(u8 *obj) {
    if (D_03004F50.unk5D != 0) {
        u32 v = *(u32 *)(obj + 0x6C);
        *(u32 *)(obj + 0x78) = v;
        D_03004F50.unk54 = v;
        D_03004F50.unk58 = 1;
        D_03004F50.unk4A = 0;
        sub_08096CBC(obj);
    }
}

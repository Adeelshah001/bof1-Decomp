typedef struct {
    u8 pad00[0x18];
    s32 unk18;
} Unk03000AE0;

extern Unk03000AE0 D_03000AE0;
extern u8 D_03000B08;
extern u8 D_03004550[];

void sub_0805A660(void);
void sub_08059A90(u8);
void sub_080379D4(s32);
s32 sub_080A07AC(s32, s32);

void sub_0805A70C(void) {
    u8 saved;
    s32 val;
    u8 tmp;

    sub_0805A660();
    D_03004550[0x23] ^= 0x80;
    saved = D_03000B08;
    val = D_03000AE0.unk18;
    tmp = sub_080A07AC(saved, val);
    tmp *= val;
    if (D_03004550[0x23] & 0x80) {
        tmp += 0xF;
    } else {
        tmp += 8;
    }
    D_03000B08 = tmp;
    sub_08059A90(0x27);
    D_0805A70C_end: ;
    D_03000B08 = saved;
    sub_080379D4(1);
}

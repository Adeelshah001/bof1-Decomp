typedef struct {
    u8 pad00[0x08];
    u32 unk8;
    u8 unk0C[0x0A];
    u8 pad16[2];
    s32 unk18;
} Unk03000AE0;

extern Unk03000AE0 D_03000AE0;
extern u8 D_03000B08;
extern u8 D_03004550[];

void sub_0805B15C(void);
void sub_08059978(void);
void sub_08059A90(u8);
s32 sub_080A07AC(s32, s32);

void sub_0805B138(void) {
    u8 *p = (u8 *)&D_03000AE0;
    s32 i;
    p += 0x15;
    i = 9;
    do {
        *p = 0;
        p--;
        i--;
    } while (i >= 0);
    sub_0805B15C();
    sub_08059978();
}

void sub_0805B920(void) {
    u8 saved = D_03000B08;
    s32 val = D_03000AE0.unk18;
    u8 tmp = sub_080A07AC(saved, val);
    tmp *= val;
    if (D_03004550[0x23] & 0x80) {
        tmp += 0xF;
    } else {
        tmp += 8;
    }
    D_03000B08 = tmp;
    sub_08059A90(0x27);
    D_03000B08 = saved;
}

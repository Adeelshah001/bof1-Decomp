typedef struct {
    u8 pad00[0x40];
    u16 unk40;
} Unk8080F9C_0;

typedef struct {
    u8 pad00[0xF1];
    u8 unkF1;
    u8 padF2[2];
    u16 unkF4;
    u16 unkF6;
} Unk8080F9C_1;

void sub_08080F9C(Unk8080F9C_0 *arg0, Unk8080F9C_1 *arg1) {
    u16 hp;
    u16 var_r1;
    u32 tmp;
    u32 q;

    hp = arg0->unk40 + arg1->unkF6;
    if (hp >= arg1->unkF4) {
        hp = arg1->unkF4;
    }
    arg1->unkF6 = hp;
    var_r1 = arg1->unkF6;
    arg0->unk40 = 0;
    q = arg1->unkF4 / 4;
    tmp = var_r1;
    hp = tmp;
    if ((q << 16) < (tmp << 16)) {
        arg1->unkF1 &= 0xFC;
    } else if ((u16)q / 2 < hp) {
        arg1->unkF1 = (arg1->unkF1 & 0xFC) | 2;
    } else {
        arg1->unkF1 = (arg1->unkF1 & 0xFC) | 3;
    }
}

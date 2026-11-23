struct Unk6F6B4 {
    u8 unk0;
    u8 unk1;
    u8 unk2;
    u8 unk3;
};

extern s32 D_03000F64;
extern s32 D_030010A4;
extern u8 D_03000FA0[];
extern s32 D_03000F9C;

void sub_0806F48C(struct Unk6F6B4 *);
s32 sub_0806F600(struct Unk6F6B4 *);
void sub_080A0A4C(void *, s32);

void sub_0806F6B4(struct Unk6F6B4 *arg0) {
    switch (arg0->unk2) {
    case 0:
        D_03000F64 = -1;
        sub_0806F48C(arg0);
        arg0->unk2++;
        break;
    case 1:
        D_030010A4 = 1;
        if (sub_0806F600(arg0) == 2) {
            arg0->unk2++;
        }
        D_030010A4 = 0;
        break;
    case 2: {
        s32 val = -1;
        sub_080A0A4C(D_03000FA0, 4);
        D_03000F9C = val;
        arg0->unk1 = 8;
        arg0->unk3 = 0;
        arg0->unk2 = 0;
        break;
    }
    }
}

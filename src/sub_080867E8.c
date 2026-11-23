typedef struct {
    u8 pad00[0x40];
    u8 unk40;
    u8 unk41;
    u8 pad42[0x4C - 0x42];
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[2];
    u8 unk50;
    u8 pad51[0xD9 - 0x51];
    u8 unkD9;
} Obj86;

extern u8 D_03004F50[];
void sub_08086A30(Obj86 *obj);
void sub_0807CB08();

void sub_080867E8(Obj86 *obj) {
    u8 v;
    obj->unk40 = 0;
    sub_0807CB08();
    v = obj->unkD9;
    if (v == 0xC) {
        D_03004F50[0x5F]--;
        obj->unk41 = 0xE;
        v = 0xA;
    } else {
        v = 2;
    }
    obj->unk4C = v;
    obj->unk4D = 0;
    obj->unk50 = 0;
    sub_08086A30(obj);
}

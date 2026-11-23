typedef struct Obj87F94 Obj87F94;

struct Obj87F94 {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0xD0 - 0x08];
    Obj87F94 *unkD0;
    Obj87F94 *unkD4;
    u8 unkD8;
    u8 padD9[0xE4 - 0xD9];
    u16 unkE4;
    u16 unkE6;
    u8 padE8[0x106 - 0xE8];
    u16 unk106;
};

void sub_080869CC(void);
Obj87F94 *sub_0807C638(Obj87F94 *, s32);

void sub_08087F94(Obj87F94 *arg0)
{
    Obj87F94 *child;

    sub_080869CC();
    arg0->unkE4 = arg0->unk2 = 0xF48;
    arg0->unkE6 = arg0->unk6 = 0x2F54;
    do {
        child = sub_0807C638(arg0, 0);
    } while (child == NULL);
    child->unk106 = arg0->unk106;
    child->unkD8 = 0x60;
    arg0->unkD0 = child;
    do {
        child = sub_0807C638(arg0, 1);
    } while (child == NULL);
    child->unk106 = arg0->unk106;
    child->unkD8 = 0x62;
    arg0->unkD4 = child;
}

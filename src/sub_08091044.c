typedef struct {
    u8 pad00[0x41];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0xE0 - 0x55];
    u8 unkE0;
} Obj90;

void sub_0807B248(Obj90 *obj);
void sub_08091098(Obj90 *obj);
void sub_08083484(Obj90 *obj);

void sub_08091044(Obj90 *obj) {
    u8 old = obj->unk54;
    s32 n = old - 1;
    obj->unk54 = n;
    if ((u8)n != 0) {
        s32 bit = old & 1;
        old = 0xE;
        if (bit == 0)
            old = 8;
        obj->unk41 = old;
        sub_0807B248(obj);
        sub_08091098(obj);
    } else {
        obj->unk41 = 8;
        obj->unk4D = 0xA;
        obj->unkE0 = 6;
        sub_08083484(obj);
    }
}

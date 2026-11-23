typedef struct {
    u8 pad00[0x3C];
    u8 unk3C;
    u8 pad3D[0x41 - 0x3D];
    u8 unk41;
    u8 pad42[0x4D - 0x42];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 pad55[0x6D - 0x55];
    u8 unk6D;
    u8 pad6E[2];
    u8 unk70;
    u8 pad71[0xE0 - 0x71];
    u8 unkE0;
    u8 unkE1;
} Obj90;

void sub_0807CB08();
void sub_08091298(Obj90 *obj);
void sub_0807B248(Obj90 *obj);
void sub_08091098(Obj90 *obj);
void sub_08083484(Obj90 *obj);

void sub_08090FEC(Obj90 *obj) {
    u8 a;
    u16 b;
    if (obj->unk6D == 2) {
        obj->unkE0 = 6;
        obj->unkE1 = (obj->unk3C == 0x1C) ? 0x16 : 0x22;
        a = 8;
        b = 0x1E;
    } else {
        obj->unk70 = 0;
        b = 0x405;
        a = 4;
    }
    obj->unk4D = a;
    *(u16 *)&obj->unk54 = b;
    sub_0807CB08();
    sub_08091298(obj);
}

void sub_08091044(Obj90 *obj) {
    u8 old = obj->unk54;
    s32 n = old - 1;
    obj->unk54 = n;
    if ((u8)n != 0) {
        u8 c = 0xE;
        if (!(old & 1))
            c = 8;
        obj->unk41 = c;
        sub_0807B248(obj);
        sub_08091098(obj);
    } else {
        obj->unk41 = 8;
        obj->unk4D = 0xA;
        obj->unkE0 = 6;
        sub_08083484(obj);
    }
}

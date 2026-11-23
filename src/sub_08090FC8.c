typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[0x2C - 0x08];
    u16 unk2C;
    u8 pad2E[0x3C - 0x2E];
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
    u8 pad71[3];
    u8 unk74;
    u8 unk75;
    u8 pad76[0xD8 - 0x76];
    u8 unkD8;
    u8 padD9[2];
    u8 unkDB;
    u8 padDC[4];
    u8 unkE0;
    u8 unkE1;
    u8 padE2[2];
    u16 unkE4;
    u16 unkE6;
} Obj90;

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
} Obj90b;

void sub_08090EE8(Obj90 *obj);
void sub_0807CB08();
void sub_08091298(Obj90 *obj);
void sub_0807B248(Obj90 *obj);
void sub_08091098(Obj90 *obj);
void sub_08083484(Obj90 *obj);
void sub_0803EE6C();
void sub_08037FC4(void *obj, s32 arg1);
void sub_0807C600(void *obj, s32 arg1);

void sub_08090FC8(Obj90 *obj, u8 arg1) {
    obj->unkDB = arg1;
    obj->unk75 = 0;
    obj->unk74 = 0;
    obj->unkD8 = 0x48;
    sub_08090EE8(obj);
}

void sub_08090FEC(Obj90 *obj) {
    u8 a;
    u16 b;
    if (obj->unk6D == 2) {
        obj->unkE0 = 6;
        a = 0x22;
        if (obj->unk3C == 0x1C)
            a = 0x16;
        obj->unkE1 = a;
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
    u8 old = obj->unk54--;
    if ((u8)(old - 1) != 0) {
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

void sub_08090E40(Obj90 *obj, Obj90b *other) {
    u16 t;
    t = obj->unkE4;
    obj->unk2 = t;
    other->unk2 = t;
    t = obj->unkE6;
    obj->unk6 = t;
    obj->unk2C = t;
    other->unk6 = t;
    sub_0803EE6C(other);
    sub_08037FC4(obj, 6);
    sub_0807C600(obj, 0);
}

typedef struct {
    u8 pad00[2];
    u16 unk2;
    u8 pad04[2];
    u16 unk6;
    u8 pad08[8];
    u16 unk10;
    u16 unk12;
    u16 unk14;
    s16 unk16;
    u8 pad18[0x24 - 0x18];
    u16 unk24;
    u8 pad26[0x38 - 0x26];
    u16 unk38;
    u8 pad3A[0x40 - 0x3A];
    u8 unk40;
    u8 unk41;
    u8 pad42[2];
    u32 unk44;
    u32 unk48;
    u8 unk4C;
    u8 unk4D;
    u8 pad4E[2];
    u8 unk50;
    u8 unk51;
    u8 pad52[2];
    u8 unk54;
    u8 pad55[0x78 - 0x55];
    u32 unk78;
    u8 pad7C[0xD9 - 0x7C];
    u8 unkD9;
    u8 padDA[0xE4 - 0xDA];
    u16 unkE4;
    u16 unkE6;
} Obj86;

extern u8 D_03004F50[];
void sub_080867E8(Obj86 *obj);
void sub_08086A30(Obj86 *obj);
void sub_0807CB08(void);
u16 sub_0807B288(void);
u16 sub_0807B2BC(void);
void sub_08037FC4(void *obj, s32 arg1);
void sub_080380F4(void *obj, u32 arg1, s32 arg2, s32 arg3);
void sub_0807C600(void *obj, s32 arg1);

void sub_08086A0C(Obj86 *obj, u16 x, u16 y) {
    obj->unk2 = x;
    obj->unkE4 = x;
    obj->unk6 = y;
    obj->unkE6 = y;
    sub_080867E8(obj);
}

void sub_0808683C(Obj86 *obj) {
    if (sub_0807B2BC() != 0) {
        if (obj->unk24 == 8) {
            sub_080380F4(obj, obj->unk78, 0x10, 0x10);
            obj->unk54 = 4;
            obj->unk4D = 6;
            obj->unk38 = 0x160;
        }
    } else {
        obj->unk2 = obj->unkE4;
        obj->unk6 = obj->unkE6;
        sub_0807C600(obj, 2);
        sub_08037FC4(obj, 0);
    }
}

void sub_080867E8(Obj86 *obj) {
    u8 v;
    obj->unk40 = 0;
    sub_0807CB08();
    if (obj->unkD9 == 0xC) {
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

void sub_0808676C(Obj86 *obj) {
    u16 r = sub_0807B288();
    if (r == 0) {
        obj->unk12 = 5;
        obj->unk10 = 0x8000;
        obj->unk44 = r;
        obj->unk16 = -6;
        obj->unk14 = r;
        obj->unk48 = 0xE400;
        sub_08037FC4(obj, 10);
        obj->unk50++;
    }
}

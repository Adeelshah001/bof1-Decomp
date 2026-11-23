extern u8 D_030023E0[];
extern u8 D_080FC7D0[];

s32 sub_08003104(void);
void *sub_0803EDDC(u16);
void sub_08047568(void);
s32 sub_08046BBC(void);
u32 sub_08036C04(u32, u16, u16);
void sub_0803A8EC(void *);
void sub_08047624(void);

typedef struct {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[0x6 - 0x4];
    u16 unk6;
    u8 pad8[0x3A - 0x8];
    u8 unk3A;
    u8 unk3B;
    u8 unk3C;
    u8 pad3D[0x64 - 0x3D];
    u32 unk64;
} UnkStruct;

u8 sub_080472B8(void *arg0) {
    u8 *p = (u8 *)arg0 + 0x61;
    *p = (u8)((*p + 2) & 3);
    return (u8)sub_08046BBC();
}

void sub_0804725C(void *arg0, u8 *arg1) {
    u8 tmp = (u8)sub_08036C04((u32)0x030023E0, *(u16 *)((u8 *)arg0 + 2), *(u16 *)((u8 *)arg0 + 0x2C));
    *arg1 = tmp - 3;
}

void sub_08047200(u8 arg0, u16 arg1, u16 arg2) {
    u8 var_r4 = 0;
    UnkStruct *obj;
    if (arg0) {
        var_r4 = D_080FC7D0[sub_08003104() & 0xF];
    }
    obj = (UnkStruct *)sub_0803EDDC(*(u16 *)(D_030023E0 + 0xA0));
    if (obj != NULL) {
        obj->unk3B = var_r4;
        obj->unk3A = 1;
        obj->unk3C = 5;
        obj->unk64 = (u32)sub_08047568;
        obj->unk2 = arg1;
        obj->unk6 = arg2;
    }
}

void sub_08047588(void *arg0) {
    u16 *p = (u16 *)((u8 *)arg0 + 0x54);
    u16 timer = *p - 1;
    *p = timer;
    if (timer == 0) {
        *p = 0xA0;
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_08047624;
    }
    sub_0803A8EC(arg0);
}

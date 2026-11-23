extern void sub_08046B28(Entity *);
extern void sub_08046E78(void);
extern u8 sub_08003104(void);
extern void sub_08049C40(Entity *, s32, s32);
extern void sub_08049E88(Entity *);
extern void sub_08048EF4(void);
extern void sub_08049EC4(void);
extern void sub_08037FC4(Entity *, s32);
extern u8 D_03001850[];

void sub_08046E28(Entity *arg0) {
    arg0->unk2A = 0x140;
    arg0->unk1C = 0x1B0;
    arg0->unk41 = 0x0A;
    *(u8 *)((u8 *)arg0 + 0x3D) = 0x02;
    *(u8 *)((u8 *)arg0 + 0x3C) = 0x06;
    arg0->unk2C = arg0->unk6;
    if (arg0->unk3B != 0) {
        arg0->unk6 = arg0->unk6 - 0x11;
    } else {
        arg0->unk6 = arg0->unk6 - 0x0F;
    }
    arg0->unk64 = (u32)&sub_08046E78;
    sub_08046B28(arg0);
}

void sub_080489B0(Entity *arg0) {
    u8 var_r1;
    *(u16 *)((u8 *)arg0 + 0x58) = (u16)(-*(s16 *)((u8 *)arg0 + 0x02));
    *(u16 *)((u8 *)arg0 + 0x5A) = arg0->unk6;
    sub_08049E88(arg0);
    var_r1 = sub_08003104();
    if (var_r1 == 0) {
        var_r1 = 0xFF;
    }
    *(u8 *)((u8 *)arg0 + 0x54) = var_r1;
    *(u8 *)((u8 *)arg0 + 0x55) = var_r1;
    arg0->unk3B = 1;
    arg0->unk64 = (u32)&sub_08048EF4;
    sub_08049C40(arg0, 0x40, 0x3E);
}

void sub_08048A80(Entity *arg0) {
    u8 temp_r0;
    *(u16 *)((u8 *)arg0 + 0x58) = *(u16 *)((u8 *)arg0 + 0x02);
    *(u16 *)((u8 *)arg0 + 0x5A) = arg0->unk6;
    *(u8 *)((u8 *)arg0 + 0x61) = 0x14;
    *(u16 *)((u8 *)arg0 + 0x38) = 0x80;
    temp_r0 = D_03001850[0] + 1;
    D_03001850[0] = temp_r0;
    *(u8 *)((u8 *)arg0 + 0x5F) = temp_r0;
    arg0->unk64 = (u32)&sub_08049EC4;
    sub_08049C40(arg0, 0x1A0, 0x0C);
    sub_08049E88(arg0);
    sub_08037FC4(arg0, 0);
}

void sub_08048B44(Entity *arg0) {
    u8 var_r1;
    *(u16 *)((u8 *)arg0 + 0x58) = (u16)(-*(s16 *)((u8 *)arg0 + 0x02));
    *(u16 *)((u8 *)arg0 + 0x5A) = arg0->unk6;
    sub_08049E88(arg0);
    var_r1 = sub_08003104();
    if (var_r1 == 0) {
        var_r1 = 0xFF;
    }
    *(u8 *)((u8 *)arg0 + 0x54) = var_r1;
    *(u8 *)((u8 *)arg0 + 0x55) = var_r1;
    arg0->unk3B = 0;
    arg0->unk64 = (u32)&sub_08048EF4;
    sub_08049C40(arg0, 0x80, 0x38);
}

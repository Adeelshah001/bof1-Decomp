extern const u8 D_080A6624[];

void sub_08045C30(void);
void sub_08045E24(void);
void sub_080A0A68(void *, const void *, u32);
void sub_08048284(void *, s32, u8, s32);
void sub_08048250(void *);

void sub_08045544(Entity *arg0) {
    u8 r1 = arg0->unk3B;
    u8 r0 = 0x80;
    r0 |= r1;
    arg0->unk3B = r0;
    ((u8 *)arg0)[0x6C] = 0x80;
    arg0->unk1C = 0x60;
    arg0->unk64 = (u32)sub_08045C30;
}

void sub_080454AC(Entity *arg0) {
    u8 arr[4];
    u8 r1;
    u8 r2;
    s32 r0;

    sub_080A0A68(arr, D_080A6624, 4);
    r1 = arg0->unk3B;
    r2 = r1 >> 3;
    r0 = 7;
    r0 &= r1;
    arg0->unk3B = r0 - 2;
    ((u8 *)arg0)[0x3F] = 2;
    arg0->unk2A = 0x182;
    arg0->unk64 = (u32)sub_08045E24;
    sub_08048284(arg0, 4, arr[r2], 1);
    sub_08048250(arg0);
}

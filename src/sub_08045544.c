void sub_08045C30(void);

void sub_08045544(Entity *arg0) {
    s32 r0;
    u8 r1 = arg0->unk3B;

    r0 = 0x80;
    r0 |= r1;
    arg0->unk3B = r0;
    ((u8 *)arg0)[0x6C] = 0x80;
    arg0->unk1C = 0x60;
    arg0->unk64 = (u32)sub_08045C30;
}

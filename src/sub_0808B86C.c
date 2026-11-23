extern u8 D_03004F30[];
extern u8 D_03004F50[];
void sub_0808EE54(void *actor);

void sub_0808B86C(u8 *actor)
{
    u16 value;
    u16 highBit;
    u16 check;
    u32 reference;
    u32 port;
    u16 distance;

    port = (u32)D_03004F30;
    value = *(volatile u16 *)(port + 0xE);
    highBit = 0x8000;
    check = value;
    check &= highBit;
    if (check == 0) {
        if (actor[0x4D] != 0 || actor[0x3C] == 0x54)
            goto process;

        value = *(volatile u16 *)(actor + 0xF6);
        reference = (u32)D_03004F50;
        reference = *(volatile u16 *)(reference + 0x40);
        value -= reference;
        check = value;
        check &= highBit;
        if (check == 0) {
            distance = value * 4;
            if (distance >= *(u16 *)(actor + 0xF4)) {
process:
                sub_0808EE54(actor);
                return;
            }
        }
    }

    --D_03004F50[0x5F];
    sub_0808EE54(actor);
}

void sub_080332C0(void *);

void sub_08053DD4(Entity *actor)
{
    u32 kind = actor->unk3B;
    u8 otherKind;
    if ((u8)(kind + 5) <= 3 || (otherKind = kind) == 0x5C || otherKind == 0x5D) {
        ((u8 *)actor)[0x3D] = 2;
        actor->unk1C = 0x60;
    } else if (otherKind <= 0xEF) {
        ((u8 *)actor)[0x3D] = 2;
    } else {
        u32 animation, low, high;
        ((u8 *)actor)[0x3D] = 0;
        animation = actor->unk1C;
        low = animation << 4;
        high = (animation << 20) >> 24;
        high <<= 9;
        low &= 0xFF;
        high += low;
        high += 0x6000;
        *(u16 *)((u8 *)actor + 0x2E) = high;
        sub_080332C0(actor);
    }
}

extern const u8 D_081529D8[];
u16 sub_0807B2BC(Entity *actor);
void sub_08083484(Entity *actor);

void sub_0808A2EC(Entity *actor)
{
    u8 kind;
    u32 remaining;
    u32 index;
    u8 *count;
    u8 *position;

    sub_0807B2BC(actor);
    kind = (u8)*(u16 *)((u8 *)actor + 0x24);
    if (kind == 10) {
        u8 *state = &actor->unk4D;
        *state = kind;
        sub_08083484(actor);
        return;
    }
    if (kind != 4)
        return;

    count = &actor->unk54;
    remaining = --*count;
    if ((u8)remaining == 0) {
        kind = 1;
        *(u16 *)((u8 *)actor + 0x20) = kind;
        return;
    }

    position = (u8 *)actor + 0x55;
    index = *position;
    kind = *count;
    if (kind == D_081529D8[index]) {
        *position = index + 1;
        goto normal;
    }
    if (kind > 29 || (kind & 1)) {
        count = &actor->unk41;
        remaining = 8;
    } else {
normal:
        count = &actor->unk41;
        remaining = 14;
    }
    *count = remaining;
    *(u16 *)((u8 *)actor + 0x20) = 2;
}

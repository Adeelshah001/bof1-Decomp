extern u8 D_03004F50[];
s32 sub_08037980(u16, u16);
u8 sub_0807CAB8(Entity *, void *);
void sub_08083BB4(Entity *);
void sub_0808B4BC(Entity *);

void sub_0808B0A0(Entity *actor)
{
    u32 target;
    s32 status;
    u8 *battle;
    u16 *current;
    u32 product;
    u16 value;

    do {
        status = sub_0807CAB8(actor, &target);
        if (status == 0)
            return;
        if (status == 3) {
            sub_0808B4BC(actor);
            return;
        }
    } while (status == 2);

    actor->unk78 = target;
    battle = D_03004F50;
    *(u32 *)(battle + 0x54) = target;
    sub_08083BB4(actor);
    current = (u16 *)(battle + 0x40);
    product = sub_08037980(*current, 205);
    value = product >> 8;
    if ((u8)product)
        value++;
    *current = value;
    *(u16 *)(battle + 0x74) = value;
    actor->unk4D = 40;
}

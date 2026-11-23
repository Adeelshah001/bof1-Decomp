extern u8 D_03003FA8;
void sub_080379D4(s32);
void sub_08037C98(void *, s32);

void sub_0804D5E0(Entity *actor)
{
    sub_08037C98(actor, 0);
    if (!(actor->unk3B & 0x80)) {
        switch (*(u16 *)((u8 *)actor + 0x24)) {
        case 2:
        case 8:
        case 0xE:
            if (((s8)D_03004830[0x31] != 6 || (D_03003FA8 & 0xF) != 0) && actor->unk3B != 0x2F) {
                sub_080379D4(0x1D);
            }
            *(u16 *)((u8 *)actor + 0x24) = 0;
            break;
        }
    }
}

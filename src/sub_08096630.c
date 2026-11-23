struct Actor96630 {
    u8 pad00[0x44];
    u16 unk44;
    u16 pad46;
    u16 unk48;
    u16 pad4A;
    u8 unk4C;
};

void sub_080379D4(s32);
u8 sub_080957BC(struct Actor96630 *);
void sub_08095C70(struct Actor96630 *);
void sub_08096CD4(struct Actor96630 *);
void sub_08096D44(s32);
void sub_08097040(struct Actor96630 *, s32);

void sub_08096630(struct Actor96630 *actor)
{
    u16 *speed = &actor->unk44;
    u16 zero = 0;
    u8 *state = &actor->unk4C;

    u16 status;
    u32 result;
    do {
        result = sub_080957BC(actor);
        status = result;
        switch (result) {
        case 0:
            return;
        case 1:
            sub_08096D44(0x48C0);
            sub_080379D4(0x1C);
            result = 0x300;
            *speed = result;
            *(u16 *)((u8 *)actor + 0x48) = zero;
            sub_08097040(actor, 0x48);
            ++*state;
            sub_08095C70(actor);
            return;
        default:
            break;
        }
    } while (status == 2);
    sub_08096CD4(actor);
}

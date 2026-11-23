extern s16 D_03004E14;
extern u16 D_03004E18;
void sub_0803D510(void);
void sub_0803EE6C(void *);

void sub_08052300(Entity *actor)
{
    u8 *timer = &actor->unk54;
    if (--*timer == 0) {
        s16 *position;
        u32 remaining;
        u8 next;
        *timer = 4;
        position = &D_03004E14;
        *position += -0x421;
        sub_0803D510();
        remaining = *timer;
        remaining--;
        ((u8 *)actor)[0x55] = remaining;
        next = remaining;
        if (next == 0) {
            D_03004E18 = next;
            *position = next;
            sub_0803EE6C(actor);
        }
    }
}

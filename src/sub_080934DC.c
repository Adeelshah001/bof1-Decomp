typedef struct {
    u8 pad00[0x4C];
    u8 phase;
    u8 pad4D[0x54 - 0x4D];
    u8 delay : 8;
    u8 cycles : 8;
    u8 pad56[0x6C - 0x56];
    void *parent;
    u8 pad70[0x78 - 0x70];
    void *target;
} ActionState;

void sub_0809352C(ActionState *);
void sub_08093640(ActionState *);

void sub_080934DC(ActionState *actor)
{
    if (--actor->delay & 0x80) {
        actor->delay = 3;
        if (--actor->cycles & 0x80) {
            actor->target = actor->parent;
            ++actor->phase;
            sub_08093640(actor);
            return;
        }
        sub_0809352C(actor);
    }
}

typedef struct {
    u8 pad00[0xF0];
    u8 flags;
    u8 padF1[0x15E - 0xF1];
    u8 state;
    u8 pad15F[0x214 - 0x15F];
    u8 secondaryFlags;
} ActorPair;

extern ActorPair D_03002BD4;
extern u8 D_030035A0[];
void sub_08034120(void *, void *);
void sub_0803414C(void *);
void sub_080391BC(void *);
void sub_080017EC(u16);
void sub_08001888(u16);

void sub_08033FA4(void) {
    ActorPair *actor = &D_03002BD4;
    u32 zero = 0;
    actor->flags |= 0x40;
    actor->state = zero;
}

void sub_08033FC4(void) {
    ActorPair *actor = &D_03002BD4;
    actor->flags &= 0xBF;
    sub_08034120(actor, D_030035A0);
    sub_0803414C(actor);
    sub_080017EC(0x3F);
    sub_080391BC(actor);
    ((u8 *)actor)[-0x6C] &= 0xFB;
}

void sub_08033F80(void) {
    ActorPair *actor = &D_03002BD4;
    actor->flags &= 0xBF;
    actor->secondaryFlags &= 0xBF;
}

void sub_08033F44(void) {
    ActorPair *actor = &D_03002BD4;
    actor->flags &= 0xBF;
    sub_08034120(actor, D_03003420);
    sub_0803414C(actor);
    ((u8 *)actor)[-0x6C] &= 0xFB;
    sub_08001888(0x39);
}

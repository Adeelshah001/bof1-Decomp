void sub_0808E778(void *);
void sub_0808E674(void *);
void sub_0808E664(void *, s32);
void sub_08083484(void *);

typedef union {
    u32 word;
    u8 low;
} ObjectTimerWord;

extern ObjectTimerWord D_030040F0;

typedef struct {
    u8 pad00[0x10];
    u16 unk10, unk12, unk14, unk16;
    u8 pad18[0x4D - 0x18];
    u8 unk4D;
    u8 pad4E[0x54 - 0x4E];
    u8 unk54;
    u8 unk55 : 8;
} ObjectMotionState;

void sub_0808E25C(ObjectMotionState *entity)
{
    ObjectTimerWord *counter = &D_030040F0;
    u32 timer = counter->low;
    timer++;
    timer &= 0x1F;
    if (timer == 0) {
        entity->unk54 = 15;
        entity->unk4D = 16;
        entity->unk10 = 0x100;
        entity->unk12 = timer;
        entity->unk14 = 0x100;
        entity->unk16 = timer;
    } else {
        counter->word = timer;
    }
}

void sub_0808E290(ObjectMotionState *entity)
{
    if (--entity->unk54 != 0) {
        sub_0808E778(entity);
    } else {
        u16 fraction;
        entity->unk4D = 0x12;
        fraction = 0xFF;
        entity->unk10 = 0xFA00;
        entity->unk12 = fraction;
        entity->unk14 = 0xFC00;
        entity->unk16 = fraction;
    }
}

void sub_0808DF5C(ObjectMotionState *entity)
{
    if (--entity->unk54 == 0) {
        u8 reset = 3;
        entity->unk54 = reset;
        if (((--entity->unk55) & 0x80) == 0) {
            sub_0808E674(entity);
        } else {
            entity->unk54 = 1;
            entity->unk55 = reset;
            sub_0808E664(entity, 6);
        }
    }
}

void sub_0808DE08(Entity *entity)
{
    Entity *saved = entity;
    u32 timer = entity->unk54;
    u8 pose;
    timer--;
    entity->unk54 = timer;
    if ((u8)timer != 0) {
        u32 odd = timer & 1;
        pose = 14;
        if (odd != 0)
            goto applyPose;
        goto defaultPose;
    } else {
        sub_08083484(saved);
        saved->unk4D = 10;
defaultPose:
        pose = 8;
    }
applyPose:
    saved->unk41 = pose;
}

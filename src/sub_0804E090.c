typedef struct {
    u8 pad00[2];
    u8 depth;
    u8 pad03[3];
    u16 center;
    u8 pad08[0x46 - 8];
    u8 radius;
    u8 pad47[0xAC - 0x47];
    u16 startOffset;
    u16 endOffset;
} SlopedProfileActor;

void sub_0804E090(SlopedProfileActor *actor, u16 step)
{
    u16 *startOffset = &actor->startOffset;
    u16 center = actor->center;
    u16 start = center + *startOffset;
    u16 end = center + actor->endOffset;
    u8 remaining = actor->radius;
    u8 depth = actor->depth;
    u32 buffer = 0x020291C0;
    u32 offset = 0x100;
    u32 sign = 0x80;

    do {
        *(u8 *)((start + offset) + buffer) = depth - remaining;
        *(u8 *)((end + offset) + buffer) = depth + remaining;
        start += step;
        end += step;
        remaining--;
    } while (!(remaining & sign));
}

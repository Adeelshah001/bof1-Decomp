typedef struct {
    u8 pad00[2];
    u16 x;
    u8 pad04[2];
    u16 y;
    u8 pad08[0x2C - 8];
    u16 groundY;
    u8 pad2E[0x46 - 0x2E];
    u16 previousX;
    u8 pad48[2];
    u16 previousY;
} MotionTarget;

s32 sub_080515D8(Entity *motion)
{
    MotionTarget *target = *(MotionTarget **)((u8 *)motion + 0xD4);
    u32 mask;
    u32 velocity = *(u32 *)((u8 *)motion + 0x10);
    u32 position;
    u32 offset;
    mask = 0xFFFFFF;
    velocity &= mask;
    position = velocity >> 8;
    position += target->x;
    target->x = position;
    offset = 0x46;
    *(u16 *)(offset + (u32)target) = position;
    velocity = *(u32 *)((u8 *)motion + 0x14);
    velocity &= mask;
    position = velocity >> 8;
    position += target->y;
    target->y = position;
    target->previousY = position;
    target->groundY = *(vu16 *)&target->y;
    if (--motion->unk54 != 0)
        return 1;
    return 0;
}

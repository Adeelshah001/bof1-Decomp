typedef struct {
    u8 id;
    u8 pad01[0x18];
    u8 flags;
} TargetState;

extern const u8 D_08152BC4[];

void *sub_0808069C(const u8 *actor, void *fallback, u16 action)
{
    register u8 *entry;
    register TargetState *target;
    register u32 stride;
    register u8 *end;
    register u32 mask;
    register u8 bits;
    register u32 test;

    bits = *(const u8 *)(action + (u32)D_08152BC4);
    bits &= 0x40;
    if (bits != 0) {
        bits = actor[0x5F];
        test = 0xF;
        test &= bits;
        if (test == 1) {
            return fallback;
        }

        entry = D_03003420;
        mask = 0x80;
        stride = 0x124;
        target = (TargetState *)(entry + 0xD8);
        end = entry + 0xB68;
        do {
            if (entry[0x3A]) {
                bits = target->flags;
                test = mask;
                test &= (u32)bits;
                if (test == 0) {
                    bits = target->id;
                    if (bits != 0x5E)
                        return entry;
                }
            }
            target = (TargetState *)((u8 *)target + stride);
            entry += stride;
        } while (entry < end);
    }

    return fallback;
}

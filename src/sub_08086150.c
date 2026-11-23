typedef struct LinkedState86150 LinkedState86150;
struct LinkedState86150 {
    u8 pad00[0x3A];
    u8 unk3A;
    u8 pad3B[0x41 - 0x3B];
    u8 unk41;
    u8 pad42[0x55 - 0x42];
    u8 timer : 8;
    u8 pad56[0x6C - 0x56];
    LinkedState86150 *parent;
};

u8 sub_08003104(void);
void sub_0807B248(LinkedState86150 *);
void sub_080865F0(LinkedState86150 *);

void sub_08086150(LinkedState86150 *state)
{
    LinkedState86150 *parent;
    u32 mode;
    u32 mask;

    sub_0807B248(state);
    parent = state->parent;
    if (parent->unk3A != 0) {
        parent->unk41 = state->unk41;
    } else if (--state->timer & 0x80) {
        state->timer = 0x3C;
        mode = (u32)sub_08003104() << 24;
        mask = 0x03000000;
        mask &= mode;
        if (!mask && parent->unk3A == 0)
            sub_080865F0(state);
        else
            state->timer >>= 1;
    }
}

typedef struct {
    u8 pad00[0x4C];
    u8 state;
    u8 initialized : 8;
    u8 pad4E[7];
    u8 delay : 8;
    u8 pad56[0xB];
    u8 frame;
} Effect93960;

void sub_08037FC4(Effect93960 *, s32);
void sub_0809568C(Effect93960 *, s32);
void sub_08095EFC(Effect93960 *);
void sub_08096E48(Effect93960 *);

void sub_08093960(Effect93960 *effect)
{
    if (effect->initialized) {
        sub_08096E48(effect);
    } else {
        u32 frame;
        u32 delay;
        u32 mask;
        effect->initialized++;
        frame = (u32)(effect->frame + 4) << 24;
        mask = 0x1F000000;
        mask &= frame;
        effect->frame = mask >> 24;
        delay = effect->delay - 1;
        if (!((effect->delay = delay) & 0x80))
            sub_0809568C(effect, 8);
        effect->state++;
        sub_08037FC4(effect, 0);
        sub_08095EFC(effect);
    }
}

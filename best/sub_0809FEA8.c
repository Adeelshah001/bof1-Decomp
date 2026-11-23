typedef struct {
    u8 flags;
    u8 pad01[0x16];
    u8 modulation;
    u8 pad18[0x38];
} ModulationTrack;

typedef struct {
    u8 pad00[8];
    u8 trackCount;
    u8 pad09[0x23];
    ModulationTrack *tracks;
    u32 pad30;
    u32 ident;
} ModulationPlayer;

void sub_0809FE88(ModulationTrack *track);

void sub_0809FEA8(ModulationPlayer *player, u16 trackBits, u8 depth)
{
    s32 count;
    ModulationTrack *track;
    s32 bit;
    s32 length;
    u32 active;
    u8 flags;

    if (player->ident == 0x68736D53) {
        player->ident++;
        count = player->trackCount;
        track = player->tracks;
        bit = 1;
        if (count > 0) {
            length = depth;
            do {
                if (trackBits & bit) {
                    active = 0x80;
                    flags = track->flags;
                    active &= flags;
                    if (active) {
                        track->modulation = depth;
                        if (length == 0)
                            sub_0809FE88(track);
                    }
                }
                --count;
                ++track;
                bit <<= 1;
            } while (count > 0);
        }
        player->ident = 0x68736D53;
    }
}

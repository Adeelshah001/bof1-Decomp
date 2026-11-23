typedef struct {
    u8 flags;
    u8 pad01;
    u8 depth;
    u8 pad03[0x40 - 3];
    const u8 *cursor;
    const u8 *returnStack[3];
} MusicTrack;

u32 sub_0809E512(u32, MusicTrack *, const u8 *, u32);
u32 sub_0809E510(u32, MusicTrack *, const u8 *);
void sub_0809E4C8(u32, MusicTrack *);

u32 sub_0809E52E(u32 arg0, MusicTrack *track, const u8 *cursor)
{
    track->cursor = cursor + 1;
    return sub_0809E512(arg0, track, cursor, *cursor);
}

void sub_0809E538(u32 unused, MusicTrack *track)
{
    const u8 *cursor = track->cursor;
    u32 upper = ((((u32)cursor[3] << 8 | cursor[2]) << 8 | cursor[1]) << 8);
    track->cursor = (const u8 *)(upper | sub_0809E510(upper, track, cursor));
}

void sub_0809E558(u32 arg0, MusicTrack *track)
{
    u32 depth = track->depth;
    if (depth < 3U) {
        track->returnStack[depth] = track->cursor + 4;
        track->depth++;
        sub_0809E538(arg0, track);
    } else {
        sub_0809E4C8(arg0, track);
    }
}

void sub_0809E574(u32 unused, MusicTrack *track)
{
    u32 depth = track->depth;
    if (depth != 0) {
        --depth;
        track->depth = depth;
        track->cursor = track->returnStack[depth];
    }
}

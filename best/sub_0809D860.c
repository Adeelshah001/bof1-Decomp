extern u32 D_03005040;
extern u32 D_03005070;
extern u8 D_03005080[];
extern u8 D_03005050[];

u32 sub_0809DC90(u8 *, u8 *);

typedef struct {
    u8 flags;
    u8 pad01[0x11];
    u8 volume;
    u8 pad13[0x24 - 0x13];
    u32 voice[3];
    u8 pad30[0x10];
    const u8 *cursor;
} MusicTrack;

typedef struct {
    u8 pad00[0x30];
    const u32 (*voices)[3];
} MusicPlayer;

u32 sub_0809E512(MusicPlayer *, MusicTrack *, const void *, u32);
u8 sub_0809E52C(MusicPlayer *, MusicTrack *);

void sub_0809D860(u8 *dst, const u8 *src)
{
    do {
    } while ((*dst++ = *src++) != 0);
}

void sub_0809D834(void)
{
    u32 *previous = &D_03005040;
    u32 *status = &D_03005070;
    *previous = *status;
    *status = sub_0809DC90(D_03005080, D_03005050);
}

void sub_0809E5EC(MusicPlayer *player, MusicTrack *track)
{
    const u8 *cursor = track->cursor;
    const u32 *voice;
    track->cursor = cursor + 1;
    voice = player->voices[*cursor];
    track->voice[0] = sub_0809E512(player, track, voice, voice[0]);
    track->voice[1] = sub_0809E512(player, track, voice, voice[1]);
    track->voice[2] = sub_0809E512(player, track, voice, voice[2]);
}

void sub_0809E61C(MusicPlayer *player, MusicTrack *track)
{
    track->volume = sub_0809E52C(player, track);
    track->flags |= 3;
}

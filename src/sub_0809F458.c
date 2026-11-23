typedef struct {
    u8 flags;
    u8 pad01[0x4F];
} MusicTrackState;

typedef struct MusicPlayerState MusicPlayerState;
typedef void (*MusicPlayerCallback)(MusicPlayerState *);

struct MusicPlayerState {
    u32 pad00;
    u32 status;
    u8 trackCount;
    u8 pad09[0x2C - 0x09];
    MusicTrackState *tracks;
    u32 pad30;
    u32 ident;
    MusicPlayerCallback nextCallback;
    MusicPlayerState *nextPlayer;
};

typedef struct {
    u32 ident;
    u8 pad04[0x1C];
    MusicPlayerCallback callback;
    MusicPlayerState *player;
} SoundDriverState;

extern SoundDriverState *D_03007FF0;
void sub_0809F104(MusicPlayerState *);
void sub_0809E708(MusicPlayerState *);

void sub_0809F458(MusicPlayerState *player, MusicTrackState *tracks, u8 count)
{
    SoundDriverState *driver;
    u32 ident;
    MusicPlayerCallback callback;

    if (count == 0)
        return;
    if (count > 16)
        count = 16;

    driver = D_03007FF0;
    ident = driver->ident;
    if (ident != 0x68736D53)
        return;

    driver->ident = ident + 1;
    sub_0809F104(player);
    player->tracks = tracks;
    player->trackCount = count;
    player->status = 0x80000000;
    while (count != 0) {
        tracks->flags = 0;
        --count;
        ++tracks;
    }

    callback = driver->callback;
    if (callback != NULL) {
        player->nextCallback = callback;
        player->nextPlayer = driver->player;
        driver->callback = NULL;
    }
    driver->player = player;
    driver->callback = sub_0809E708;
    driver->ident = 0x68736D53;
    player->ident = 0x68736D53;
}

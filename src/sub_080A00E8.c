typedef struct {
    u8 pad00[0x24];
    u8 field24;
    u8 pad25[3];
    u32 field28;
    u8 pad2C[0x40 - 0x2C];
    const u8 *cursor;
} MusicTrack;

typedef void (*MusicCommand)(void *, MusicTrack *);
extern const MusicCommand D_080BB2E4[];

void sub_080A0B1C(u8 *, const u8 *, u8 *);
void sub_080A0400(u8 *);

void sub_080A045C(const u8 *format, ...)
{
    u8 buffer[0x100];
    u8 *args;
    args = (u8 *)&format + 4;
    sub_080A0B1C(buffer, format, args);
    sub_080A0400(buffer);
}

void sub_080A0164(s32 unused, MusicTrack *track)
{
    track->field24 = *track->cursor;
    track->cursor = track->cursor + 1;
}

void sub_080A011C(s32 unused, MusicTrack *track)
{
    union {
        u32 word;
        struct {
            u32 byte0 : 8;
            u32 byte1 : 8;
            u32 byte2 : 8;
            u32 byte3 : 8;
        } bytes;
    } data;
    const u8 *cursor = track->cursor;
    data.bytes.byte0 = cursor[0];
    data.bytes.byte1 = cursor[1];
    data.bytes.byte2 = cursor[2];
    data.bytes.byte3 = cursor[3];
    track->field28 = data.word;
    track->cursor = cursor + 4;
}

void sub_080A00E8(void *player, MusicTrack *track)
{
    u32 command = *track->cursor;
    const MusicCommand *table;
    track->cursor++;
    table = D_080BB2E4;
    table[command](player, track);
}

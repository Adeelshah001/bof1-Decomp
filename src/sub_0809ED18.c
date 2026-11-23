typedef struct {
    u8 pad00[0x0B];
    u8 priority;
    u8 pad0C[0x0C];
    void *extensions;
} MusicPlayerState;

typedef struct {
    MusicPlayerState *player;
    void *tracks;
    u8 trackCount;
    u16 priority;
} MusicPlayerEntry;

void sub_0809E0EC(void);
void sub_080A0214(u32, void *, volatile void *);
void sub_0809F118(void *);
void sub_0809EFD4(void *);
void sub_0809F2B4(u32);
void sub_0809F458(MusicPlayerState *, void *, u8);
extern u8 D_03001218[], D_0203EB40[], D_0203FB80[], D_0203FE40[];
extern volatile u16 D_04000100[];
extern const MusicPlayerEntry D_080BB7EC[];
extern const u8 D_00000009[];

void sub_0809ED18(void)
{
    sub_080A0214((u32)sub_0809E0EC & ~1, D_03001218, D_04000100);
    sub_0809F118(D_0203EB40);
    sub_0809EFD4(D_0203FB80);
    sub_0809F2B4(0x95F800);

    {
        u16 total = (u32)D_00000009;
        if (total != 0) {
            const MusicPlayerEntry *entry = D_080BB7EC;
            u32 count = total;
            do {
                MusicPlayerState *player = entry->player;
                sub_0809F458(player, entry->tracks, entry->trackCount);
                player->priority = *(const volatile u16 *)&entry->priority;
                player->extensions = D_0203FE40;
                entry++;
            } while (--count != 0);
        }
    }
}

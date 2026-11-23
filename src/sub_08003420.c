/* identical to sub_08003378 (matched), with its names changed by decompdecomp */
typedef struct {
    s32 *state;
    u32 reserved[2];
} AudioSlot;

typedef struct {
    s32 song;
    u16 slot;
} AudioEntry;

extern AudioSlot D_080BB7EC[];
extern AudioEntry D_080BB858[];
void sub_0809F5B4(void *);

extern u8 D_030033FC;
extern u8 D_03001860;
void sub_08003FA0(u8);

typedef struct {
    u16 pad[3];
    u16 buttons;
} Input030016E0;
typedef struct {
    u8 pad[10];
    u8 unkA;
} State03004410;
typedef struct {
    u8 pad[0xA8];
    u16 unkA8;
} State030023E0;
extern Input030016E0 D_030016E0;
extern State03004410 D_03004410;
extern State030023E0 D_030023E0;
extern u8 D_03003418, D_0300341C, D_03003FB4;

void sub_08003420(u8 song)
{
    u8 *activeSong = &D_030033FC;
    if (*activeSong != 0) {
        AudioSlot *slots = D_080BB7EC;
        AudioEntry *songs = D_080BB858;
        sub_0809F5B4(slots[songs[*activeSong].slot].state);
    }
    sub_08003FA0(song);
}

void sub_08003334(void)
{
    u8 song = D_03001860;
    u8 *activeSong = &D_030033FC;
    if (*activeSong != 0) {
        AudioSlot *slots = D_080BB7EC;
        AudioEntry *songs = D_080BB858;
        sub_0809F5B4(slots[songs[*activeSong].slot].state);
    }
    sub_08003FA0(song);
}

void sub_08003300(void)
{
    if ((D_030016E0.buttons & 8) == 0)
        return;
    D_03004410.unkA = 1;
}

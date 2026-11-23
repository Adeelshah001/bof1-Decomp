typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;

typedef struct {
    u8 pad00[0x51];
    u8 unk51;
    u8 pad52[0xC5 - 0x52];
    u8 unkC5;
    u8 unkC6;
} Actor4A5A4;

extern MapState D_030023E0;
extern u32 D_03001694;
extern u8 D_0300178C;
extern u32 D_030040F0;
extern const u8 D_080A6680[];

void sub_0804A974(void *);
void sub_080A0A68(void *, const void *, s32);

void sub_0804A5A4(Actor4A5A4 *actor) {
    u8 arr[4];

    sub_080A0A68(arr, D_080A6680, 4);
    if (!(actor->unkC6 & 0x80)) {
        D_030040F0 = arr[actor->unkC6];
        actor->unkC6--;
    } else {
        sub_0804A974(actor);
        D_0300178C = actor->unkC5;
        actor->unk51 = 0;
    }
    if (D_030023E0.mode == 0x56 || D_030023E0.mode == 0x7F) {
        D_03001694 |= 1;
    }
}

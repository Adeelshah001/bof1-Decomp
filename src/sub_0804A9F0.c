extern u8 D_03003410;
extern s32 D_030040F0;
extern s32 D_03003FB0;
extern s32 D_03002500;

typedef struct {
    u8 pad00[0x9C];
    u16 unk9C;
    u16 unk9E;
    u16 unkA0;
    u16 unkA2;
    u8 padA4[0xC6 - 0xA4];
    u8 unkC6;
} Actor4A904;

void sub_0803EE6C(Actor4A904 *);
void *sub_080A0A68(void *dst, const void *src, u32 len);

void sub_0804A9F0(Actor4A904 *actor)
{
    u8 arr[4];

    sub_080A0A68(arr, (const u8 *)0x080A6684, 4);
    if ((actor->unkC6 & 0x80) == 0) {
        D_030040F0 = arr[actor->unkC6];
        actor->unkC6--;
        return;
    }
    D_030040F0 = actor->unk9C;
    D_03003FB0 = actor->unk9E;
    D_03002500 = actor->unkA0;
    D_03003410 = actor->unkA2;
    sub_0803EE6C(actor);
}

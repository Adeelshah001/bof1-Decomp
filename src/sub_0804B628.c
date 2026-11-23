typedef struct {
    u8 padding[0xA4];
    u16 mode;
} MapState;

extern MapState D_030023E0;
extern u8 D_03002AB0[];
extern const u8 D_0822AE00[];

void sub_08003420(u8);
void sub_0803EE6C(void *);

void sub_0804B628(Entity *actor)
{
    u16 mode;

    if (--(*(u16 *)((u8 *)actor + 0x54)) == 0) {
        mode = D_030023E0.mode;
        if (mode != 0x169 && mode != 0x199) {
            D_03002AB0[0xB8] &= ~4;
        }
        sub_08003420(D_0822AE00[D_030023E0.mode]);
        sub_0803EE6C(actor);
    }
}

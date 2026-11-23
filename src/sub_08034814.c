extern u8 D_03004830[];

void sub_08034794(void *actor) {
    *(u32 *)((u8 *)actor + 0x88) = 0;
    *(u8 *)((u8 *)actor + 0x4C) = 2;
    *(u8 *)((u8 *)actor + 0x50) = 0;
    *((u8 *)actor + 0x4D) = 0;
}

void sub_08034768(void *actor) {
    *(u8 *)((u8 *)actor + 0xB8) &= 0xFB;
    *(u32 *)((u8 *)actor + 0x88) = 0;
    *(u8 *)((u8 *)actor + 0x4C) = 2;
    *(u8 *)((u8 *)actor + 0x50) = 0;
    *((u8 *)actor + 0x4D) = 0;
}

void sub_080347C8(void *actor) {
    D_03004830[0x2D]++;
    *(u32 *)((u8 *)actor + 0x88) = 0;
    *(u8 *)((u8 *)actor + 0x4C) = 2;
    *(u8 *)((u8 *)actor + 0x50) = 0;
    *((u8 *)actor + 0x4D) = 0;
}

void sub_08034814(void *actor) {
    D_03004830[0x2B]++;
    *(u32 *)((u8 *)actor + 0x88) = 0;
    *(u8 *)((u8 *)actor + 0x4C) = 2;
    *(u8 *)((u8 *)actor + 0x50) = 0;
    *((u8 *)actor + 0x4D) = 0;
}

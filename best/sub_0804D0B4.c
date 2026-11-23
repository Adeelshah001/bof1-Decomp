typedef struct { u8 pad[0x2A]; u16 unk2A; } StateBlock;

void sub_0804D0B4(void *arg0) {
    if (((StateBlock *)(void *)0x03004830)->unk2A == 0x0E0E) {
        *(u16 *)((u8 *)arg0 + 0xA6) = (u16)(*(u16 *)((u8 *)arg0 + 0xA6) + 2);
    }
}

void sub_0804D080(void *arg0) {
    if (((StateBlock *)(void *)0x03004830)->unk2A == 0x050E) {
        *(u8 *)((u8 *)arg0 + 0x63) = *(u8 *)((u8 *)arg0 + 0x61);
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)(void (*)(void))0x0804D6B1;
        *(u16 *)((u8 *)arg0 + 0xA6) = (u16)(*(u16 *)((u8 *)arg0 + 0xA6) + 2);
    }
}

void sub_0804D0EC(void *arg0) {
    if (((StateBlock *)(void *)0x03004830)->unk2A == 0x0B0E) {
        *(u16 *)((u8 *)arg0 + 0xA6) = (u16)(*(u16 *)((u8 *)arg0 + 0xA6) + 2);
    }
}

void sub_0804D060(void *arg0) {
    if (((StateBlock *)(void *)0x03004830)->unk2A == 0x040E) {
        *(u16 *)((u8 *)arg0 + 0xA6) = (u16)(*(u16 *)((u8 *)arg0 + 0xA6) + 2);
    }
}

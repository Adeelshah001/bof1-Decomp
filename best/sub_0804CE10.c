extern u8 D_03002AB0[];
extern u8 D_0822F5E6[];
extern void sub_0804D220(void);

void sub_0804CE10(void *arg0) {
    u16 val = *(u16 *)((u8 *)arg0 + 0xA6);
    *(u16 *)((u8 *)arg0 + 0xA6) = (u16)((D_0822F5E6[val] | (D_0822F5E6[val + 1] << 8)) + 0x1A65);
}

void sub_0804CE48(void *arg0) {
    if (*(u32 *)(D_03002AB0 + 0x88) == 0) {
        *(u16 *)((u8 *)arg0 + 0xA6) += 2;
    }
}

void sub_0804CE64(void *arg0) {
    (*(u32 *)(D_03002AB0 + 0x88))++;
    *(u16 *)((u8 *)arg0 + 0xA6) += 2;
}

void sub_0804CE7C(void *arg0) {
    u16 val = *(u16 *)((u8 *)arg0 + 0x24);
    if (val == 0) {
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_0804D220;
        *(u8 *)((u8 *)arg0 + 0x54) = (u8)val;
        *(u16 *)((u8 *)arg0 + 0xA6) += 2;
    }
}

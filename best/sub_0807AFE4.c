void sub_0807AF8C(void *);
void sub_0807AEF0(void *);
void sub_08084DC8(void *);
void sub_08075528(void *);
void sub_0807AD00(void *);

void sub_0807AFE4(void)
{
    void *b;
    u8 *g = (u8 *)0x03004F30;

    *(u16 *)0x030023D4 = 0xF80;
    *(u16 *)0x030040E0 = 0x2F78;

    b = (void *)0x03002AB0;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        *(u8 *)((u8 *)b + 0x3D) = 0;
        if (*(u16 *)((u8 *)b + 0xEC) == 0x2D || *(u16 *)((u8 *)b + 0xEE) == 0x2D) {
            g[0xC] |= 0x80;
        }
        sub_0807AF8C(b);
        sub_0807AEF0(b);
        sub_08084DC8(b);
        sub_08075528(b);
        sub_0807AD00(b);
    }
    b = (void *)0x03002BD4;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        *(u8 *)((u8 *)b + 0x3D) = 0;
        if (*(u16 *)((u8 *)b + 0xEC) == 0x2D || *(u16 *)((u8 *)b + 0xEE) == 0x2D) {
            g[0xC] |= 0x80;
        }
        sub_0807AF8C(b);
        sub_0807AEF0(b);
        sub_08084DC8(b);
        sub_08075528(b);
        sub_0807AD00(b);
    }
    b = (void *)0x03002CF8;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        *(u8 *)((u8 *)b + 0x3D) = 0;
        if (*(u16 *)((u8 *)b + 0xEC) == 0x2D || *(u16 *)((u8 *)b + 0xEE) == 0x2D) {
            g[0xC] |= 0x80;
        }
        sub_0807AF8C(b);
        sub_0807AEF0(b);
        sub_08084DC8(b);
        sub_08075528(b);
        sub_0807AD00(b);
    }
    b = (void *)0x03002E1C;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        *(u8 *)((u8 *)b + 0x3D) = 0;
        if (*(u16 *)((u8 *)b + 0xEC) == 0x2D || *(u16 *)((u8 *)b + 0xEE) == 0x2D) {
            g[0xC] |= 0x80;
        }
        sub_0807AF8C(b);
        sub_0807AEF0(b);
        sub_08084DC8(b);
        sub_08075528(b);
        sub_0807AD00(b);
    }
    b = (void *)0x03002F40;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        sub_08084DC8(b);
        sub_0807AF8C(b);
    }
    b = (void *)0x03003064;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        sub_08084DC8(b);
        sub_0807AF8C(b);
    }
    b = (void *)0x03003188;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        sub_08084DC8(b);
        sub_0807AF8C(b);
    }
    b = (void *)0x030032AC;
    if (*(u8 *)((u8 *)b + 0x3A) != 0 && (*(u8 *)((u8 *)b + 0xF0) & 0x40) == 0) {
        sub_08084DC8(b);
        sub_0807AF8C(b);
    }
}

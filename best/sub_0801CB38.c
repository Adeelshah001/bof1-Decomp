typedef struct {
    u8 pad00[0xB8];
    u8 flags;
} ObjectFlags;

extern ObjectFlags D_03002AB0;
void sub_080017EC(s32);
void sub_0801CB10(void);
void sub_0801C8B0(void);

void sub_0801CAF4(void)
{
    sub_080017EC(0xBC);
    sub_0801CB10();
}

void sub_0801CABC(void)
{
    D_03002AB0.flags |= 4;
    D_03004830[0x2D]++;
    sub_080017EC(0xAF);
}

void sub_0801CB38(Entity *entity)
{
    s8 phase = (s8)D_03004830[0x2D];

    if (phase == 2)
        entity->unk68 += 2;
}

void sub_0801CA94(void)
{
    D_03002AB0.flags |= 4;
    sub_0801C8B0();
}
